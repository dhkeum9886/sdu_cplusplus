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
  struct Student student[] = {
    {"0821001", "�ڴ���", 89, 98, 77},
    {"0821002", "�ѻ��", 86, 94, 83},
    {"0821003", "�̼Ҹ�", 87, 92, 85}};

  cout << "  �� ��  | �� �� |  C  | C++ | Web |\n";
  
  for(int i = 0; i < 3; i++) {
    cout << setw(9) << student[i].hakbun;
    cout << setw(8) << student[i].name;
    cout << setw(6) << student[i].c;
    cout << setw(6) << student[i].cpp;
    cout << setw(6) << student[i].web << endl;
  }
  system("PAUSE");
  return 0;
}
