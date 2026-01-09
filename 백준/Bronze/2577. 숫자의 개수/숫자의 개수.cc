#include <iostream>
#include <string>

using namespace std;

int main() {
    int cnt[10] = {};
    int A, B, C;

    cin >> A >> B >> C;

    int res = A * B * C;

    string s = to_string(res);

    for (char ch : s) {
        cnt[ch - '0']++; 
    }

    for (int v : cnt) {
        cout << v << "\n";
    }

    return 0;
}