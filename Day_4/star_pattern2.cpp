#include <iostream>
using namespace std;

int main()
{
    int n;
    char ch = 'A';
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << static_cast<char>(ch + col - 1); // Adjust ch based on row and col
            col = col + 1;
        }
        ch = ch + 1; // Increment ch for the next row
        cout << endl;
        row = row + 1;
    }
    char cz='A';
    row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {

            cout <<cz;
            cz =cz+1;
            col = col + 1;
        }

    cz=cz-1; 
        cout << endl;
        row = row + 1;
    }
    
    return 0;
}
