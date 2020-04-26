#include "MyString.h"
#include <iostream>
using namespace std;

int main()
{
    
    MyString A;
    MyString B("ffffulas");
    MyString C (B);
    MyString D("oooomer");

    cout << "Default con." << A << endl;
    cout << "Conversion Constructor" << B << endl;
    cout << "Copy Constructor" << C << endl;
    cout << "B + D " << B+D << endl;
    cout << "B==D " << (B == D) << endl;
    cout << "A.empty " << A.empty() << endl;
    cout << "B.empty " << B.empty() << endl;
    cout << "B.at(4)" << B.at(4) << endl;
    cout << "B > A " << (B>D) << endl;
    cout << "B < A " << (B<D) << endl<<endl;

    D = B;
    cout << D;
    
}