#include <iostream>
using namespace std;

int x = 5;   // �������� x

int main()
{
    int y = 10;  // �������� y 
    
    cout << "x=" << x << ", y=" << y << endl;
    {
         int x = 500, y = 200;   // �������� x, y 
         cout << "x=" << x << ", y=" << y << endl;
    }
    int x = 50;  // �������� x 
    cout << "x=" << x << ", y=" << y << endl;
    system("PAUSE");
    return 0;
}
         
