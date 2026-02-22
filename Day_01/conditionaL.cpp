#include <iostream>
using namespace std;
int main() {
  int a;
  cout << "Enter the value of a: ";
  cin >> a;
  cout << "The value of a is " << a << endl;
  if (a > 0) {
    cout << "a is a positive number" << endl;
  } else if (a < 0) {
    cout << "a is a negative number" << endl;
  } else {
    cout << "a is zero" << endl;
  }
  
  int b;
  cout << "Enter the value of b: ";
  cin >> b;
  if (a < b) {
    cout << "a is smaller than b" << endl;
  } else if (a > b) {
    cout << "b is smaller than a" << endl;
  } else {
    cout << "a and b are equal" << endl;
  }
  int c=2;
  int d=c+1;
  if((c=3)==d){
    cout <<c;
  }
  else
  {
    cout <<c+1;
  }
  return 0;
}
