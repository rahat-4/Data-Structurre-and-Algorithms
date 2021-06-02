#include<iostream>
#include"timestamp.h"
using namespace std;

timeStamp::timeStamp()
{
    second = 0;
    minute = 0;
    hour = 0;
}

timeStamp::timeStamp(int s, int m, int h)
{
    second = s;
    minute = m;
    hour = h;
}

void timeStamp::setSecond(int s)
{
    second = s;
}

void timeStamp::setMinute(int m)
{
    minute = m;
}

void timeStamp::setHour(int h)
{
    hour = h;
}

int timeStamp::getSecond()
{
    return second;
}

int timeStamp::getMinute()
{
    return minute;
}

int timeStamp::getHour()
{
    return hour;
}

bool operator<=(timeStamp t1,timeStamp t2)
{
    return t1.hour <= t2.hour;
}

bool operator==(timeStamp t1, timeStamp t2)
{
    return t1.hour == t2.hour;
}

void timeStamp::Print()
{
    cout << second << " " << minute << " " << hour << endl;
}
