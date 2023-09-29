#include <iostream>
#include <string>
#include <algorithm>

signed main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    std::string a;
    std::cin >> a;
    std::reverse(a.begin(), a.end());
    int64_t i = 0;
    while (i < (int64_t)a.length() && a[i] == '0') 
        i++;
    if (i > 0)
        a = a.substr(i);
    std::cout << a;
}