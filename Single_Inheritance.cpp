#include <iostream>
#include <string>
using namespace std;
/*———————————————————————————————————————————————————————————————————————————*/
class Smartphone{     // base class
   
   public:
       string name = "Motorola";
       int camera = 16;
       int storage = 8;
};
/*———————————————————————————————————————————————————————————————————————————*/
class Motorola : public Smartphone{     // derived class
   public:
       void colour(){
           cout << "Sapphire Blue";
       }
};
/*———————————————————————————————————————————————————————————————————————————*/
int main(){

   Motorola G9;
   cout << "Features of " << G9.name << " :\n\n";
   cout << "Camera : " << G9.camera << " Mega Pixels" << endl;
   cout << "Storage : " << G9.storage << " GB" << endl;
   cout << "Colour : ";
  
   G9.colour();
  
   cout << endl;
   
   return 0;
}
/*———————————————————————————————————————————————————————————————————————————*/
