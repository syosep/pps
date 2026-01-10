#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int way;
    cin >> way;

    int a[5] = {0,};

    if (N > 5) {
        cout << "Love is open door";
    } else {
        for (int i=1; i<N; i++) {
            if (way == 0) {
                if (i%2==1) {
                    a[i] = 1;
                }
            } else if (way == 1) {
                if (i%2==0) {
                    a[i] = 1;
                }
            }
            cout << a[i] << "\n";
        }
    }

    return 0;
}