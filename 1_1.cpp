#include<iostream>
#include <string>
using namespace std;
class Student {
    private:
    int rollno;
    string name;
    float marks[3];
    float total;
    float percentage;
    string result;
    public:
    void acceptDetails() {
          cout<<"Enter Roll No:: ";
          cin>>rollno;
          cin.ignore(); // To ignore the newline character after rollno input
            cout<<"Enter Name:: ";
            getline(cin,name);
            cout<<"Enter Marks of 3 subjects:: ";
            for(int i=0;i<3;i++) {
                cin>>marks[i];
            }
        }
    void calculateResult() {
        total = 0;
        for(int i=0;i<3;i++) {
            total += marks[i];
        }
        percentage = total / 3;
        if(percentage >= 60) result = "First Division";
        else if(percentage >= 50) result = "Second Division";
        else if(percentage >= 40) result = "Third Division";
        else result = "Fail";
    }
    void displayDetails() {
        cout<<"\n----------Student Details--------- "<<endl;
        cout<<"Roll No:: "<<rollno<<endl;
        cout<<"Name:: "<<name<<endl;
        cout<<"Marks of 3 subjects:: ";
        for(int i=0;i<3;i++) {
            cout<<marks[i]<<" ";
        }
        cout<<endl;
        cout<<"Total Marks:: "<<total<<endl;
        cout<<"Percentage:: "<<percentage<<endl;
        cout<<"Result:: "<<result<<endl;
    }
};
int main() {
    Student s;
    s.acceptDetails();
    s.calculateResult();
    s.displayDetails();
    return 0;
}   