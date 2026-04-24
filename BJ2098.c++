//오늘은 현대 오토에버에서 비슷하게 나왔던 외판원 문제 복습

#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int n;
int w[16][16];
int dp[16][1 << 16];

int tsp(int now, int visited) {
    // 모든 도시 방문 완료
    if (visited == (1 << n) - 1) {
        if (w[now][0] == 0) return INF; // 시작점으로 못 돌아감
        return w[now][0];
    }

    int &ret = dp[now][visited];
    if (ret != -1) return ret;

    ret = INF;

    for (int next = 0; next < n; next++) {
        // 이미 방문한 도시
        if (visited & (1 << next)) continue;

        // 길이 없는 경우
        if (w[now][next] == 0) continue;

        ret = min(ret, w[now][next] + tsp(next, visited | (1 << next)));
    }

    return ret;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> w[i][j];
        }
    }

    memset(dp, -1, sizeof(dp));

    cout << tsp(0, 1) << '\n';

    return 0;
}