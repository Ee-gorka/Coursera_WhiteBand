#include <iostream>
#include <map>
#include <vector>

void AddBus(std::map<std::vector<std::string>, int> &listOfBuses, const std::vector<std::string> &stops) {
  int current_size = listOfBuses.size();
  if (listOfBuses.count(stops) == 1) {
    std::cout << "Already exists for " << listOfBuses[stops] << '\n';
  } else {
    ++current_size;
    listOfBuses[stops] = current_size;
    std::cout << "New bus " << current_size << '\n';
  }
}
int main() {
  int Q;
  std::map<std::vector<std::string>, int> busesList;
  std::cin >> Q;
  for (int i = 0; i < Q; ++i) {
    int numberOfStops;
    std::string stop;
    std::vector<std::string> stops;
    std::cin >> numberOfStops;
    for (int j = 0; j < numberOfStops; ++j) {
      std::cin >> stop;
      stops.push_back(stop);
    }
    AddBus(busesList, stops);
  }
  return 0;
}