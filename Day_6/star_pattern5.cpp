#include <iostream>
using namespace std;

int main()
{
    int n, space,temp,k=1;

    cin >> n;
    space=n;
    temp=n;
    int row = 1;
    while (row <= space)
    {
         while (temp < 0) // Change here: Check for space greater than 0
        {
            cout << ".";
            space = row-1; // Change here: Decrement space
        }
        int col = 1;
        while (col <= n)
        {
            cout << k;
            col = col + 1;
        }
            k=k+1;
        cout << endl;
        n = n - 1;
        row = row + 1;
    }

    return 0;
}