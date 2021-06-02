#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

const int max_size = 5;
class FullStack
{

};
class EmptyStack
{

};

template<class T>
class StackType
{
public:
    StackType();
    bool isEmpty();
    bool isFull();
    void Push(T);
    void Pop();
    T Top();
private:
    int top;
    T info[max_size];
};
#endif // STACKTYPE_H_INCLUDED
