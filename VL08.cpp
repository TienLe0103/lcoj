#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int64_t a, b;
    std::cin >> a >> b;
    int64_t count = 0;
    for (int64_t i = a; i <= b; i++) {
        if (i % 2 == 0) 
            count += i;
    }
    std::cout << count;
}