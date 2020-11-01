#include <iostream>
#include <map>
#include <vector>

void PrintBuses(const std::map<std::string, std::vector<std::string>> &buses) {
  if (buses.empty()) {
    std::cout << "No buses\n";
  } else {
    for (const auto &bus:buses) {
      std::cout << "Bus " + bus.first + ": ";
      for (const auto &stop : bus.second) {
        std::cout << stop + ' ';
      }
      std::cout << '\n';
    }
  }
}
void BusesForStop(std::map<std::string, std::vector<std::string>> &buses,
                  const std::string &stop,
                  const std::vector<std::string> &queue) {
  int counter = 0;
  for (const auto &q:queue) {
    for (const auto &s:buses[q]) {
      if (s == stop) {
        std::cout << q + ' ';
        ++counter;
      }
    }
  }
  if (counter == 0) {
    std::cout << "No stop\n";
  } else {
    std::cout << '\n';
  }
}
void StopsForBus(std::map<std::string, std::vector<std::string>> &buses,
                 const std::string &bus,
                 const std::vector<std::string> &queue) {
  if (buses.count(bus) == 0) {
    std::cout << "No bus\n";
  } else {
    for (const auto &stop :buses[bus]) {
      int counter = 0;
      std::cout << "Stop " + stop + ": ";
      for (const auto &q :queue) {
        if (q != bus) {
          for (const auto &current_stop:buses[q]) {
            if (current_stop == stop) {
              ++counter;
              std::cout << q + ' ';
            }
          }
        }
      }
      if (counter == 0) {
        std::cout << "no interchange\n";
      } else {
        std::cout << '\n';
      }
    }
  }
}
void NewBus(std::map<std::string, std::vector<std::string>> &buses, const std::string &numberOfBus, const int &count) {
  for (int j = 0; j < count; ++j) {
    std::string stopName;
    std::cin >> stopName;
    buses[numberOfBus].push_back(stopName);
  }
}
int main() {
  std::map<std::string, std::vector<std::string>> bus_list;
  std::vector<std::string> queue;
  int Q;
  std::cin >> Q;
  for (int i = 0; i < Q; ++i) {
    std::string command;
    std::cin >> command;
    if (command == "ALL_BUSES") {
      PrintBuses(bus_list);
    } else if (command == "BUSES_FOR_STOP") {
      std::string stop;
      std::cin >> stop;
      BusesForStop(bus_list, stop, queue);
    } else if (command == "STOPS_FOR_BUS") {
      std::string bus;
      std::cin >> bus;
      StopsForBus(bus_list, bus, queue);
    } else {
      std::string nameOfBus;
      int countOfStops;
      std::cin >> nameOfBus >> countOfStops;
      queue.push_back(nameOfBus);
      NewBus(bus_list, nameOfBus, countOfStops);
    }
  }
  return 0;
}