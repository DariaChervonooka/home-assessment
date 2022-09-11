#include <iostream>
#include <cassert>
using namespace std;

//---task1
class Phone
{
private:
  string name;
  int memory;
  string color;
public:
Phone(){}
void setData (string a, int b)
{
name =a;
memory =b;
}
void setColor (string c)
{
  color =c;
}
void printAllData ()
{
cout <<"name:   "<< name << endl;
cout <<"memory: "<<memory << endl;
cout <<"color:  "<< color << endl;
}
string getName ()
{
  return name;
}
int getMemory ()
{
  return memory;
}
  ~Phone(){};

};

//---task2

class laptop
{
private:
  string companyName;
  int RAM;
  float Frequency;
  int sizeOfLocalStorage;
  int sizes;
  float weight;
public:
  laptop()
  {
  companyName = "Lenovo";
  RAM =8 ;
  Frequency = 1.8 ;
  sizeOfLocalStorage = 250;
  sizes = 13;
  weight = 1.8;
  }
laptop(string a)
  {
    assert(a=="MAC");
  companyName = a;
  RAM =16 ;
  Frequency = 2.8 ;
  sizeOfLocalStorage = 512;
  }
void showTechChar()
{
  cout << "The computer "<< companyName << " has next techical characteristics:"<< endl;  
cout <<"RAM:                   "<< RAM << endl;
cout <<"Frequency:             "<< Frequency << endl;
cout <<"Size of local storage: "<< sizeOfLocalStorage << endl;
}
 void showPhysicalChar()
  {
  cout << "The computer "<< companyName << " has next physical characteristics:"<< endl;
  assert((sizes!=0)&&(weight!=0));  
cout <<"sizes:  "<< sizes << endl;
cout <<"weight: "<< weight << endl;
  }
  string getCompanyName()
  {
    return companyName;
  }
  float getFreq()
  {
    return Frequency;
  }
void setCompanyName(string com_name)
{
  com_name= companyName;
}
  ~laptop(){};

};

 int main(int argc, char const *argv[])
 {
  Phone myPhone;
myPhone.setData("iPhone", 32);
myPhone.setColor("lavandel");
myPhone.printAllData();
string name = myPhone.getName();
int memory = myPhone.getMemory();
cout<< endl;
  laptop L1;
L1.showTechChar();
L1.showPhysicalChar();
string companyName = L1.getCompanyName();
float Frequency = L1.getFreq();
L1.setCompanyName("Lenovo");
laptop L2("MAC");
L2.showTechChar();
//L2.showPhysicalChar();
 return 0;
 }
 