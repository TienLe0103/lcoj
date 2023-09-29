#include <iostream>

signed main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int64_t a, b, d = 0;
    std::cin >> a >> b;
    for (int64_t i = b - 1; i > a; i--) {
        if (i % 3 == 0) { 
            std::cout << i << ' ';
            d++;
        }
    }
    if (d == 0)    
        std::cout << "NOT FOUND";
}