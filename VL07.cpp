#include <iostream>

int64_t C(int64_t n, int64_t k) {
    if (k == 0 || k == n) 
        return 1;
    if (k == 1)
        return n;
    return C(n - 1, k - 1) + C(n - 1, k);
}

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int64_t n, k;
    std::cin >> n >> k;
    std::cout << C(n, k);
}