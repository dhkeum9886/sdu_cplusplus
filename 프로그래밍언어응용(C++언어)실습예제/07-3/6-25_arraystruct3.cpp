#include <iostream>
using namespace std;
#include <iomanip>
#include <cstring>
void chongedata(struct Student st);

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
  chongedata(lee); // �Լ� ȣ��� ����ü ������ ���� �����ϴ� ����
  chongedata(lee); // ���� ����� �ƴϴ�.
  chongedata(*pt);

  system("PAUSE");
  return 0;
}

void chongedata(struct Student st)
{
  cout << "  �� ��  | �� �� |  C  | C++ | Web |\n";
  cout << setw(9) << st.hakbun;
  cout << setw(8) << st.name;
  cout << setw(6) << st.c;
  cout << setw(6) << st.cpp;
  cout << setw(6) << st.web << endl;
  
  strcpy(st.name, "�̱���");
  st.cpp = 100;
}
