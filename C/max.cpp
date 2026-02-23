#include<iostream>
using namespace std;
int main(){
  int a, b;
  cout << "Enter two numbers:";
  cin >> a >> b;

  if (a > b)
  {
    cout << "max num is :" << a;
  } else {
    cout << "max num is: " << b;
  }
  
  return 0;
}