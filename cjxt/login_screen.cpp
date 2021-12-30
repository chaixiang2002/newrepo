#include "backend.cpp"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
void successfully_login() {
  cout << "login successfuly" << endl;
  system("sleep 1s");
  system("clear");
  cout << "Happy New Year's Eve!" << endl;
  system("sleep 1s");
  system("clear");
  _function(206);
}
void failed_login() { cout << "failed_login" << endl; }
void t_login() {
  _teacher T;
  T.init_t();
  //==========================
  cout << "[   Techer login:  ]" << endl;
  cout << "account:";
  int nummm;
  cin >> nummm;
  cout << "password:";
  string str;
  cin >> str;
  system("clear");
  if (nummm == T.t.number && str == T.t.password) {
    successfully_login();
  } else {
    failed_login();
  }
}
void s_login() {}
