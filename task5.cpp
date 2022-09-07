#include <iostream>
#include <string>
#include <iterator>

using namespace std;

//---task1

char ch_array[5] = {'A','B','C','D','E'};
int int_array[10] = {1,2,3,4,5,6,7,8,9,10};
string st_array[4];
int lenInt = 10;

void printsAllElements(int int_array[])
{
 for(int i=0; i<lenInt; i++)
  {
   cout << int_array[i] <<endl;
  }
}
void printsAspecificElement(int a)
{
    if(a>0)
    {
        cout<<a<<endl;
    }
}



int main()
{
   
int lenST = 4;
    //cout << sizeof(int_array[0])<<endl;
for(int i=0; i<lenInt; i++)
 {
  cout << int_array[i] <<endl;
 }

for(int i=0; i<lenST; i++)
 {
  st_array[i] = "Daria";
 }

printsAllElements(int_array);
printsAspecificElement(4);

//---task2
int n;
cout << "Enter number:";
cin>> n;
if(n>0)
{
    int I_array[n];
    for(int i=0; i<n; i++)
  {
   I_array[i] = i+1;
  }
//for(int i=0; i<n ; i++)
//{
//cout << I_array[i] << std::endl;
//}
for(int i=0; i<n ; i++)
{
    if(I_array[i]%2!=0)
    {
        cout<<I_array[i]<<" ";
    }
}
    cout <<endl;
    
    for(int i=0; i<n ; i++)
    {
        if (I_array[i]%2==0) 
        {
        cout<<I_array[i]<<" ";
        }
    }

}
    return 0;
}