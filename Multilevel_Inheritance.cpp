#include <iostream>
#include <string>
using namespace std;
/*———————————————————————————————————————————————————————————————————————————*/
class BaseClass{     // base class
    public:
        int a = 1;
        int b = 2;
        int c = 3;  
}; 
/*———————————————————————————————————————————————————————————————————————————*/
class DerivedClass1 : public BaseClass{     // derived class 1
    public:
        void function1(){
            cout << "Hello ";
        }
};
/*———————————————————————————————————————————————————————————————————————————*/
class DerivedClass2 : public DerivedClass1{     // derived class 2
    public:
        void function2(){
            cout << "World";
        }
};
/*———————————————————————————————————————————————————————————————————————————*/
int main(){

    DerivedClass2 object;
   
    cout << object.a << " ";
    cout << object.b << " ";
    cout << object.c << " ";
    object.function1();
    object.function2();
    cout << endl;
}













