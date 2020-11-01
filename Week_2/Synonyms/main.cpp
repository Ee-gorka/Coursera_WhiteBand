#include <iostream>
#include <set>
#include <map>
void Count(std::map<std::string, unsigned int> &counter, const std::string &word) {
  if (counter.count(word) == 0) std::cout << 0 << '\n';
  else std::cout << counter[word] << '\n';
}
void Check(const std::set<std::pair<std::string, std::string>> &dict,
           const std::string &w1,
           const std::string &w2) {
  if (dict.count(std::make_pair(w1, w2)) == 1 || dict.count(std::make_pair(w2, w1)) == 1) {
    std::cout << "YES\n";
  } else {
    std::cout << "NO\n";
  }
}
void Add(std::set<std::pair<std::string, std::string>> &dict,
         std::map<std::string, unsigned int> &c,
         const std::string &w1,
         const std::string &w2) {
  if (dict.count(std::make_pair(w1, w2)) == 0 && dict.count(std::make_pair(w2, w1)) == 0) {
    ++c[w1],++c[w2];
  }
  dict.insert(std::make_pair(w1, w2));
}
int main() {
  int N;
  std::set<std::pair<std::string, std::string>> dict;
  std::map<std::string, unsigned int> counter;
  std::cin >> N;
  for (int i = 0; i < N; ++i) {
    std::string command;
    std::cin >> command;
    if (command == "COUNT") {
      std::string word;
      std::cin >> word;
      Count(counter, word);
    } else {
      std::string word1, word2;
      std::cin >> word1 >> word2;
      if (command == "CHECK") {
        Check(dict, word1, word2);
      } else {
        Add(dict, counter, word1, word2);
      }
    }
  }
  return 0;
}