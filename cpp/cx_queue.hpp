#ifndef cx_queue_H
#define cx_queue_H

#include <iostream>
#include <ostream>
class queue {
public:
  queue() {
    head = 0;
    tail = 0;
    count = 0;
    free_switch = 1;
    std::cout << "please tell me how long you want to get this queue?";
    std::cin >> lenth;
    queue_node = new int[lenth];
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
  int out_and_no_del() { return queue_node[head]; }
  int out_and_del() {
    int tmp = queue_node[head];
    head++;
    count--;
    return tmp;
  }
  void all_print_and_nodel() {
    int tmp = head;
    while (tmp != tail) {
      std::cout << queue_node[tmp];
      tmp++;
    }
    std::cout << std::endl;
  }
  void all_print_and_del() {
    all_print_and_nodel();
    free_switch = 0;
    del_queue();
    free_switch = 1;
  }
  void del_queue() {
    head = 0;
    tail = 0;
    count = 0;
    if (free_switch == 1)
      free(queue_node);
  }

private:
  long lenth;
  int *queue_node;
  int head;
  int tail;
  int count;
  int free_switch;
};

#endif