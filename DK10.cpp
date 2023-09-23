#include <iostream>

int NAM_NHUAN(int x) {
    return (x % 400 == 0) || (x % 4 == 0 && x % 100 != 0);
}

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int m, y;
    std::cin >> m >> y;
    if (m < 0 || m > 12 || y < 0) {
        std::cout << "INVALID";
    } else {
        if (m == 2) {
            if (NAM_NHUAN(y)) {
                std::cout << "29";
            } else {
                std::cout << "28";
            }
        } else {
            if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
                std::cout << "31";
            } else {
                std::cout << "30";
            }
        }
    }
}