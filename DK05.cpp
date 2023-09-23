#include <iostream>
#include <cmath>

bool SCP(int64_t x) {
    return int64_t(sqrt(x)) * int64_t(sqrt(x)) == x;
}

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int64_t n;
    std::cin >> n;
    std::cout << ((SCP(n)) ? "YES" : "NO");   
}
