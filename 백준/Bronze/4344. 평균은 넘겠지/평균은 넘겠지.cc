#include <iostream>

using namespace std;

int main() {
    int c, n;

    cin >> c;

    for (int i=0; i<c; i++) {
        cin >> n;

        int sum = 0;
        int* score = new int[n];

        for (int j=0; j<n; j++) {
            cin >> score[j];
            sum += score[j];
        }

        sum /= n;

        int num = 0;

        for (int j=0; j<n; j++) {
            if (score[j] > sum)
                num++;
        }

        printf("%.3f%%\n", (100.0 / n) * num);
    }

    return 0;
}