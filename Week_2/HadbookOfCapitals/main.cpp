#include <iostream>
#include <map>
void Dump(const std::map<std::string, std::string> &countries) {
  if (countries.empty()) {
    std::cout << "There are no countries in the world\n";
  } else {
    for (const auto &country:countries) {
      std::cout << country.first + '/' + country.second + '\n';
    }
  }
}
void About(std::map<std::string, std::string> &countries, const std::string &country) {
  if (countries.count(country) == 0) {
    std::cout << "Country " + country + " doesn't exist\n";
  } else {
    std::cout << "Country " + country + " has capital " + countries[country] + '\n';
  }
}
void ChangeCapital(std::map<std::string, std::string> &countries,
                   const std::string &country,
                   const std::string &capital_name) {
  if (countries.count(country) == 0) {
    countries[country] = capital_name;
    std::cout << "Introduce new country " + country + " with capital " + capital_name + '\n';
  } else if (countries[country] == capital_name) {
    std::cout << "Country " + country + " hasn't changed its capital\n";
  } else {
    std::cout
        << "Country " + country + " has changed its capital from " + countries[country] + " to " + capital_name + '\n';
    countries[country] = capital_name;
  }
}
void Rename(std::map<std::string, std::string> &countries,
            const std::string &old_country,
            const std::string &new_country) {
  if (old_country == new_country || countries.count(old_country) == 0 || countries.count(new_country) == 1)
    std::cout << "Incorrect rename, skip\n";
  else {
    std::cout
        << "Country " + old_country + " with capital " + countries[old_country] + " has been renamed to " + new_country
            + '\n';
    countries[new_country] = countries[old_country];
    countries.erase(old_country);
  }
}
int main() {
  int Q;
  std::map<std::string, std::string> handbook;
  std::cin >> Q;
  for (int i = 0; i < Q; ++i) {
    std::string command;
    std::cin >> command;
    if (command == "DUMP") Dump(handbook);
    else if (command == "ABOUT") {
      std::string country_name;
      std::cin >> country_name;
      About(handbook, country_name);
    } else if (command == "CHANGE_CAPITAL") {
      std::string country_name, new_capital_name;
      std::cin >> country_name >> new_capital_name;
      ChangeCapital(handbook, country_name, new_capital_name);
    } else {
      std::string old_country_name, new_country_name;
      std::cin >> old_country_name >> new_country_name;
      Rename(handbook, old_country_name, new_country_name);
    }
  }
  return 0;
}