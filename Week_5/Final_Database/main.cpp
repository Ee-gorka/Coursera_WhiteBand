// Реализуйте функции и методы классов и при необходимости добавьте свои
#include <iostream>
#include <set>
#include <map>
#include <exception>
#include <sstream>
#include <iomanip>
class Date {
 public:
  Date(const int &new_year, const int &new_month, const int &new_day) {
    if (new_month < 1 || new_month > 12)
      throw std::invalid_argument("Month value is invalid: " + std::to_string(new_month));
    else if (new_day < 1 || new_day > 31)
      throw std::invalid_argument("Day value is invalid: " + std::to_string(new_day));
    year_ = new_year;
    month_ = new_month;
    day_ = new_day;
  }
  int GetYear() const {
    return year_;
  }
  int GetMonth() const {
    return month_;
  }
  int GetDay() const {
    return day_;
  }
 private:
  int year_, month_, day_;
};

bool operator<(const Date &lhs, const Date &rhs) {
  if (lhs.GetYear() != rhs.GetYear()) return lhs.GetYear() < rhs.GetYear();
  else if (lhs.GetMonth() != rhs.GetMonth()) return lhs.GetMonth() < rhs.GetMonth();
  else return lhs.GetDay() < rhs.GetDay();
}
std::ostream &operator<<(std::ostream &ostream, const Date &date) {
  ostream << std::setfill('0') << std::setw(4) << date.GetYear() << '-' << std::setfill('0') << std::setw(2)
          << date.GetMonth() << '-'
          << std::setfill('0') << std::setw(2) << date.GetDay();
  return ostream;
}
Date ParseDate(const std::string &date) {
  std::stringstream ss(date);
  int new_year, new_month, new_day;
  bool isValidData = true;
  isValidData = isValidData && (ss >> new_year);
  isValidData = isValidData && (ss.peek() == '-');
  ss.ignore(1);
  isValidData = isValidData && (ss >> new_month);
  isValidData = isValidData && (ss.peek() == '-');
  ss.ignore(1);
  isValidData = isValidData && (ss >> new_day);
  isValidData = isValidData && ss.eof();
  if (isValidData) return Date(new_year, new_month, new_day);
  else throw std::invalid_argument("Wrong date format: " + date);
}

class Database {
 public:
  void AddEvent(const Date &date, const std::string &event) {
    if (!event.empty()) {
      db[date].insert(event);
    }
  }
  bool DeleteEvent(const Date &date, const std::string &event) {
    bool deleteSuccesfully = false;
    if (db[date].count(event) == 1) {
      db[date].erase(event);
      deleteSuccesfully = true;
    }
    return deleteSuccesfully;
  }
  int DeleteDate(const Date &date) {
    int counter = 0;
    if (db.count(date) > 0) {
      counter = db.at(date).size();
      db.erase(date);
    }
    return counter;
  }

  std::set<std::string> Find(const Date &date) const {
    std::set<std::string> result;
    if (db.count(date) > 0) {
      result = db.at(date);
    }
    return result;
  }

  void Print() const {
    for (const auto&[key, value]:db) {
      for (const auto &v:value) {
        std::cout << key << ' ' << v << '\n';
      }
    }
  }
 private:
  std::map<Date, std::set<std::string>> db;
};

int main() {
  Database db;
  try {
    std::string command;
    while (getline(std::cin, command)) {
      if (command.empty()) continue;
      std::stringstream input(command);
      std::string operation;
      input >> operation;
      if (operation == "Add") {
        std::string date_string, event;
        input >> date_string >> event;
        const Date date = ParseDate(date_string);
        if (event != " ") db.AddEvent(date, event);
      } else if (operation == "Del") {
        std::string date_string, event;
        input >> date_string;
        Date date = ParseDate(date_string);
        if (!input.eof()) input >> event;
        if (!event.empty()) {
          if (db.DeleteEvent(date, event)) {
            std::cout << "Deleted successfully\n";
          } else {
            std::cout << "Event not found\n";
          }
        } else {
          const int number_of_deleted_events = db.DeleteDate(date);
          std::cout << "Deleted " + std::to_string(number_of_deleted_events) + " events\n";
        }
      } else if (operation == "Find") {
        std::string date_string;
        input >> date_string;
        const Date date = ParseDate(date_string);
        std::set<std::string> result_of_search = db.Find(date);
        for (const auto &v:result_of_search) {
          std::cout << v << '\n';
        }
      } else if (operation == "Print") {
        db.Print();
      } else {
        std::cout << "Unknown command: " + operation + '\n';
      }
    }
  } catch (std::exception &ex) {
    std::cout << ex.what() << '\n';
  }
  return 0;
}