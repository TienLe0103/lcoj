#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int d, r;
    std::cin >> d >> r;
    std::cout << (d + r) * 2 << ' ' << d * r;
}