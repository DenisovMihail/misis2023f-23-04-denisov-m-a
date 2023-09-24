#include <iostream>
#include <vector>
using namespace std;

int solution() {
    int n, m, sx, sy, d;
    cin >> n >> m >> sx >> sy >> d;

    bool blocked_up = false;
    bool blocked_down = false;
    bool blocked_left = false;
    bool blocked_right = false;

    for (int i = 1; i <= n; i++) {
        if (abs(i - sx) + abs(1 - sy) <= d) {
            blocked_up = true;
        }
        if (abs(i - sx) + abs(m - sy) <= d) {
            blocked_down = true;
        }
    }

    for (int i = 1; i <= m; i++) {
        if (abs(1 - sx) + abs(i - sy) <= d) {
            blocked_left = true;
        }
        if (abs(n - sx) + abs(i - sy) <= d) {
            blocked_right = true;
        }
    }
    if (blocked_up && blocked_left || blocked_up && blocked_down || blocked_down && blocked_right || blocked_left && blocked_right || abs(n - sx) + abs(m - sy) <= d) {
        return -1;
    }
    return n + m - 2;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        std::cout << solution() << std::endl;
    }

    return 0;
}
