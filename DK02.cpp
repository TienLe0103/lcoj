#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int a[10];
    int m = 0;
    for (int i = 0; i < 3; i++) {
        std::cin >> a[i];
        m = std::max(m, a[i]);
    }
    std::cout << m;
}