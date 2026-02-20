#include <iostream>
using namespace std;
int main(){
  int arr[] = {5, 4, 6, 9,2};
  int n = sizeof(arr) / sizeof(int);
  int max = arr[0];

  for(int i=0; i<n; i++){
    if (arr[i] > max){
      max = arr[i];
      cout << "assigning value" << arr[i] << "to max\n";
    }
    
  }
  cout << "max = " << max << endl;
  return 0;
}





//*** for finding smallest value */


// int main(){
//   int arr[] = {5, 4, 6, 9,2};
//   int n = sizeof(arr) / sizeof(int);
//   int min = arr[0];

//   for(int i=0; i<n; i++){
//     if (arr[i] < min){
//       min = arr[i];
//       cout << "assigning value" << arr[i] << "to min\n";
//     }
    
//   }
//   cout << "min = " << min << endl;
//   return 0;