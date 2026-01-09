#include <iostream>

using namespace std;

int main() {
    int p1, p2;
    int total = 0;
    int max = 0;

    for (int i=0; i<4; i++) {
        cin >> p1 >> p2;
        total += p2 - p1;

        if (total > max) {
            max = total;
        }
    }

    cout << max;

    return 0;
}