#include <iostream>
using namespace std;

int main()
{
    int pro=1,sum=0,n=300;
    while(n!=0){
        int rem =n%10;
        pro=pro*rem;
        sum=sum+rem;
        n=n/10;
    }
    int ans = pro-sum;
    cout<<"The answer is "<<ans<<endl;
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;
           return 0;
}