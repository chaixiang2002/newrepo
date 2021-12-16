template <typename type> //
class ptr {
public:
  unsigned msize;
  type *p;

  ptr() : msize(1), p(new type[msize]) {}
  ~ptr() { delete[] p; }

  void resize(unsigned _s) {
    auto tmp = new type[_s];
    for (int i{}; i < msize; ++i)
      tmp[i] = p[i];
    delete[] p;
    msize = _s;
    p = tmp;
  }
};
