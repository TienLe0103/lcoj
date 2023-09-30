#include <iostream>

signed main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int64_t n;
    std::cin >> n;
    if (n == 0) {
        std::cout << "INF";
        return 0;
    }
    for (int64_t i = abs(n); i > 0; i--) {
        if (abs(n) % i == 0)
            std::cout << i << ' ';
    }
}