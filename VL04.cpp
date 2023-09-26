#include <iostream>
#include <iomanip>

signed main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    double n;
    std::cin >> n;
    double count = 0.0;
    for (int i = 2; i <= n; i++) {
        count += 1.0 / i;
    }
    std::cout << std::fixed << std::setprecision(4) << count;
}