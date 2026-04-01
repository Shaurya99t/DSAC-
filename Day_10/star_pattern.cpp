#include <iostream>
using namespace std;

int main() {
    int n,k=1 ;
    cin>>n;
    int i =1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;

    }
    i =1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;

    }
    i =1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<k<<" ";
            k++;
            j++;
        }
        cout<<endl;
        i++;

    }
    i =1;
    int p=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<p<<" ";
        p++;
            j++;
        }
        p=p-i+1;
        cout<<endl;
        i++;

    }
    i =1;
    p=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<p<<" ";
            p--;
            j++;
        }
        p=i+1;
        cout<<endl;
        i++;

    }
    i =1;
    p=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<p<<" ";
            p--;
            j++;
        }
        p=i+1;
        cout<<endl;
        i++;

    }
     return 0;
}
