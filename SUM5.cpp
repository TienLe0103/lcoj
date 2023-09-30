#include <iostream>
#include <iomanip>
#include <vector>

#define in int64_t
#define vd std::vector<double>
#define FOR(x, l, r) for(in x = l; x < r; x++)

const in N = 1e6 + 5;

void sum(vd &a) {
    double s = 0.0;
    FOR(i, 1, N) {
        s += 1.0 / i;
        a[i] = s;
    }
}

signed main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    
    in t;
    std::cin >> t;
    
    vd a(N);
    sum(a);
    
    while(t--) {
        in n;
        std::cin >> n;
        std::cout << std::fixed << std::setprecision(5) << a[n] << '\n'; 
    }
}