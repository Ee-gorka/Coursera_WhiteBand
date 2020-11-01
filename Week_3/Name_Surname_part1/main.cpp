#include <iostream>
#include <map>

class Person {
 public:
  void ChangeFirstName(int year, const std::string &first_name) {
    firstName[year] = first_name;
  }
  void ChangeLastName(int year, const std::string &last_name) {
    lastName[year] = last_name;
  }
  std::string GetFullName(int year) {
    bool changeFirstName = false, changeLastName = false;
    int firstNameLastChange = lastChange(year, firstName, changeFirstName),
        lastNameLastChange = lastChange(year, lastName, changeLastName);
    if (!changeFirstName && !changeLastName) {
      return "Incognito";
    } else if (!changeFirstName) {
      return lastName[lastNameLastChange] + " with unknown first name";
    } else if (!changeLastName) {
      return firstName[firstNameLastChange] + " with unknown last name";
    } else {
      return firstName[firstNameLastChange] + ' ' + lastName[lastNameLastChange];
    }
  }
 private:
  static int lastChange(const int &year, const std::map<int, std::string> &container, bool &isChange) {
    int lastYear = 0;
    for (const auto &f:container) {
      if (f.first <= year) {
        lastYear = f.first;

      }
    }
    isChange = lastYear > 0;
    return lastYear;
  }
  std::map<int, std::string> firstName;
  std::map<int, std::string> lastName;
};
int main() {
  Person person;

  person.ChangeFirstName(1965, "Polina");
  person.ChangeLastName(1967, "Sergeeva");
  for (int year : {1900, 1965, 1990}) {
    std::cout << person.GetFullName(year) << std::endl;
  }

  person.ChangeFirstName(1970, "Appolinaria");
  for (int year : {1969, 1970}) {
    std::cout << person.GetFullName(year) << std::endl;
  }

  person.ChangeLastName(1968, "Volkova");
  for (int year : {1969, 1970}) {
    std::cout << person.GetFullName(year) << std::endl;
  }

  return 0;
}