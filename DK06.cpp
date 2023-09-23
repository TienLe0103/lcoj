#include <iostream>
#include <iomanip>

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int64_t a, b;
    std::cin >> a >> b;
    
    if (a == 0) 
        if (b == 0)
            std::cout << "WOW";
        else 
            std::cout << "NO";
    else {
        std::cout << std::fixed << std::setprecision(2) << (double)-b / a;
    }
}