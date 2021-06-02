#include <iostream>
#include"sortedtype.cpp"
#include"student.h"
#include"unsortedtype.cpp"
using namespace std;

void emptyCheck(SortedType<int>sf)
{
    if(sf.isEmpty())
    {
        cout << "List is Empty." << endl;
    }
    else
    {
        cout << "List is not Empty." << endl;
    }
}

void fullCheck(SortedType<int>sf)
{
    if(sf.isFull())
    {
        cout << "List is Full." << endl;
    }
    else
    {
        cout << "List is not Full." << endl;
    }
}

void Print(SortedType<int>sf)
{
    int value;
    for(int i=0; i<sf.lengthIs(); i++)
    {
        sf.getNextItem(value);
        cout << value << "\t";
    }
    cout << endl;
    sf.resetList();
}

int main()
{
    SortedType<student>s;

    int numOfStudents;
    cout << "Number of students in CSE225?" << endl;
    cin >> numOfStudents;

    int numOfExams;
    cout << "Number of Exams?" << endl;
    cin >> numOfExams;

    //insert students records
    for(int i=0; i<numOfStudents; i++)
    {
        cout <<"---------------------------" << endl;
        int studentId;
        cout << "Student ID: ";
        cin >> studentId;

        char studentName[20];
        cout << "Student Name: ";
        cin >> studentName;

        float studentCGPA;
        cout << "Student CGPA: ";
        cin >> studentCGPA;

        int numOfExamsAttended;
        cout << "Number of Exams attended: ";
        cin >> numOfExamsAttended;

        cout <<"----------" << endl;
        cout << endl;
        UnsortedType<int>studentMarks;
        for(int j=0; j<numOfExamsAttended; j++)
        {
            int examMarks;
            cout << "Exam"<<j+1<<": ";
            cin >> examMarks;
            studentMarks.insertItem(examMarks);
        }
        //insert student information to the list
        student s1(studentId, studentName, studentCGPA,studentMarks);
        s.insertItem(s1);
    }

    //print student list
    student si;
    for(int i=0; i<s.lengthIs(); i++)
    {
        s.getNextItem(si);
        si.Print();
    }
    s.resetList();
    return 0;
}
