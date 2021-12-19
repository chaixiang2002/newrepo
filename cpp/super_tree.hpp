#ifndef __super_tree_HPP
#define __super_tree_HPP
#include <iostream>
#include <ostream>
template <typename T> class tree_node {
protected:
  struct node {
    T data;
    node **childs;
    node *parent;
    int num_child;
    bool visited; //////
  };

  node *temp;
  bool truee = 0;
  node *trueee;

public:
  node *root;
  node *new_node(T insert_vertex) {
    std::cout << "new_node__begin!!" << std::endl;

    node *p;
    p = new node;
    std::cout << "new_node__begin111111111111!!" << std::endl;

    p->data = insert_vertex;
    p->num_child = 1;

    p->childs = new node *[p->num_child]; //////////==================!!!!!!!
    p->parent = nullptr;
    std::cout << "new_node_over!!" << std::endl;
    return p;
  }

  void init_tree(T root_vertex) {
    temp = new_node(root_vertex);
    root = temp;
    temp = nullptr;
    std::cout << "init_tree!!" << std::endl;
  }
  node *find(node *find, T finded_vertex) {
    std::cout << "find!!" << std::endl;

    if (find->data == finded_vertex) {
      std::cout << "find___true!!" << std::endl;

      truee = 1;
      trueee = find;
      return find;
    }
    for (int i = 0; i < find->num_child; i++) {
      if (find->childs[i] != nullptr) {
        traverse(find->childs[i]);
      }
      if (truee == 1) {
        return trueee;
      }
    }
    return nullptr;
  }
  void traverse(node *find) {
    std::cout << "traverse  begin!!" << std::endl;

    std::cout << find->data;
    for (int i = 0; i < find->num_child; i++) {
      if (find->childs[i] != nullptr) {
        traverse(find->childs[i]);
      }
    }
    std::cout << "traverse  over!!" << std::endl;
  }
  void add_node(T insert_vertex, T parent_vertex) {
    std::cout << "add_node  begin!!" << std::endl;

    temp = new_node(insert_vertex);
    temp->parent = find(root, parent_vertex);
    std::cout << "add_begin22222!!" << std::endl;

    node **p;
    p = new node *[temp->parent->num_child + 1]; //===================!!!!!!
    int i = 0;
    std::cout << "add_begin3333!!" << std::endl;

    for (i = 0; i < temp->parent->num_child; i++) {
      p[i] = temp->parent->childs[i];
    }
    p[i + 1] = temp;
    temp->parent->childs = p;
    temp->parent->num_child++;
    p = nullptr;
    delete p;
    temp = nullptr;
    delete temp;
    std::cout << "add_node  over!!" << std::endl;
  }
};
#endif