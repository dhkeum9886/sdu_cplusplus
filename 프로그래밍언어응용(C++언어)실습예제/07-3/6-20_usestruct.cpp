#include <iostream>
#include <cstring>
using namespace std;

struct Student
{
  char hakbun[8]; // �й�
  // string hakbun;
  char name[20];  // �̸�
  int c;          // C ���� ����
  int cpp;        // C++ ���� ����
  int web;        // Web ���� ����
};

int main()
{
  struct Student park;
  strcpy(park.hakbun, "0821001");
  // park.hakbun = "0821001";
  strcpy(park.name, "�ڴ���");
  park.c = 88;
  park.cpp = 99;
  park.web = 95;
  
  cout << "�й� : " << park.hakbun << endl;
  cout << "�̸� : " << park.name << endl;
  cout << "c : "    << park.c << endl;
  cout << "c++ : "  << park.cpp << endl;
  cout << "web : "  << park.web << endl;

  system("PAUSE");
  return 0;
}
