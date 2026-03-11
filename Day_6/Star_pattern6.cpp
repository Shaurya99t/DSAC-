#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    int row = 1;
    while (row <= n)
    {     
        // print space
        int space =n-row;
        while(space){
            cout << " ";
            --space;
        }
        // print first traingle
        int j=1;
        while(j<=row){
            cout<<j;
            j=j+1;
        }
        // print second traingle
        int k= row-1;
        while(k){
            cout<<k;
            k=k-1;
        }
         cout << endl;
        row = row + 1;
    }
    return 0;
}
