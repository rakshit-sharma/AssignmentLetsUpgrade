#include<bits/stdc++.h>
using namespace std;

struct Student{
    int roll;
    float marks;
};

int main(){
    
    
    Student* ptr = new Student;

    cout<<"\nEnter Enrollment Number: ";
    cin>>(*ptr).roll;  //(*ptr).roll is same as ptr->roll
    cout<<"Enter Marks: ";
    cin>>(*ptr).marks;
    
    cout<<"\nDetails Display\n";
    cout<<"\nEnrollment Number: "<<(*ptr).roll<<endl<<"Marks: "<<(*ptr).marks;
    
    delete ptr;
    return 0;
}
