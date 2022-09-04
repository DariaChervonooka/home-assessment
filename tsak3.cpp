#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
//--- task1
int number = 0;
for (int i = 1; i <= 8; i++)
  {
    cout << "Daria" << endl;
 }
  cout << endl;
  
  while ( number <=100)
  {
    cout << number << endl;
    number = number +1;
  }

  cout << endl;

  int num = -10;

  while ( num <=10)
  {
    cout << num << endl;
    num = num +1;
  }
  
  cout << endl;

  int n = -100;

  while ( n <=100)
  {
    cout << n << endl;
    n = n +1;
  }
cout << endl;
 n = -100;
  do
  {
    cout << n << endl;
    n +=1;
  } while ( n <=100);
  
 //--- task2
 int sum=0;
do {
 cout << "Enter the positive number: ";
   
   cin >> n;
 }while (n <0);
  
    for (int i = 0; i <=n; i++)
    {
      sum +=i;
    }
cout << sum << endl;    
 

    return 0;
}

