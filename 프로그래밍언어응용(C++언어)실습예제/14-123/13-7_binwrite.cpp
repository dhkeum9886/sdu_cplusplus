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
  ofstream fout;
  const int SIZE = 80;
  int i;
  const char *file = "test2.dat";
  fout.open(file, ios::out | ios::binary);
  // ���� ���Ϸ� ����, �б� ����
  
  for(i = 0; i < 2; i++)
  {
    cout << "�̸��� �Է��ϼ��� : ";
    cin.getline(std.name, 80);  // ������ ������ ���ڿ� �Է�
    cout << "���� ������ �Է��ϼ��� : ";
    cin >> std.kor;
    cout << "���� ������ �Է��ϼ��� : ";
    cin >> std.eng;
    cout << "���� ������ �Է��ϼ��� : ";
    cin >> std.mat;
    cin.ignore(SIZE, '\n');
    
    fout.write((char *)&std, sizeof(std));
    // ���ڵ� ������ ������ ����Ѵ�.
  }
  fout.close();
  
  system("PAUSE");
  return 0;
}


