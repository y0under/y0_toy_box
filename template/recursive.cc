#include <iostream>

template<unsigned n>
struct Factrial {
  enum {
    value = n * Factrial<n-1>::value
  };
};

template<>
struct Factrial<0> {
  enum {
    value = 1
  };
};

int main() {
  Factrial<5> f;
  std::cout << f.value << std::endl;
}
