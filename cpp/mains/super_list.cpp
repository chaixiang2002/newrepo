#include "super_linked_list.hpp"
#include <iostream>

int main() {
  super_linked_list<int> L;
  for (int i = 0; i < 3; i++) {
    L.add_node(i);
  }
  L.print_all_list();
  L.delete_(2);
  L.print_all_list();
  L.find_and_insert(11, 1);
  L.print_all_list();
  return 0;
}