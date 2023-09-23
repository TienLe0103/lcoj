#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false); std::cout.tie(nullptr); std::cout.tie(nullptr);
    std::string n;
    std::cin >> n;
    std::cout << ((n[0] == '-') ? (n.length() - 1) : n.length());
}