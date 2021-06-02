#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED
#include<iostream>
using namespace std;
class studentInfo
{
    friend bool operator==(studentInfo, studentInfo);
private:
    int id;
    string name;
    float cgpa;
public:
    studentInfo();
    studentInfo(int,string,float);
    void setId(int);
    void setName(string);
    void setCgpa(float);
    int getId();
    string getName();
    float getCgpa();
    void Print();
};
#endif // STUDENTINFO_H_INCLUDED
