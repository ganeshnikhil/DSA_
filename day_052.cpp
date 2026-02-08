// day20.md
// 1. Sort Students by Grade

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


using namespace std;
struct Student{
    string name;
    int marks;
};

bool compare(struct Student student1 , struct Student student2){
    return student1.marks < student2.marks;
}


int main(){
    int no_of_students;
    struct Student student;
    vector<Student> details;
    string name;
    int marks;

    cout<<"No of students: ";
    cin>>no_of_students;


    for(int i = 0 ;i < no_of_students ; i++){
        cout<<"Name "<<i<<" :";
        cin>>name;
        cout<<"Marks: "<<i<<" :";
        cin>>marks;
        student.name = name;
        student.marks=marks;
        details.push_back(student);
    }

    sort(details.begin() , details.end() , compare);
    for(struct Student d : details){
        cout<<"["<<d.name<<","<<d.marks<<"]";
    }
    cout<<endl;
}