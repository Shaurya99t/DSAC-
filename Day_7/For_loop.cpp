#include <iostream>
using namespace std;

int main()
{
    int n, i,sum=0;
    cout << "enter the value of n" << endl;
    cin >> n;
    cout << "printing count fro 1 to n" << endl;
    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
        cout << sum << endl;
    i = 1;
    cout << "printing count fro 1 to m" << endl;
    for (;;)
    {
        if (i <= n)
        {
            cout << i << endl;
        }
        else
        {
            break;
        }
        i++;
    }

    return 0;
}