#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class Student
{
 public:
  Student(string num, char *n, int c1, int cpp1, int w);
    // �Ű������� �ִ� ������ 
  void showData();  // ����Լ�
 private:
  string hakbun;   // �й� 
  char name[20];   // �̸� 
  int c;           // C ���� 
  int cpp;         // C++ ���� 
  int web;         // Web ���� 
};

Student::Student(string num, char *n, int c1, int cpp1, int w)
{
  hakbun = num;    // string ������ ��ü�� �ٷ� ������ ����������,
  name = n; // char *n ���� �����ʹ� ���� �迭�� �ٷ� ������ �� ����.
  c = c1;
  cpp = cpp1;
  web = w;
}

void Student::showData()
{
  cout << "  ��  �� | ��  �� |  C  | C++ | Web |\n";
  cout << setw(9) << hakbun;
  cout << setw(8) << name;
  cout << setw(6) << c;
  cout << setw(6) << cpp;
  cout << setw(6) << web << endl;
}

int main()
{
  Student kang = Student("0821001", "������", 99, 88, 97);
  // ��ü ����, �ڵ����� ������ Student(...);�� ȣ���Ͽ� �ʱ�ȭ 
  kang.showData();  // ����Լ� showData()ȣ�� 

  system("PAUSE");
  return 0; 
}

