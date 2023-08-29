
#include <iostream>

using namespace std;

int sum(int num);
int product(int num);

int main() {
  int num = 0;
  cout << "Hello World!" << endl;
  cout << "Enter a number: ";
  cin >> num;
  cout << endl;
  cout << sum(num) << endl;
  cout << product(num) << endl;
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
int product(int num){
  int add = 1;
  int second = add + 1;
  int product = 1;
  for(int i = 0; i < num; i++){
    product = product * add * second;
    add++;
  }

  return product;
}
