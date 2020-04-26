#include "MyString.h"
#include <iostream>
#include <cstring>

using namespace std;

MyString::MyString()
{
    length = 1;
    string = new char[length];
    string[length-1]='\0';
}

MyString::MyString(const char* str)
{
    length = strlen(str)+1;
    string = new char[length];

    for(int i=0; i<(length-1);++i)
    {
        string[i] = str[i];
    }
    string[length-1] = '\0';
}

MyString::MyString(const MyString& A)
{
    length = A.length;
    string = new char[length];
    for(int i=0; i<(length-1);++i)
    {
        string[i]=A.string[i];
    }
    string[length-1] = '\0';
}

MyString::~MyString()
{
    delete[] string;
}

int MyString::size()
{
    int i=0;
    while(string[i] != '\0')
    {
        ++i;
    }
    return i;
}
char MyString::at(int index)
{
    return string[index-1];
}

bool MyString::empty()
{
    if(string[0]=='\0' && length ==1)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

ostream& operator <<(ostream& out, const MyString& A)
{
    out << A.string;
    return out;
}


istream& operator >>(istream& in, MyString& A)
{
    char* input = new char[100];
    in.getline(input,100);
    
    int i=0;
    while(input[i]!='\0')
    {
        ++i;
    }
    A.length = i+1;
    delete[]A.string;
    A.string = new char[(i+1)];
    for(int j=0; j < i ; ++j)
    {
        A.string[j] = input[j];
    }
    A.string[i]='\0';
    delete[]input;
    return in;
}

bool operator == (const MyString& A1, const MyString& A2)
{
    if(A1.length == A2.length)
    {
        int count1 = A1.length;
       
        int i=0;
        while(i!=count1)
        {
            if(A1.string[i] != A2.string[i])
            {
                return false;
            }
            ++i;
        }
        return true;
    
    }
    else
    {
        return false;
    }
    
}
MyString& MyString::operator = (const MyString&A)
{
    length = A.length;
    delete[]string;
    string = new char[length];
    for (int i=0; i<length-1;++i)
    {
        string[i] = A.string[i];
    }
    string[length-1] = '\0';
    return *this;
}
MyString operator + (const MyString& A,const MyString& B)
{
    int size = A.length + B.length +1;
    int i;
    char *temp = new char[size];
    for(i = 0; i < A.length-1; ++i)
    {
        temp[i] = A.string[i];
    }
    for(int j=0;j<B.length-1;++j,++i)
    {
        temp[i] = B.string[j];
    }
    temp[size-1]='\0';
    MyString C;
    C.length = size;
    delete[] C.string;
    C.string = new char[size];
    for(int k = 0; k < size; ++k)
    {
        C.string[k] = temp[k];
    }
    delete[]temp;
    return C;
}
bool operator<(const MyString &A, const MyString &B)
{
    if(B.length > A.length)
    {
        return true;
    }
    return false;
}

bool operator >(const MyString &A, const MyString &B)
{
    if(A.length > B.length)
    {
        return true;
    }
    return false;
}
