#include <iostream>
#include <cstring>
using namespace std;

class Student
{
 public:
  char hakbun[8];    // �й�
  char name[20];     // �̸�
  int c;             // C ����
  int cpp;           // C++ ����
  int web;           // Web ����
  void showData();   // ��� �Լ� ����
};

// ��� �Լ� showData() ����
void Student::showData()
{
  cout << "�й� : " << hakbun << endl;
  cout << "�̸� : " << name << endl;
  cout << "C : " << c << endl;
  cout << "C++ : " << cpp << endl;
  cout << "Web : " << web << endl;
}

int main()
{
  Student park;
  strcpy(park.hakbun, "0821001");
  strcpy(park.name, "�ڴ���");
  park.c = 88;
  park.cpp = 99;
  park.web = 95;
  park.showData();
  
  system("PAUSE");
  return 0;
}     


 
