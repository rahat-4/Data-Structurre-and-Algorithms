#include<iostream>
#include"studentinfo.h"

using namespace std;

studentInfo::studentInfo()
{
    id = 0;
    name = "";
    cgpa = 0;
}
studentInfo::studentInfo(int i, string n, float c)
{
    id = i;
    name = n;
    cgpa = c;
}
void studentInfo::setId(int i)
{
    id = i;
}
void studentInfo::setName(string n)
{
    name = n;
}
void studentInfo::setCgpa(float c)
{
    cgpa = c;
}
int studentInfo::getId()
{
    return id;
}
string studentInfo::getName()
{
    return name;
}
float studentInfo::getCgpa()
{
    return cgpa;
}
void studentInfo::Print()
{
    cout << id << " " << name << " " << cgpa << endl;
}

bool operator==(studentInfo s1, studentInfo s2)
{
    return s1.id == s2.id;
}
