#include <iostream>
using namespace std;
#include <iomanip>

struct Student
{
  char hakbun[8]; // �й�
  char name[20];  // �̸�
  int c;          // C ���� ����
  int cpp;        // C++ ���� ����
  int web;        // Web ���� ����
};

int main()
{
  struct Student kang = {"0821001", "������", 99, 88, 97};
  struct Student kim = {"0821042", "�����", 94, 83, 92};
  
  cout << "  �� ��  | �� �� |  C  | C++ | Web |\n";
  cout << setw(9) << kang.hakbun;
  cout << setw(8) << kang.name;
  cout << setw(6) << kang.c;
  cout << setw(6) << kang.cpp;
  cout << setw(6) << kang.web << endl;

  system("PAUSE");
  return 0;
}
