#include <iostream>
using namespace std;


int printName(string name)
{
cout << name << endl;
    return 0;
}

int printNameSurname()
{
  string name, surname ;
  int age; 
  cout << "Enter name: ";
  cin >> name;
  cout << "Enter surname:";
  cin >> surname;
  cout << "Enter age:";
cin >> age; 
cout << name <<" " << surname <<" "<< age << endl;
    return 0;
}

bool compare(int a, int b)
{
  if (a==b)
  {
    return true;
  }
  else return false; 

  
}
 int printInt(int n)
 {
  for ( int i = 0; i <=n; i++)
  {
    cout << i << " " ;

  }
  cout << endl;
  return 0;
  
 }

 int printSum(int n)
 {
  int sum = 0;
  for (int i = 0; i <=n; i++)
    {
      sum +=i;
    }
     return sum;
 }

 int fakto(int n) 
 {
   int f = 1;
  for (int i = 1; i <=n; i++)
    {
      f *=i;
    }
     return f;
 }

int calculateSumEven_Odd(int a, char b)
{
  int result=0;
  if(b!='o'&&b!='e') {cout << "error char" << endl; return 222; }
if (b=='o')
{
  for ( int i = 1; i <=a; i++)
  {
    if (i%2!=0) { 
      result+=i;
    }  
  }
}
if (b=='e')
{
  for ( int i = 1; i <=a; i++)
  {
    if (i%2==0) {
      result+=i;
    }
  }
}
return result;
}



int main(int argc, char const *argv[])
{
// string name = "Daria";
//int a =0;
printName("Daria");

printNameSurname();

 // cout << "Enter number first:";
 // cin >> a;
 // cout << "Enter number second:";
 // cin >> b;
//bool check = compare(a, b);
compare(2, 2);

//std::cout << std::boolalpha;
//cout << check << endl;
printInt(6);

int sum = printSum(3);
//cout << sum << endl;    

//---task2

int f = fakto(10);
//cout<< f<< endl;

int result =calculateSumEven_Odd(5, 'o');

   cout << result<< endl;
   
    return 0;
}

