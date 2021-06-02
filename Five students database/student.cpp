#include<iostream>
#include"student.h"
using namespace std;

student::student()
{
    id = 0;
    name = "";
    cgpa = 0;
    marks;
}
student::student(int i, string n, float c,UnsortedType<int>marks)
{
    id = i;
    name = n;
    cgpa = c;
    marks;

}

void student::Print()
{
    cout << "ID: " << id  << " ; Name: " << name << " ; CGPA: " << cgpa << " ; Exams: ";
    for(int i=0; i<sizeof(marks); i++)
    {
        if(i == sizeof(marks)-1)
        {
            cout << marks[i];
        }
        else
        {
            cout << marks[i] << " , ";
        }
    }
    float sum = 0;
    for (int i = 0; i < totalNumberOfExams - 2; i++)
        {
            sum += (float)marks[i];
        }
    float average = sum / (totalNumberOfExams - 2);
    cout << " ; Average Mark: " << average << endl;
}

bool operator==(student s1, student s2)
{
    return s1.id == s2.id;
}

bool operator<=(student s1, student s2)
{
    return s1.id <= s2.id;
}
