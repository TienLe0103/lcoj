#include <iostream>

int64_t tongU(int64_t x) {
    int64_t s = 0;
    for (int64_t i = 1; i < x; i++) {
        if (x % i == 0) 
            s += i;
    }
    return s;
}

signed main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int64_t n;
    std::cin >> n;
    std::cout << ((n == tongU(n)) ? "YES" : "NO");
}