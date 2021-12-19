#include "super_tree.hpp"
#include <iostream>
int main() {
  tree_node<int> TT;
  TT.init_tree(1);
  std::cout << "1" << std::endl;
  TT.add_node(2, 1);
  std::cout << "2" << std::endl;
  TT.add_node(3, 1);
  std::cout << "3" << std::endl;
  TT.add_node(4, 1);
  std::cout << "444" << std::endl;

  TT.add_node(4, 3);
  std::cout << "4" << std::endl;
  TT.add_node(5, 2);
  std::cout << "5" << std::endl;
  TT.traverse(TT.root);
  std::cout << "1111111111111" << std::endl;
  return 0;
}