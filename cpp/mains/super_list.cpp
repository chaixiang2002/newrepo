#include "cx_queue.hpp"
#include "super_linked_list.hpp"
#include <iostream>
#include <ostream>
#define Max 10
int main() {
  super_linked_list<int> L;
  int tmp1, tmp2;
  std::cout << "1" << std::endl;
  L.queue();
  L.queue_append(1);
  L.queue_append(1);
  L.queue_reinit();
  for (int i = 2; i < Max; i++) {
    int tmp[100] = {0}, count = 1;
    tmp[0] = 1;
    for (int j = 0; j < i; j++) {
      tmp1 = L.queue_delete();
      std::cout << tmp1 << '\t';
      if (L.queue_no_empty()) {
        tmp2 = L.queue_get_head();
        tmp[count] = tmp1 + tmp2;
      } else
        tmp[count] = 1;
      count++;
    }
    std::cout << std::endl;
    for (int k = 0; k < i + 1; k++) {
      L.queue_append(tmp[k]);
    }
  }
  L.Destory_queue();
  return 0;
}