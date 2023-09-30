#include <iostream>
#include <cmath>

int64_t demU(int64_t x) {
    int64_t count = 0;
    x = abs(x);
    for (int64_t i = 1; i <= sqrt(x); i++) {
        if (x % i == 0) {
            count++;
            if (i * i != x)
                count++;
        }
    }    
    return count;
}

signed main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int64_t n;
    std::cin >> n;
    std::cout << demU(n);
}