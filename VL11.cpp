#include <iostream>

bool is_prime(int x) {
    if (x < 2)
        return (false);
    for (int i = 2; i * i <= x; i++) 
        if (x % i == 0) 
            return (false);
    return (true);
}

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int64_t n;
    std::cin >> n;
    std::cout << ((is_prime(n)) ? "YES" : "NO");
}