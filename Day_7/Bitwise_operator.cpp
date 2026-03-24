#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 9, i = 6;
    // cout << "Enter the number a,b: ";
    // cin >> a, b;
    cout << "a&b " << (a & b) << endl;
    cout << "a|b " << (a | b) << endl;
    cout << "~a " << ~a << endl;
    cout << "17>>1_8 " << (17 >> 1) << endl;
    cout << "17>>2_4 " << (17 >> 2) << endl;
    cout << "19<<1_38 " << (19 << 1) << endl;
    cout << "21<<2_84 " << (21 << 2) << endl;
    cout << (++i) << endl; // pre increment i++;
    cout << (i++) << endl; // post increment i++;
    cout << i << endl;     // print
    cout << (--i) << endl; // post decrement --i;
    cout << (i--) << endl; // post decrement and return value of i
    int c,d=1;
    c=10;
    if(++c){
            cout << "Enter the number a,b: ";
    cout<<b;
    }
    else
    cout<< ++b;
    a=1,b=2;
    if (a-->0 && ++b>2){
        cout<<"stage1-Inside if";
    }
    else{
        cout<<"stage1-Inside else";

    }
    int number =3;
    cout<<(25*(++number));
    return 0;
}
