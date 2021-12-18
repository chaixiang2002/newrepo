#ifndef __sequencelist_HPP
#define __sequencelist_HPP
//=======================================================
// Resolved problems:
// 1.free(p)before,please p=null;
// 2.delete head-node and head-tail
// 3.find_and_insert(tail->tail)
//
// Unsolved problems:
// 1. the frist tail node is faulty(defective)
//
//=======================================================

#include <iostream>
template <typename T> class super_linked_list {
protected:
  long lenth;
  struct list_node {
    T data;
    list_node *next, *prior;
  };
  list_node *head;
  list_node *tail;
  list_node *temp; //   remember delete!!!
  list_node *stack_top;
  list_node *queue_front;
  list_node *queue_rear;

public:
  super_linked_list() { init_list(); }
  void init_list() {
    head = new list_node;
    head->next = nullptr;
    head->prior = nullptr;
    tail = head;
  }
  // 1.stack
  //==========================================
  void stack() { init_list(); }
  void stack_reinit() { stack_top = head; }
  void stack_push(T x) { add_node(x); }
  T stack_pop() {
    T tmp = head->data;
    delete_(head->data);
    return tmp;
  }
  T stack_get_top() { return head->data; }
  void Destory_stack() { Destroy_super_list(); }
  //==========================================

  // 2. queue
  //===================================================
  void queue() { init_list(); }
  void queue_reinit() {
    queue_front = tail;
    queue_rear = head;
  }
  bool queue_no_empty() { return super_list_no_empty(); }
  void queue_append(T insert_vertex) { add_node(insert_vertex); }
  T queue_delete() {
    T tmp = head->data;
    delete_(head);
    return tmp;
  }
  T queue_get_head() { return head->data; }
  void Destory_queue() { Destroy_super_list(); }
  //===================================================
  bool super_list_no_empty() {
    if (head == tail)
      return false;
    return true;
  }
  void add_node(T vertex) {
    temp = new list_node;
    temp->next = head;
    temp->prior = nullptr;
    temp->data = vertex;
    head->prior = temp;
    head = temp;
    temp = temp->prior;
  }
  list_node *find(T finded_vertex) {
    list_node *finded;
    finded = head;
    while (finded != nullptr) {
      if (finded->data == finded_vertex)
        break;
      finded = finded->next;
      if (finded == tail && tail->data != finded_vertex) {
        std::cout << "error: don't find fined-vertex!\n";
        return nullptr;
      }
    }
    return finded;
  }

  int find_and_insert(T insert_vertex, T inserted_pripor_vertex) {
    if (find(inserted_pripor_vertex) == nullptr) {
      std::cout << "no insert!" << std::endl;
      return -1;
    }
    list_node *finded = find(inserted_pripor_vertex), *insert;
    insert = new list_node;
    insert->data = insert_vertex;
    // if inserted_pripor_vertex is tail
    if (finded->next == nullptr) {
      insert->next == nullptr;
      tail = insert;
    } else {
      insert->next = finded->next;
    }
    insert->prior = finded;
    finded->next = insert;
    if (insert->next != nullptr) {
      insert->next->prior = insert; //*********
    }
    finded = nullptr;
    insert = nullptr;
    delete (finded);
    delete (insert);
    return 0;
  }
  int delete_(T delete_vertex) {
    if (find(delete_vertex) == nullptr) {
      std::cout << "no delete!" << std::endl;
      return -1;
    }
    list_node *del = find(delete_vertex);
    // if delete_vertex=head
    if (del != head) {
      del->prior->next = del->next;
    } else {
      head = head->next;
      head->prior = nullptr;
    }
    // if delete_vertex=tail;
    if (del != tail)
      del->next->prior = del->prior;
    else
      tail = tail->prior;
    del = nullptr;
    delete (del);
    return 0;
  }

  long lenth_() {
    lenth = 0;
    list_node *p = head;
    while (p != nullptr) {
      lenth++;
      p = p->next;
    }
    p = nullptr;
    delete (p);
    return lenth;
  }

  void print_all_list() {
    list_node *p = head;
    std::cout << "lenth(" << lenth_() << ")" << std::endl;
    std::cout << R"(head	)";
    while (p != nullptr) {
      std::cout << p->data << '\t';
      p = p->next;
    }
    std::cout << "tail" << std::endl;
    p = nullptr; //////////////////////////////////////!!!!!!!!!!!
    delete (p);
  }
  void delete_frist_tail() { delete_(tail->data); }
  void Destroy_super_list() {
    while (super_list_no_empty()) {
      delete_(head->data);
    }
  }
};

/* template <typename T> class stack : public super_linked_list<T> {
public:
  list_node *stack;
  stack() {}
  void stack_init() {}
}; */

#endif