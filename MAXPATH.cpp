#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>

#define FOR(x, l, r) for (int64_t x = l; x < r; x++)
#define vi std::vector<int64_t>

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);

    int64_t m, n, d = INT_MIN;
    std::cin >> m >> n;

    std::vector<vi> a(m, vi(n));
    std::vector<vi> b(m, vi(n));

    FOR(i, 0, m) FOR(j, 0, n) std::cin >> a[i][j];
    FOR(j, 0, n) FOR(i, 0, m) {
        if (j == 0)
            b[i][j] = a[i][j];
        else {
            int64_t temp = b[i][j - 1];
            if (i > 0)
                temp = std::max(temp, b[i - 1][j - 1]);
            if (i < m - 1)
                temp = std::max(temp, b[i + 1][j - 1]);
            b[i][j] = temp + a[i][j];
        }
        if (j == n - 1)
            d = std::max(d, b[i][j]);
    }

    std::cout << d;
}
