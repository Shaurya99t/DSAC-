#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime=1;
    cout << "Enter the number of elements: "<<endl;
    cin >>n;
    for(int i=2;i<n;i++){
        if (n%i==0){
            isPrime = 0;
            break;
        }
    }
    if (isPrime==0){
            cout<<"the number is not  prime"<<endl;
    }
    else{
            cout<<"the number is prime"<<endl;

    }
          return 0;
}