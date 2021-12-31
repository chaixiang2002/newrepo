
#include <algorithm>
#include <iostream>
#include <ostream>
#include <string>
#include <system_error>
using namespace std;
struct student {
  int num;
  std::string name;
  int math_score;
  int english_score;
  int datebase;
  void add(int nu, std::string na, int m, int e, int d) {}
};
struct listt {
  student S[1000];
  int s_num;
  void init() {
    s_num = 0;
    for (int i = 0; i < 1000; i++) {
      S[i].num = i + 1;
    }
    for (int i = 0; i < 1000; i++) {
      S[i].name = "defailt";
    }
  }
};
void wel(listt *L);
void function_screen(listt *L);
void add_screen(listt *L);
void according_screen(listt *L);
void delete_sreen(listt *L);
void find_screen(listt *L);
void Ecs__(listt *L);
void delete_screen_name(listt *L);
void delete_screen_num(listt *L);
void sort(listt *L);
void sortt(listt *L, int x);
void according_2(listt *L);
void sort11(listt *L, int x);
//===============================================

int main() {
  listt L;
  L.init();
  listt *p;
  p = &L;
  wel(p);
}
void Ecs__(listt *L) {
  int x;
  cin >> x;
  if (x == 0) {
    function_screen(L);
  }
}
void wel(listt *L) {
  std::cout << "welcome to the grade inquiry system!" << std::endl;
  system("sleep 1s");
  system("clear");
  function_screen(L);
}
void function_screen(listt *L) {
  system("clear");
  cout << "=====================[function-screen]========================"
       << endl;
  cout << "    1.add member       2.according member    " << endl;
  cout << "    3.delete member    4.find member    " << endl;
  cout << "    5.alter member     6.sort member    " << endl;
  cout << "    7.save             8.exit    " << endl;
  cout << "=============================================================="
       << endl;
  cout << "               please entering:";
  int x;
  cin >> x;
  switch (x) {
  case 1:
    L->s_num++;
    add_screen(L);
    break;
  case 2:
    according_screen(L);
    break;
  case 3:
    delete_sreen(L);
    break;
  case 4:
    find_screen(L);
    break;
  case 6:
    sort(L);
    break;
  }
}
void add_screen(listt *L) {
  system("clear");
  /*  int numm, m, e, d;
   string namee; */
  cout << "---------------------[add-member-screen]----------------------"
       << endl;

  cout << "               please entering its [name]:";
  cin >> L->S[L->s_num].name;
  cout << "               please entering its [math-score]:";
  cin >> L->S[L->s_num].math_score;
  cout << "               please entering its [english-score]:";
  cin >> L->S[L->s_num].english_score;
  cout << "               please entering its [datebase-score]:";
  cin >> L->S[L->s_num].english_score;
  cout << "               (ESC enter '0')|| (add meber again enter '1')";
  int x;
  cin >> x;
  if (x == 1) {
    L->s_num++;
    add_screen(L);
  } else {
    function_screen(L);
  }
  //=========================================
}
void according_screen(listt *L) {
  system("clear");
  cout << "---------------------[according_screen-screen]--------------------"
       << endl;
  cout
      << "|   num    |   name   | math-score | english-score | detebase-score |"
      << endl;
  for (int i = 0; i < 30; i++) {
    if (L->S[i].name != "defailt") {
      cout << '\t' << L->S[i].num << '\t' << L->S[i].name << '\t'
           << L->S[i].math_score << '\t' << '\t' << L->S[i].english_score
           << '\t' << '\t' << L->S[i].datebase << endl;
    }
  }
  cout << "------------------------------------------------------------------"
       << endl;
  cout << "(ESC enter '0')";
  Ecs__(L);
}
void according_2(listt *L) {
  cout << "---------------------[according_screen-screen]--------------------"
       << endl;
  cout
      << "|   num    |   name   | math-score | english-score | detebase-score |"
      << endl;
  for (int i = 0; i < 30; i++) {
    if (L->S[i].name != "defailt") {
      cout << '\t' << L->S[i].num << '\t' << L->S[i].name << '\t'
           << L->S[i].math_score << '\t' << '\t' << L->S[i].english_score
           << '\t' << '\t' << L->S[i].datebase << endl;
    }
  }
  cout << "------------------------------------------------------------------"
       << endl;
}
void delete_sreen(listt *L) {
  system("clear");
  according_2(L);
  cout << "---------------------[delte-screen]-----------------------" << endl;
  cout << "               ====>('1')delete by [name]" << endl;
  cout << "               ====>('2')delete by [num]" << endl;
  cout << "               ====>('0')ESC";
  int x;
  cin >> x;
  switch (x) {
  case 0:
    function_screen(L);
    break;
  case 1:
    delete_screen_name(L);
    break;
  case 2:
    delete_screen_num(L);
    break;
  }
}
void delete_screen_name(listt *L) {
  system("clear");
  according_2(L);
  cout << "---------------------[delte-screen-name]-----------------------"
       << endl;
  cout << "please enter [name] by delete:";
  string a;
  cin >> a;
  for (int i = 0; i < 1000; i++) {
    if (L->S[i].name == a) {
      L->S[i].name = "default";
    }
  }

  cout << "               ====>('0')ESC";
  cout << "               ====>('11')Esc to uplevel";
  int x;
  cin >> x;
  switch (x) {
  case 0:
    function_screen(L);
    break;
  case 11:
    delete_sreen(L);
    break;
  }
}
void delete_screen_num(listt *L) {
  system("clear");
  according_screen(L);
  cout << "---------------------[delte-screen-num]-----------------------"
       << endl;
  cout << "please enter [num] by delete:";
  int nn;
  cin >> nn;
  if (nn < 1000 && nn > 0) {
    if (L->S[nn].name != "default") {
      L->S[nn].name = "default";
    }
  } else {
    cout << "no this num" << endl;
  }

  cout << "               ====>('0')ESC";
  cout << "               ====>('11')Esc to uplevel";
  int x;
  cin >> x;
  switch (x) {
  case 0:
    function_screen(L);
    break;
  case 10000:
    delete_sreen(L);
    break;
  default:
    break;
  }
}
void find_screen(listt *L) {
  cout << "please enter [name] by find:";
  string a;
  cin >> a;
  for (int i = 0; i < 1000; i++) {
    if (L->S[i].name == a) {
      cout << "|   num    |   name   | math-score | english-score | "
              "detebase-score |"
           << endl;
      cout << '\t' << L->S[i].num << '\t' << L->S[i].name << '\t'
           << L->S[i].math_score << '\t' << '\t' << L->S[i].english_score
           << '\t' << '\t' << L->S[i].datebase << endl;
    }
  }
}
void sort(listt *L) {
  system("clear");
  cout << "math('0')" << endl;
  cout << "english('1')" << endl;
  cout << "datebase('2')" << endl;
  int x;
  cin >> x;
  sort11(L, x);
}

