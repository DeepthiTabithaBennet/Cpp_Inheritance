#include <iostream>
#include <string>
using namespace std;
/*———————————————————————————————————————————————————————————————————————————*/
class student{     // base class 1
    int RegNo;
    string name;
    public:
        void getstudent(){
            cout << "Enter the Reg No and student name : ";
            cin >> RegNo >> name;
        }
};
/*———————————————————————————————————————————————————————————————————————————*/
class marks: public student{     //derived class 1
    protected:
        int marks_math, marks_phy, marks_chem;
    public:
        void getmarks(){
            cout << "Enter 3 subject marks : ";
            cin >> marks_math >> marks_phy >> marks_chem;
   }
};
/*———————————————————————————————————————————————————————————————————————————*/
class sports{     // base class 2
    protected:
        int spmarks;
    public:
        void getsports(){
            cout << "Enter sports marks : ";
            cin >> spmarks;
            cout << endl;
        }
};
/*———————————————————————————————————————————————————————————————————————————*/
class result : public marks, public sports{     // derived class 2
    int total_marks;
    float avg_marks;
    public :
        void display(){
            total_marks = marks_math + marks_phy + marks_chem;
            avg_marks = total_marks / 3.0;
            cout << "Total marks = " << total_marks << endl;
            cout << "Average marks = " << avg_marks << endl;
            cout << "Average + Sports marks = " << avg_marks + spmarks << endl;
        }
};
/*———————————————————————————————————————————————————————————————————————————*/
int main(){
    result res; //object
    
    res.getstudent();
    res.getmarks();
    res.getsports();
    res.display();
    return 0;
}
