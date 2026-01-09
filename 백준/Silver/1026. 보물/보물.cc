#include <iostream>
#include <algorithm>

using namespace std;

int N;
int A[51];
int B[51];
int result = 0;

int main() {
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    for (int i=0; i<N; i++) {
        cin >> B[i];
    }

    sort(A, A+N, greater<int>());
    sort(B, B+N, less<int>());

    for (int i=0; i<N; i++) {
        int temp = 1;
        temp = A[i] * B[i];
        result += temp;
    }

    cout << result;
    
    return 0;
}