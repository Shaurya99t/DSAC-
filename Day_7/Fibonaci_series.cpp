#include <iostream>
using namespace std;

int main()
{
int a=0,b=1,n;
cout<<"enter the value"<<endl;
cin>>n;
cout<<a<<" "<<b<<" ";
for(int i=0;i<=n;i++){
    int nextNumber = a+b;
    cout<<nextNumber<<" ";
    a=b;
    b=nextNumber;
}
      return 0;
}