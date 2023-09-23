#include <iostream>

bool NAM_NHUAN(int x) {
    return (x % 400 == 0) || (x % 4 == 0 && x % 100 != 0);
}

int main() {
    std::ios_base::sync_with_stdio(0); std::cout.tie(nullptr); std::cout.tie(nullptr);
    int y;
    std::cin >> y;
    if (y > 100000 || y <= 0) 
        std::cout << "INVALID";
    else 
        std::cout << ((NAM_NHUAN(y)) ? "YES" : "NO");
}
