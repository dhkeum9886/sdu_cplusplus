#include <iostream>
using namespace std;

void usingArray(char arr[]); // �迭�� ���ڷ� ���� �Լ��� ����

int main()
{
  char str[] =  "Hello, World!";
  usingArray(str);
  cout << "In main() : " << str << "\n";

  system("PAUSE");
  return 0;
}

void usingArray(char arr[])
{
  cout << arr << "\n";
  arr[10] = 'T';
  arr[11] = 'C';
}

