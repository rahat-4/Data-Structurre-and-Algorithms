#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
class ListFull
{

};
class ListEmpty
{

};

const int max_items = 5;
template<class T>
class UnsortedType
{
private:
    T info[max_items];
    int length;
    int currentPos;
public:
    UnsortedType();
    bool isEmpty();
    bool isFull();
    void makeEmpty();
    void insertItem(T);
    void deleteItem(T);
    void retriveItem(T&, bool&);
    int lengthIs();
    void resetList();
    void getNextItem(T&);
};
#endif // UNSORTEDTYPE_H_INCLUDED
