#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n-i+1) {
            cout << j;
            j++;
        }
        int k = 1;
        while (k <= 2*i-3) {
            cout << "*";
            k++;
        }
        if (i > 1) {
            int l = n-i+1;
            while (l >= 1) {
                cout << l;
                l--;
            }
        }
        cout << endl;
        i++;
    }

    return 0;
}
