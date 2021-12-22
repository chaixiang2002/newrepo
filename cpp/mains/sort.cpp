#include "super_linked_list.hpp"
#include <iostream>
int main() {
  int x[14] = {29, 78, 86, 45, 23, 28, 65, 79, 32, 13, 99, 8, 45, 88};
  super_linked_list<int> L;
  L.init_list();
  for (int i = 0; i < 14; i++) {
    L.add_node(x[i]);
  }
  L.delete_frist_tail();
  L.print_all_list();
  /*  L.buble_sort();
   L.print_all_list() */
  ;
  L.straight_insert_sort();
  L.print_all_list();
  return 0;
}