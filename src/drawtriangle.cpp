#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int length;
    cout << "Length: " << endl;
    // cin >> length;
    length = 7;
    char symbol;
    cout << "Symbol: " << endl;
    // cin >> symbol;
    symbol = '&';

    // draw a triangle starting with the narrow side at the top
    for(int i = 1; i <= length; i++) {
        for(int j = 1; j <= i; j++) {
            cout << setw(2) << symbol;
        }
        cout << endl;
    }
    cout << endl << endl;

    // draw another triangle starting with the wide side at the top
    for(int i = length; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << setw(2) << symbol;
        }
        cout << endl;
    }

    return 0;
}