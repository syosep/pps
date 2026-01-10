#include <iostream>

using namespace std;

int condition(int x, int y) {
    if (y == 1) {
        return 1;
    } else if (x == 0) {
        return y;
    } else {
        return (condition(x-1, y) + condition(x, y-1));
    }
}

int main() {
    int T, k, n;
    cin >> T;

    for (int i=0; i<T; i++) {
        cin >> k >> n;
        cout << condition(k, n) << endl;
    }

    return 0;
}