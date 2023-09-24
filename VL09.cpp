#include <iostream>
#include <iomanip>

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int64_t x, n, tu = 1, mau = 1;
    std::cin >> x >> n;
    double s = 0;
    for (int i = 1; i <= n; i++) {
        tu *= x;
        mau *= i;
        s += double(tu) / mau;
    }
    std::cout << std::fixed << std::setprecision(2) << s;
}