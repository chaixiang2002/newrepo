#ifndef TREE_HPP
#define TREE_HPP
// the bin_tree of Module interface
#define TREE_TYPE int

// insert
void insert(TREE_TYPE value);

// find
TREE_TYPE *find(TREE_TYPE value);

// pre_order_traverse
void pre_order_traverse(
    void (*callback)(TREE_TYPE value)); //??????????????????????????

#endif
