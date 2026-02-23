#include<iostream>
using namespace std;
int main(){
  int num;
  cout << "enter a number:";
  cin >> num;

  if (num > 0)
  {
    cout << "Num is positive";
  } else if (num < 0) {
    cout << "Num is negative";
  } else {
    cout << "Num is 0";
  }
  return 0;
}