void sortt(listt *L, int x) {
  system("clear");
  cout << "|   num    |   name   | math-score | english-score | "
          "detebase-score |"
       << endl;
  if (x == 0) {
    int min = L->S[2].math_score;
    int ind;
    for (int j = 2; j < L->s_num; j++) {
      ind = 2;
      min = L->S[2].math_score;
      for (int i = 2; i < L->s_num - i; i++) {
        if (min > L->S[i].math_score) {
          min = L->S[i].math_score;
          ind = i;
        }
      }
      cout << '\t' << L->S[ind].num << '\t' << L->S[ind].name << '\t'
           << L->S[ind].math_score << '\t' << '\t' << L->S[ind].english_score
           << '\t' << '\t' << L->S[ind].datebase << endl;
    }
  } else if (x == 1) {
    int min = L->S[2].english_score;
    int ind;
    for (int j = 2; j < L->s_num; j++) {
      ind = 2;
      ind = 2;
      min = L->S[2].math_score;
      for (int i = 2; i < L->s_num - i; i++) {
        if (min > L->S[i].english_score) {
          min = L->S[i].english_score;
          ind = i;
        }
      }
      cout << '\t' << L->S[ind].num << '\t' << L->S[ind].name << '\t'
           << L->S[ind].math_score << '\t' << '\t' << L->S[ind].english_score
           << '\t' << '\t' << L->S[ind].datebase << endl;
    }
  } else {
    int min = L->S[2].datebase;
    int ind = 2;
    for (int j = 2; j < L->s_num; j++) {
      ind = 0;
      ind = 0;
      min = L->S[2].math_score;
      for (int i = 2; i < L->s_num - i; i++) {
        if (min > L->S[i].datebase && L->S[i].name != "default") {
          min = L->S[i].datebase;
          ind = i;
        }
      }
      cout << '\t' << L->S[ind].num << '\t' << L->S[ind].name << '\t'
           << L->S[ind].math_score << '\t' << '\t' << L->S[ind].english_score
           << '\t' << '\t' << L->S[ind].datebase << endl;
    }
  }
  Ecs__(L);
}
void sort11(listt *L, int x) {
  cout << "|   num    |   name   | math-score | english-score | "
          "detebase-score |"
       << endl;
  if (x == 1) {
    int s = 0;
    for (int i = 2; i < L->s_num + 1; i++) {
      int max = L->S[2].math_score;
      int inx = 2;
      for (int j = 2; j < L->s_num + 1 - i + 2; j++) {
        cout << L->s_num << endl;
        if (L->S[j].name != "defailt" && L->S[j].math_score > max) {
          max = L->S[j].math_score;
          inx = j;
        }
      }
      cout << '\t' << L->S[inx].num << '\t' << L->S[inx].name << '\t'
           << L->S[inx].math_score << '\t' << '\t' << L->S[inx].english_score
           << '\t' << '\t' << L->S[inx].datebase << endl;
    }
  }
  Ecs__(L);
}