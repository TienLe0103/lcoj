#include <iostream>
#include <vector>
#include <algorithm>

signed main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int64_t n;
    std::cin >> n;
    std::vector<int64_t> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    int64_t d = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (a[n - 1] > a[i]) {
            d++;
            std::cout << a[i];
            return 0;
        }
    }
    if (d == 0) {
        std::cout << "NOT FOUND";
    }
}