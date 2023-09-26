#include <iostream>

int64_t gt(int64_t x) {
    int64_t s = 1;
    for (int i = 1; i <= x; i++) {
        s *= i;
    }
    return s;
}

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int64_t n;
    std::cin >> n;
    std::cout << gt(n);
}