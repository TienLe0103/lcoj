#include <iostream>

signed main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int64_t n;
    std::cin >> n;
    int64_t count = 0;
    for (int i = 1; i <= (3 * n + 1); i++) {
        if (i % 2 != 0) 
            count += i;
        else    
            count -= i;
    }
    std::cout << count;
}