#include <iostream>
#include <vector>

signed main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int64_t t; 
    std::cin >> t;
    while (t--) {
        int64_t n, m = 0;
        std::cin >> n;
        std::vector<int64_t> a(100);
        while (n > 0) {
            a[++m] = n % 2;
            n /= 2;
        }
        for (int i = m; i >= 1; i--) {
            std::cout << a[i];
        }
        std::cout << '\n';
    }
}