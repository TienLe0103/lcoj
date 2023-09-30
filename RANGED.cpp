#include <iostream>

#define in int64_t

signed main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    in a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << ((c > b || d < a) ? "NO" : "YES");
}