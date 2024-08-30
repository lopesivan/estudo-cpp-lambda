#include <algorithm>
#include <iostream>
#include <vector>

//
// main
//
int main() {

  int n = 3, e = 5;
  std::vector<int> v{1, 2, 3, 4, 5, 6};
  std::for_each(v.begin(), v.end(), [=](int i) {
    if (i % n == 0)
      std::cout << i << " é idivisível por " << n << std::endl;
    else
      std::cout << i << " não é idivisível por " << n << std::endl;

    // n = 9;
    // e = 4;
    std::cout << "n = " << n << std::endl;
    std::cout << "e = " << e << std::endl;
  });

  return 0; // success return
}

// vim: set ts=4 sw=4 tw=78 ft=cpp:
