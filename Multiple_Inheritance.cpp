#include <iostream>
using namespace std;
/*———————————————————————————————————————————————————————————————————————————*/
class academic_marks {     // base class 1
    protected:
        int RegNum, marks1, marks2;
    public:
        void get_sub() {
            cout << "Enter the Reg Num : ";
            cin >> RegNum;
            cout << "Enter the Internal and Terminal marks : ";
            cin >> marks1 >> marks2;
        }
};
/*———————————————————————————————————————————————————————————————————————————*/
class cocurricular_marks {     // base class 2
    protected:
        int comarks;
    public:
        void get_co() {
            cout << "Enter the CoCurricular Activities marks : ";
            cin >> comarks;
        }
};
/*———————————————————————————————————————————————————————————————————————————*/
//Result is a combination of subject_marks and cocurricular activities marks
class Result : public academic_marks, public cocurricular_marks {     // derived class
   public:
       void display() {
           int total = (marks1 + marks2 + comarks);
           cout << "\nReg Num : " << RegNum << "\nTotal marks : " << total << " / 300" << endl;
       }
};
/*———————————————————————————————————————————————————————————————————————————*/
int main(){
    Result day;
    day.get_sub(); //read subject marks
    day.get_co(); //read cocurricular activities marks
    day.display(); //display the total marks
}
