#include<iostream>
#include<string.h>
using namespace std;
class student{
 private:
 int roll;
 string degree;
 char hostel;
 float cg;
 public:
 void get()
 {
 	cout<<"enter the details of student"<<endl;
 	cout<<"Enter the roll no-";
    cin>>roll;
    cout<<"Enter the degree-";
    cin>>degree;
    cout<<"Enter the hostel-";
    cin>>hostel;
    cout<<"Enter the cg-";
    cin>>cg;
 }
 void updateroll()
 {
 	cout<<"enter new roll-";
 	cin>>roll;
 }
 void updatehostel()
 {
 	cout<<"enter new hostel-";
 	cin>>hostel;
 }
 void updatecg()
 {
 	cout<<"enter new cg-";
 	cin>>cg;
 }
 void displaydetails()
 {
    cout<<"rollno-"<<roll<<endl<<"degree-"<<degree<<endl<<"hostel-"<<hostel<<endl<<"cg-"<<cg<<endl;
 }
};
int main()
{
    student pratyush;
    pratyush.get();
    pratyush.displaydetails();
    pratyush.updateroll();
    pratyush.updatehostel();
    pratyush.updatecg();
    pratyush.displaydetails();
    return 0;
}
