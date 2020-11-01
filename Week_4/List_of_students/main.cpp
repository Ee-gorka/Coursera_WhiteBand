#include <iostream>
#include <vector>
struct Student {
  std::string name;
  std::string surname;

  int day;
  int month;
  int year;
};
int main() {
  std::vector<Student> students;
  int N, M;
  std::cin >> N;
  for (int i = 0; i < N; ++i) {
    std::string temp_name, temp_surname;
    int temp_day, temp_month, temp_year;
    std::cin >> temp_name >> temp_surname >> temp_day >> temp_month >> temp_year;
    students.push_back(Student{temp_name, temp_surname, temp_day, temp_month, temp_year});
  }
  std::cin >> M;
  for (int j = 0; j < M; ++j) {
    std::string current_command;
    int index;
    std::cin >> current_command >> index;
    --index;
    if (current_command == "name" && index >= 0 && index < N) {
      std::cout << students[index].name << ' ' << students[index].surname << '\n';
    } else if (current_command == "date" && index >= 0 && index < N) {
      std::cout << students[index].day << '.' << students[index].month << '.' << students[index].year
                << '\n';
    } else {
      std::cout << "bad request\n";
    }
  }
  return 0;
}