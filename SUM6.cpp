#include <iostream>
#include <cmath>
#include <iomanip>

#define in int64_t
#define FOR(x, l, r) for(in x = l; x < r; x++)

double sum(in x) {
    double s = sqrt(2);
    FOR(i, 1, x) s = sqrt(2 + s);
    return s;
}

signed main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    in t;
    std::cin >> t;
    while(t--) {
        in n;
        std::cin >> n;
        std::cout << std::fixed << std::setprecision(5) << sum(n) << '\n';
    }
}