#include <iostream>

signed main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    char a, b;
    std::cin >> a >> b;
    for (int64_t i = (int64_t)a; i <= (int64_t)b; i++) {
        std::cout << char((int64_t)i - 32) << ' ';
    }
}