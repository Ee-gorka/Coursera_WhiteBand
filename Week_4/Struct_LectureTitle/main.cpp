#include <iostream>
struct Specialization {
  std::string str;
  explicit Specialization(const std::string &new_str) {
    str = new_str;
  }
};
struct Course {
  std::string str;
  explicit Course(const std::string &new_str) {
    str = new_str;
  }
};
struct Week {
  std::string str;
  explicit Week(const std::string &new_str) {
    str = new_str;
  }
};
struct LectureTitle {
  std::string specialization;
  std::string course;
  std::string week;
  LectureTitle(const Specialization &new_specialization, const Course &new_course, const Week &new_week) {
    specialization = new_specialization.str;
    course = new_course.str;
    week = new_week.str;
  }
};
int main() {
  return 0;
}