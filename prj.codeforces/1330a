#include <algorithm>
#include <iostream>
#include <vector>

int solution(int n, int x) {
    int m = 0;
    int next = 0;
    std::vector<int> q;
    
    for (int i = 0; i < n; i++) {
        std::cin >> next;
        m = std::max(m, next);
        q.push_back(next);
    }
    
    int c = 0;
    bool f = false;
    int res = 0;
    
    for (int i = 1; i <= m; i++) {
        f = false;
        
        for (int j = 0; j < n; j++) {
            if (i == q[j]) {
                f = true;
                break;
            }
        }
        
        if (!f && x != 0) {
            x--;
            res = i;
        }
        else if (!f && x == 0) {
            break;
        }
        else if (f) {
            res = i;
        }
    }
    
    if (x != 0) {
        res += x;
    }
    
    return res;
}

int main() {
    int k = 0;
    std::cin >> k;
    int n = 0, x = 0;
    
    for (int i = 0; i < k; i++) {
        std::cin >> n >> x;
        std::cout << solution(n, x) << std::endl;
    }
}
