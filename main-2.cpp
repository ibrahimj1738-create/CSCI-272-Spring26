#include <iostream>
using namespace std;

int x=5;
void function1(){
   int x=10;
    cout<<::x<<endl;
    
}
int main()
{
   int x=10;
   function1();
    cout<<x<<endl;
   
     return 0;
}