#include <iostream>
using namespace std;

int main()
{
   char str[] = "Rejection always";

   cout.write(str, strlen(str));
   //ȭ�鿡 str�迭�� ����� ���ڿ��� ����Ѵ�.
   cout << endl;

   cout.write("Rejection", 5);
   cout << endl;
 
   system("PAUSE");
   return 0;
}
