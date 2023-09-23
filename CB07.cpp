#include <iostream>
#include <iomanip>

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    double r;
    std::cin >> r;
    std::cout << std::fixed << std::setprecision(3) << r * 2 * 3.14 << ' ' << std::fixed << std::setprecision(3) << r * r * 3.14;
}