#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,ans=0,digit,i=0;
    cin>>n;
    while(n!=0){
digit=n&1;
ans=(digit*pow(10,i)+ans);
n=n>>1;
i++;
    }
    cout<<"answer is "<<ans<<endl;
    
           return 0;
}