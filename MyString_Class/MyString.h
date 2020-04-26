#include <iostream>
using namespace std;

class MyString
{


public:

    MyString();
    MyString(const char* str);
    MyString(const MyString& A);
    ~MyString();

    int size();
    char at(int index);
    bool empty();

friend ostream& operator << (ostream& out, const MyString& A);
friend istream& operator >> (istream& in, MyString &A);
MyString& operator = (const MyString& A);
friend bool operator == (const MyString& A1, const MyString& A2);
//friend MyString operator += (const MyString& A1, const MyString& A2);
friend MyString operator + (const MyString& A, const MyString& B);
friend bool operator > (const MyString& A, const MyString& B);
friend bool operator < (const MyString& A, const MyString& B);
private:
    int length;
    char *string;
};
