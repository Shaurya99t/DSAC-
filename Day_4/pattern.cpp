#include <iostream>
using namespace std;

int main() {
    int n,k=1;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
     i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
     i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
     i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << n-j+1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
     i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << k<<" ";
            k++;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
