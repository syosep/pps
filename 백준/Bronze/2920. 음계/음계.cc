#include <iostream>

using namespace std;

int main() {

    int number[8];
    int ascend = 0;
    int descend = 0;

    for (int i=0; i<8; i++) {
        cin >> number[i];
    }

    for (int i=0; i<8; i++) {
        if (number[i] == i+1) ascend++;
        else if (number[i] == 8-i) descend++;
    }

    if (ascend == 8) cout << "ascending";
    else if (descend == 8) cout << "descending";
    else cout << "mixed";

    return 0;
}