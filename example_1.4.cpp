#include <algorithm>
#include <iostream>
#include <vector>

//
// main
//
int main() {

  struct {
    void operator()(int i) { std::cout << i << std::endl; }
  } something;

  std::vector<int> v{1, 2, 3, 4, 5, 6};
  std::for_each(v.begin(), v.end(), something);

  return 0; // success return
}

// vim: set ts=4 sw=4 tw=78 ft=cpp:
