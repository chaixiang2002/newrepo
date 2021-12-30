#include <cstdlib>
#include <iostream>
#include <ostream>
using namespace std;
extern void _function(int x);
void welcome_screen() {
  //=====================================================================
  std::cout << "welcome to the grade inquiry system!" << std::endl;
  std::cout << "Teacher login(press'1') OR student login(press'2')"
            << std::endl;
  //=====================================================================
  int x;
  cin >> x;
  system("clear");
  if (x == 1) {
    _function(201);
  } else if (x == 2) {
    _function(103);
  } else {
    cout << "error in welcome_screen" << endl;
  }
}