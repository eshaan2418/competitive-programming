#include <iostream>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    const int INF = INT_MAX / 2;

    while (t--) {
        string xp, yp;
        cin >> xp >> yp;
        int n = xp.size();

        // dp0 = min flips with current y_i = 0
        // dp1 = min flips with current y_i = 1
        int dp0 = 0;
        int dp1 = INF;

        for (int i = 0; i < n; i++) {
            int xpi = xp[i] - '0';
            int ypi = yp[i] - '0';

            auto cost = [&](int prevY, int curY) {
                int xi = prevY ^ curY;
                int c = 0;
                if (curY != ypi) c++;
                if (xi != xpi) c++;
                return c;
            };

            int ndp0 = min(
                dp0 + cost(0, 0),
                dp1 + cost(1, 0)
            );
            int ndp1 = min(
                dp0 + cost(0, 1),
                dp1 + cost(1, 1)
            );

            dp0 = ndp0;
            dp1 = ndp1;
        }

        cout << min(dp0, dp1) << "\n";
    }

    return 0;
}
