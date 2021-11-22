#include <iostream>
#include <vector>
#include <algorithm>

//
// main
//
int main() {

	std::vector <int> v {1,2,3,4,5,6};
    std::for_each(v.begin(), v.end(), [] (int i) { std::cout << i << std::endl; });

	return 0; // success return
}

// vim: set ts=4 sw=4 tw=78 ft=cpp:


