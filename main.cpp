#include <iostream>
using namespace std;
int main() {
  int arr[15];
  for(int i = 0;i < sizeof(arr)/sizeof(arr[0]); i++){
    if(i%2==0){
      arr[i] = 2*i;
    }
    else{
      arr[i] = 3*i;
    }
  }
  cout << "The required array is "<<endl;
  for(int i = 0;i < 15; i++){
    cout << arr[i] << " "<<endl;
  }
  cout << endl;
}