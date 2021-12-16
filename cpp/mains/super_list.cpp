#include "super_linked_list.hpp"
#include <iostream>

int main() {
  super_linked_list<int> L;
  for (int i = 0; i < 5; i++) {
    L.add_node(i);
  }
  L.print_all_list();
  L.delete_(5);
  L.find_and_insert(11, 2);
  L.print_all_list();
  return 0;
}