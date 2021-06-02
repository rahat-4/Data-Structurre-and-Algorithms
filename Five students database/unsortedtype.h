#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
template<class T>
class UnsortedType
{
private:
    T info[5];
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
