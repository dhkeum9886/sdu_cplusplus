#include <iostream>
#include <fstream>
using namespace std;

struct student
{
  char name[20];
  int kor, eng, mat;
};

int main()
{
  struct student std;
  ifstream fin;       // �Է� ���� ��ü
  const char *file = "test2.dat";  // ���� ��
  fin.open(file, ios::in | ios::binary); // ���� ����
  if(!fin) {  // ������ ���ų� ������ �߻��ϸ�
    cout << "Can not open test2.dat";
    return 0;
  }
  // ���������� ������ ����
  while(fin.read((char *)&std, sizeof(std)))
  {
    cout << "�̸� : " << std.name << "\n";
    cout << "���� : " << std.kor << "\n";
    cout << "���� : " << std.eng << "\n";
    cout << "���� : " << std.mat << "\n";
  }
  fin.close();
  
  system("PAUSE");
  return 0;
}


