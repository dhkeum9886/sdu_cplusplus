#include <iostream>
using namespace std;

int main(void)
{
    int a;
    float b;
    double c;
    long double d;
    
    a = 1;
    b = 1.0;
    c = 1.0;
    d = 1.0;
    
    cout << "int a�� ũ�� : " << sizeof(a) << endl;
    cout << "float b�� ũ�� : " << sizeof(b) << endl;
    cout << "double c�� ũ�� : " << sizeof(c) << endl;
    cout << "long double d�� ũ�� : " << sizeof(d) << endl;
    
    system("pause");
    return 0;
}
    
