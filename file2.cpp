#include<bits/stdc++.h>
using namespace std;

void reverse_triangle(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    reverse_triangle(n);
    cout << endl;
}
