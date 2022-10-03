#include <iostream>
#include <cmath>
#include <vector>

int main() {
    std::vector<int> a[1];
    a[0].push_back(1);
    a[0].push_back(2);
    a[0].push_back(3);
    std:: cout << a[0][1];
    return 0;
}
