#include <iostream>
#include <iomanip>

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    double a, c;
    char b;
    std::cin >> a >> b >> c;
    if (b == '+') 
        std::cout << std::fixed << std::setprecision(2) << a + c;
    else if (b == '-') 
        std::cout << std::fixed << std::setprecision(2) << a - c;
    else if (b == '*')
        std::cout << std::fixed << std::setprecision(2) << a * c;
    else if (b == '/') {
        if (c == 0)
            std::cout << "Math Error";
        else 
            std::cout << std::fixed << std::setprecision(2) << a / c;
    }
}
