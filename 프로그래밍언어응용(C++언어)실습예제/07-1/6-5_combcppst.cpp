#include <iostream>
#include <string>
using namespace std;

int main()
{
   string cppStyle;  // string ��ü ���� ���� 
   char cStyle[256]; // ���ڹ迭 ���� ���� 
   
   cout << "���ڿ��� �Է��ϼ���!\n";
   cin.getline(cStyle, 256); // �Է¹��� ������ ���ڹ迭 ������ ����
   
   cout << "���ڿ��� �Է��ϼ���!\n";
   getline(cin, cppStyle); // �Է¹��� ������ string ��ü ������ ���� 

   cout << cStyle << endl;
   cout << cppStyle << endl;
 
   system("PAUSE");
   return 0;
}
