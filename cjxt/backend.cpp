#include "functionn.cpp"
#include "registration_sreen.cpp"
#include "the_welcome_screen.cpp"
#include <iostream>
#include <string>
using namespace std;
/*
current_state
0       welcome

100    1.0     student-registration
101        1.01       regist successfully;
102        1.02       regist failed
201    2.01      teacher-login
103      1.03    student-login
104      1.04  & 2.04    login sucessfully
105      1.05  & 2.05   login failed

206      2.06_add_members
2.07_entering score
2.08_find_score
2.09_alter_score
2.10_ESC
2.11_End

1.06    _alter_Personal Date
1.07    _print
1.10_ESC
1.11_End

*/
extern void t_login();
extern void s_login();
void _function(int x) {
  switch (x) {
  case 0:
    welcome_screen();
    break;
  case 100:
    s_regist();
    break;
  case 201:
    t_login();
    break;
  case 103:
    s_login();
    break;
  case 206:
    t_function();
    break;
  case 106:
    s_function();
    break;
  }
}
class _backend {
public:
  int current_state;
  _backend() { init(); }
  void init() { current_state = 0; }
};

struct account {
  std::string name;
  int number;
  std::string password;
};
class _teacher {
public:
  account t;
  void init_t() {
    t.name = "cx";
    t.password = "cx";
    t.number = 0;
  }
};
class _student {
public:
  account s;
  void add_member() {
    cout << "real_name:";
    cin >> real_name;
    cout << "english:";
    cin >> english;
    cout << "datebase:";
    cin >> datebase;
    cout << "math:";
    cin >> math;
    cout << "network:z";
    cin >> network;
    cout << "computer_experiment:";
    cin >> computer_experiment;
  }
  void init(string namee, int numm, string pass) {
    s.name = namee;
    s.number = numm;
    s.password = pass;
  }
  void rigst() {}
  void alter_date() {
    cout << "old_name" << s.name << endl;
    cin >> s.name;
    cout << "old_pass:" << s.password << endl;
    cin >> s.password;
  }

private:
  int english;
  int datebase;
  int math;
  int network;
  int computer_experiment;
  std::string real_name;
};