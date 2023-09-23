#include <iostream>
#include <iomanip>

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    double a, b;
    std::cin >> a >> b;
    std::cout << a + b << '\n';
    std::cout << a - b << '\n';
    std::cout << a * b << '\n';
    if (b == 0)
        std::cout << "ERROR";
    else 
        std::cout << std::fixed << std::setprecision(2) << a / b; 
}