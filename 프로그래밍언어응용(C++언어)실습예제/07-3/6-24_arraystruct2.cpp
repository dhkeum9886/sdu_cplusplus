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
  struct Student lee = {"182183", "�̼���", 87, 92, 85};
  struct Student *pt;
  
  pt = &lee;

  cout << "  �� ��  | �� �� |  C  | C++ | Web |\n";
  
  cout << setw(9) << pt->hakbun;
  cout << setw(8) << pt->name;
  cout << setw(6) << pt->c;
  cout << setw(6) << pt->cpp;
  cout << setw(6) << pt->web << endl;
   
  system("PAUSE");
  return 0;
}
