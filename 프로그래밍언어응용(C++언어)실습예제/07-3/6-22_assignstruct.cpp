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
  struct Student kim;
  kim = kang; // ����ü ���� kim�� kang�� ��� ������� ����
  
  cout << "  �� ��  | �� �� |  C  | C++ | Web |\n";
  cout << setw(9) << kim.hakbun;
  cout << setw(8) << kim.name;
  cout << setw(6) << kim.c;
  cout << setw(6) << kim.cpp;
  cout << setw(6) << kim.web << endl;

  system("PAUSE");
  return 0;
}
