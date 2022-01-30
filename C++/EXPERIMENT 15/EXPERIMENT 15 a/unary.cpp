#include <iostream>    
using namespace std;    
class test    
{    
   private:    
      int num;    
   public:    
       test() {
       	num = 8;
       }
       void operator ++() {     
          num = num+2;     
       }   
       void Print() {     
           cout<<"The Count is: "<<num<<endl;     
       }    
};    
int main()    
{    
    test t;    
    ++t;  // calling of a function "void operator ++()"    
    t.Print();    
    return 0;  
}

