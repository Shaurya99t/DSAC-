#include <iostream>
using namespace std;

int main() {
    int a,b=1;
    float c;
    cout << "Enter a number for the loop: ";
    cin >> a;

    while (b <= a) {
        cout << b << endl;
        // c=c+b;
        b++;
    }
    c= (a/2.0)*(1+a);
    cout << c << endl;

    return 0;
}
