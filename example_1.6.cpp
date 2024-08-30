#include <algorithm>
#include <iostream>
#include <vector>

//
// main
//
int main() {

  std::vector<int> v{1, 2, 3, 4, 5, 6};
  std::for_each(v.begin(), v.end(), [](int i) {
    if (i % 2 == 0)
      std::cout << i << " é um número par" << std::endl;
    else
      std::cout << i << " é um número ímpar" << std::endl;
  });

  return 0; // success return
}

// vim: set ts=4 sw=4 tw=78 ft=cpp:
