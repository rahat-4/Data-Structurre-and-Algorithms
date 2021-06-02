#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

class timeStamp
{
    friend bool operator<=(timeStamp,timeStamp);
    friend bool operator==(timeStamp,timeStamp);
private:
    int second;
    int minute;
    int hour;
public:
    timeStamp();
    timeStamp(int,int,int);
    void setSecond(int);
    void setMinute(int);
    void setHour(int);
    int getSecond();
    int getMinute();
    int getHour();
    void Print();
};
#endif // TIMESTAMP_H_INCLUDED
