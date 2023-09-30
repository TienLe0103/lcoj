#include <iostream>
#include <numeric>

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int64_t a, b;
    std::cin >> a >> b;
    if (b == 0) {
        std::cout << "INVALID";
        return 0;
    }
    int gcd = std::gcd(a, b);
    if (b < 0) {
        if (b / gcd == -1) {
            std::cout << -(a / gcd);
        } else {
            std::cout << -(a / gcd) << ' ' << -(b / gcd);
        }
    } else {
        if (b / gcd == 1) {
            std::cout << a / gcd;
        } else {
            std::cout << a / gcd << ' ' << b / gcd;
        }
    }
    return 0; 
}