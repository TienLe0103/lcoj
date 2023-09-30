#include <iostream>
#include <algorithm>

signed main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int64_t a, b;
    std::cin >> a >> b;
    std::cout << abs(std::__gcd(a, b));
}