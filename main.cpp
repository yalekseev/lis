#include "lis.h"

#include <iostream>
#include <vector>

int main() {
    std::vector<int> a = { 10, 9, 2, 5, 3, 7, 101, 18 };

    std::cout << util::lis_length(a.begin(), a.end()) << std::endl;

    return 0;
}
