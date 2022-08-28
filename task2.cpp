#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
//--- task1
   int number1, number2;

    cout << "Enter the first number: ";
   cin >> number1;
  if (number1 >= 0) 
   {
    cout << "First number is positive"<< endl;
  }
  else cout << "First number is negative"<< endl;
    
    cout << "Enter the second number: ";
   cin >> number2;

  if (number2 >= 0) 
   {
    cout << "Second number is positive"<< endl;
  }
  else 
   cout << "Second number is negative"<< endl;
   if (number1>number2 )
   {
    cout << "The bigger number is " <<number1<< endl;
   }
   else if (number2> number1 )
   {
    
    cout << "The bigger number is "  <<number2<< endl;
   }
   else cout << "The numbers are equal"<<endl;
  

   //----task 2
   
    string string1, string2;
    bool a;
cout << endl;
   // take the stupid Enter first
   getline(cin, string1);

    cout << "Enter the first string: " ;
   getline(cin, string1);
   cout << "Enter the second string: " ;
   getline(cin, string2);

   if ( string1 == string2 )
   {
    cout <<"\""<< string1 <<"\""<< " is equal to " << "\""<< string2 <<"\""<< endl;
    a = true;
   }
   else{a = false;
std::cout << std::boolalpha;

   cout << a << endl;
   } 


//--- task 3
cout << endl;

  int number3;

    cout << "Enter the first number: ";
   cin >> number1;
 cout << "Enter the second number: ";
   cin >> number2;
    cout << "Enter the third number: ";
   cin >> number3;
   if ( number1 >= number2 )
   {
    if ( number1 >= number3)
    {
        cout << "The biggest number is " << number1 << endl;
    }
    else cout << "The biggest number is " << number3 << endl;
    
   }
   else if ( number2 >= number3)
   {
        cout << "The biggest number is " << number2 << endl;
   }
   else cout << "The biggest number is " << number3 << endl;
    
    return 0;
}

