#include <iostream>
using namespace std;
#include <iomanip>
#include <cstring> 
void chongedata(struct Student *pst);

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
  struct Student lee = {"182183", "�̼���", 99, 88, 77};
  struct Student *pt;
  
  pt = &lee;
  chongedata(&lee); // ����ü�� �ּҰ����� �Լ��� ����
  chongedata(&lee); 
  chongedata(pt);   // pt�� �ּҰ��̹Ƿ� *pt�� ����ϸ� ������ �߻��Ѵ�.

  system("PAUSE");
  return 0;
}

void chongedata(struct Student *pst)
{
  cout << "  �� ��  | �� �� |  C  | C++ | Web |\n";
  cout << setw(9) << pst->hakbun;
  cout << setw(8) << pst->name;
  cout << setw(6) << pst->c;
  cout << setw(6) << pst->cpp;
  cout << setw(6) << pst->web << endl;
  
  strcpy(pst->name, "�̱���");
  pst->cpp = 100;
}
