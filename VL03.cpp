#include <iostream>

signed main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int64_t n, ans = 0;
    std::cin >> n;
    for (int i = 2; i <= n; i++) {
        ans += i;
    }
    std::cout << ans + 2 * n;
}