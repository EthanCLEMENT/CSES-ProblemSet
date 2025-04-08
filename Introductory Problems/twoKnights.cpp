#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (long long k = 1; k <= n; k++) {
        long long total_positions = (k * k) * (k * k - 1) / 2;
        long long attacking_positions = 0;

        if (k >= 3) {
            attacking_positions = 4 * (k - 1) * (k - 2);
        }

        cout << total_positions - attacking_positions << endl;
    }

    return 0;
}
