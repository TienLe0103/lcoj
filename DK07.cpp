#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                std::cout << "WOW";
            else 
                std::cout << "NO";
        } else 
            std::cout << std::fixed << std::setprecision(2) << -1.0 * c / b + 0LL;
    } else {
        double delta = b * b - 4 * a * c;
        if (delta < 0) 
            std::cout << "NO";
        else {
            if (delta == 0) 
                std::cout << std::fixed << std::setprecision(2) << -1.0 * b / (2 * a) + 0LL; 
            else {
                double x1 = (-b + sqrt(delta)) / (2 * a);
                double x2 = (-b - sqrt(delta)) / (2 * a);
                std::cout << std::fixed << std::setprecision(2) << std::min(x1, x2) << " " << std::max(x1, x2);
            }
        }
    }
}