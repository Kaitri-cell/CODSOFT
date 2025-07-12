#include<bits/stdc++.h>

using namespace std;
//TASK 2 : NUMBER GUESSING GAME

int main() {
    int x = 16;
    int n, i = 0;

    cout << "Guess the no. " << endl;

    do {
        cin >> n;
        cout << n << endl;
        if (n == x) {
            cout << "correct ";
            break;
        }
        else if (n > x) {
            cout << "guess lower";
            break;
        }
        else {
            cout << "guess higher";
            break;
        }
        cout << endl;
    } while (i >= 0);
    i++;
    return 0;
}