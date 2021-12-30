#include "super_linked_list.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
int main() {
  int nn = 10000;
  int x[nn];
  for (int i = 0; i < nn; i++) {
    x[i] = rand() % nn;
  }
  super_linked_list<int> L;
  L.init_list();
  for (int i = 0; i < nn; i++) {
    L.add_node(x[i]);
  }
  L.delete_frist_tail();
  // L.print_all_list();
  /*   L.buble_sort();
    L.print_all_list();
    std::cout << "buble_sort" << std::endl;
    L.time_used();
   */
  L.straight_insert_sort();
  L.print_all_list();
  std::cout << "straight_insert_sort" << std::endl;
  L.time_used();

  return 0;
}