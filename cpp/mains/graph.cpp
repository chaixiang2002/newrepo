#include "cx_graph.hpp"
#include "cx_queue.hpp"
#include <iostream>
int main() {
  graph_data my_date;
  graph_matrix list(my_date);
  my_date.print___();
  queue myqueue;
  for (int i = 0; i < 3; i++) {
    myqueue.insert(i);
  }
  myqueue.all_print_and_nodel();

  return 0;
}