#include <iostream>

signed main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int64_t a, b;
    std::cin >> a >> b;
    for (int i = a; i <= b; i++) {
        std::cout << i << ' ';
    }
}