#include <iostream>
using namespace std;

int main()
{
  int year;
  cout << "�⵵�� ���ڸ� ���� �Է��ϼ��� : "; 
  cin >> year;
  if(year % 4 == 0 && year % 100 != 0 || (year % 400) == 0)
     cout << year << "�� �����Դϴ�.\n";
  else
     cout << year << "�� ������ �ƴմϴ�. \n";

  system("PAUSE");
  return 0;
}
