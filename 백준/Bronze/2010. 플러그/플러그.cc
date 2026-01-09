#include <iostream>

using namespace std;

int main() {
    int N, socket;
    int com = 0;

    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> socket;

        com += (socket - 1);
    }

    cout << com + 1;

    return 0;
}