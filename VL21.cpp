#include <iostream>
#include <cmath>

int64_t timx(int64_t x) {
    double delta = 1 + 8.0 * x;
    double r = (-1 + sqrt(delta)) / 2;
    return r;
}

signed main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int64_t n;
    std::cin >> n;
    std::cout << timx(n);
}

/*
(1 + n) * n / 2
*/