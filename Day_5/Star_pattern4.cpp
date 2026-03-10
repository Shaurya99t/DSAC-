#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space > 0) // Change here: Check for space greater than 0
        {
            cout << " ";
            space = space - 1; // Change here: Decrement space
        }
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    } 
     row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space > 0) // Change here: Check for space greater than 0
        {
            cout << "*";
            space = space - 1; // Change here: Decrement space
        }
        int col = 1;
        while (col <= row)
        {
            cout << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
     
    return 0;
}
