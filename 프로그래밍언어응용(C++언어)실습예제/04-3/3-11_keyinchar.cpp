#include <iostream>
using namespace std;

int main()
{
   char ch;
   int i;
   cout << "���� �ϳ��� �Է��ϰ� Enter�� ��������!\n";
   cin >> ch;
   i = ch;
   cout << "�Է��� ����: " << ch << endl;
   cout << "�Է��� ������ �ƽ�Ű �ڵ�: " << i << endl;
   ch = ch + 2;
   cout << ch << endl;
   
   return 0;
}