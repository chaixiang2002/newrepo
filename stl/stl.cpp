#include <iostream>
#include <vector>
using namespace std;

int main() {
  //创建一个向量存储 int
  vector<int> vec;
  int i;

  // 显示 vec 的原始大小

  // 推入 3 个值到向量中
  cout << "vector size =" << vec.size() << endl;
  // size() 函数显示向量的大小。
  for (int i = 0; i < 3; i++) {
    vec.push_back(i);
    // push_back( ) 成员函数在向量的末尾插入值，如果有必要会扩展向量的大小
  }

  // 显示 vec 扩展后的大小
  cout << "extended vector size" << vec.size() << endl;

  //访问向量中的 5 个值
  for (int i = 0; i < 3; i++) {
    cout << "value of vec[" << i << "]=" << vec[i] << endl;
  }

  // 使用迭代器 iterator 访问值
  vector<int>::iterator v = vec.begin();
  // begin( ) 函数返回一个指向向量开头的迭代器。
  while (v != vec.end()) {
    // end( ) 函数返回一个指向向量末尾的迭代器。
    cout << "velue of v=" << *v << endl;
    v++;
  }
  return 0;
}