#include <iostream>

using namespace std;

int main() {
    int num = 0;
    int square = 0;
    int num2 = 0;

    for (int i=0; i<5; i++) {
        cin >> num;
        square += num * num;
    }

    num2 = square % 10;

    cout << num2;
    
    return 0;
}