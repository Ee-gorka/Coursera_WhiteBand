#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
std::string PrintVector(const std::vector<std::string> &v) {
  std::string str;
  if (!v.empty()) {
    str += " (";
    for (int i = 0; i < v.size(); ++i) {
      str += v[i];
      if (i != v.size() - 1) {
        str += ", ";
      }
    }
    str += ')';
  }
  return str;
}
std::string FindNameByYear(const std::map<int, std::string> &names, int year) {
  std::string name;

  for (const auto &item : names) {
    if (item.first <= year) {
      name = item.second;
    } else {
      break;
    }
  }

  return name;
}
std::vector<std::string> historyOfNames(const std::map<int, std::string> &names,
                                        int year,
                                        const std::string &currentName) {
  std::vector<std::string> allOtherNames;
  for (const auto &item : names) {
    if (item.first < year) {
      allOtherNames.push_back(item.second);
    }
  }
  std::reverse(allOtherNames.begin(), allOtherNames.end());
  for (int i = 0; i < allOtherNames.size(); ++i) {
    while (allOtherNames[i] == allOtherNames[i + 1] && i + 1 < allOtherNames.size())
      allOtherNames.erase(allOtherNames.begin() + i + 1);
  }
  if (!allOtherNames.empty() && allOtherNames[0] == currentName) allOtherNames.erase(allOtherNames.begin());
  return allOtherNames;
}
class Person {
 public:
  void ChangeFirstName(int year, const std::string &first_name) {
    firstName[year] = first_name;
  }
  void ChangeLastName(int year, const std::string &last_name) {
    lastName[year] = last_name;
  }
  std::string GetFullName(int year) {
    const std::string first_name = FindNameByYear(firstName, year);
    const std::string last_name = FindNameByYear(lastName, year);

    if (first_name.empty() && last_name.empty()) {
      return "Incognito";

    } else if (first_name.empty()) {
      return last_name + " with unknown first name";

    } else if (last_name.empty()) {
      return first_name + " with unknown last name";

    } else {
      return first_name + " " + last_name;
    }
  }
  std::string GetFullNameWithHistory(int year) {
    const std::string first_name = FindNameByYear(firstName, year);
    const std::string last_name = FindNameByYear(lastName, year);
    const std::vector<std::string> allLastNames = historyOfNames(lastName, year, last_name);
    const std::vector<std::string> allFirstNames = historyOfNames(firstName, year, first_name);
    if (first_name.empty() && last_name.empty()) {
      return "Incognito";
    } else if (first_name.empty()) {
      return last_name + PrintVector(allLastNames) + " with unknown first name";
    } else if (last_name.empty()) {

      return first_name + PrintVector(allFirstNames) + " with unknown last name";

    } else {
      return first_name + PrintVector(allFirstNames) + " " + last_name + PrintVector(allLastNames);
    }
  }
 private:
  std::map<int, std::string> firstName;
  std::map<int, std::string> lastName;
};
int main() {
  Person person;

  person.ChangeFirstName(1965, "Polina");
  person.ChangeFirstName(1965, "Appolinaria");

  person.ChangeLastName(1965, "Sergeeva");
  person.ChangeLastName(1965, "Volkova");
  person.ChangeLastName(1965, "Volkova-Sergeeva");

  for (int year : {1964, 1965, 1966}) {
    std::cout << person.GetFullNameWithHistory(year) << std::endl;
  }

  return 0;
}
