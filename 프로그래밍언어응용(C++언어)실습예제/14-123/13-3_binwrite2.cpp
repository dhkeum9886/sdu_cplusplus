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
  ofstream fout;    // ��� ���� ��ü�� �����Ѵ�.
  const int SIZE = 80;
  int i;
  
  fout.open("test3.txt", ios::out); // ������� ���� �������� ����
  
  for(i = 0; i < 2; i++) {
    cout << "�̸��� �Է��ϼ��� : ";
    cin.getline(std.name, 20);
    cout << "���� ������ �Է��ϼ��� : ";
    cin >> std.kor;
    cout << "���� ������ �Է��ϼ��� : ";
    cin >> std.eng;
    cout << "���� ������ �Է��ϼ��� : ";
    cin >> std.mat;
    cin.ignore(SIZE, '\n');
    
    fout << std.name << std.kor << std.eng << std.mat;
  }
  fout.close();
  return 0;
}


