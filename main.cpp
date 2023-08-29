
#include <iostream>

using namespace std;

int sum(int num);

int main() {
  int num = 0;
  cout << "Hello World!" << endl;
  cout << "Enter a number: ";
  cin >> num;
  cout << endl;
  cout << sum(num);
  return 0;
}
int sum(int num){
  int add = 1;
  int second = add + 1;
  int sum = 0;
  for(int i = 0; i < num; i++){
    sum = sum + add + second;
    add++;
  }
  
  return sum;
}
