#include <iostream>
#include <string>

// Assignment 1 — Joshua Van Brunt

int main() {
	std::string name, last;
  int years = 0;
  std::cout << "First name: ";
  std::cin >> name;
  std::cout << "Last name";
  std::cin >> last;
  std::cout << "Years coding goal: ";
  std::cin >> years;
  std::cout << name << last << ". Goal In " << years << "years\n";
  return 0;
}
