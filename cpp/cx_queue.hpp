#ifndef cx_queue_H
#define cx_queue_H

#include <iostream>
class queue {
public:
  queue() {
    head = 0;
    tail = 0;
    count = 0;
    for (int i = 0; i < 100; i++) {
      queue_node[i] = 0;
    }
  }
  void insert(int InsertVertex) {
    queue_node[tail] = InsertVertex;
    tail++;
    count++;
  }
  void print_and_no_del() { std::cout << queue_node[head]; }
  void print_and_del() {
    std::cout << queue_node[head];
    head++;
    count--;
  }
  void out_and_no_del(int outVertex) { outVertex = queue_node[head]; }
  void out_and_del(int outVertex) {
    outVertex = queue_node[head];
    head++;
    count--;
  }

private:
  int queue_node[100];
  int head;
  int tail;
  int count;
};

#endif