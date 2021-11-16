#include "tree.hpp"
#include <assert.h>
#include <cstdio>

#define TREE_SIZE 100
#define ARRAY_SIZE (TREE_SIZE + 1)

static TREE_TYPE tree[ARRAY_SIZE]; // store all note of the tree
// left_child
static int left_child(int current) {
  return current * 2;
} // Compute node subscript
// right_child
static int right_child(int current) { return current * 2 + 1; }
////Compute node subscript

// insert
void insert(TREE_TYPE value) {
  int current;
  assert(value != 0); // make true the value is non-zero

  // start at root node
  current = 1;

  while (tree[current] != 0) {
    if (value < tree[current])
      current = left_child(current);
    else {
      assert(value != tree[current]);
      current = right_child(current);
    }
    assert(current < ARRAY_SIZE);
  }
  tree[current] = value;
}

// find
TREE_TYPE *find(TREE_TYPE value) {
  int current;
  current = 1;
  while (current < ARRAY_SIZE && tree[current] != value) {
    if (value < tree[current]) {
      current = left_child(current);
    } else {
      current = right_child(current);
    }
    if (current < ARRAY_SIZE)
      return tree + current;
    else
      return 0;
  }

  // do_pre_order traverse
  static void do_pre_order_traverse(int current,
                                    void (*callback)(TREE_TYPE value)) {
    if (current < ARRAY_SIZE && tree[current] != 0) {
      callback(tree[current]);
      do_pre_order_traverse(left_child(current), callback);
      do_pre_order_traverse(right_child(current), callback);
    }
  }

  // pre_ord_traverse
  void pre_order_traverse(void (*callback)(TREE_TYPE value)) {
    do_pre_order_traverse(1, callback);
  }
}
