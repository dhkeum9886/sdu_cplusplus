#include <iostream>
#include <cstring>
using namespace std;

class Student
{
 private:
  char hakbun[8];  // �й� 
  char name[20];   // �̸� 
  int c;           // C ���� 
  int cpp;         // C++ ���� 
  int web;         // Web ���� 
 public:
  Student();  // ����Ʈ ������, ������ �̸��� Ŭ���� �̸��� ����.
  void showData();  // ����Լ�
};

Student::Student()
{
  strcpy(hakbun, "0821001");
  strcpy(name, "�ڴ���");
  c = 88;
  cpp = 99;
  web = 95;
}

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
  Student park;    // ��ü ����, �ڵ����� ������ Student()�� 
                   // ȣ���Ͽ� �ʱ�ȭ �Ѵ�. 
  park.showData(); // showData()�Լ� ȣ�� 

  system("PAUSE");
  return 0; 
}
