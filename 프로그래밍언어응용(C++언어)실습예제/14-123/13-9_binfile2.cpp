#include <iostream>
using namespace std;
#include <fstream>
#include <iomanip>
#include <cstdlib>

struct student
{
  char name[20];
  int kor, eng, mat;
};

int main()
{
  struct student std;
  fstream fio;  // �б�/���� ����� ��� fstream Ŭ���� ��ü�� �����Ѵ�.
  const char *file = "test2.dat";
  fio.open(file, ios::in | ios::out | ios::binary);
  // ���� ����, �б�/���� ��� ���
  
  int ct = 0;  // ���ڵ� ���� �ʱ�ȭ
  
  if(fio.is_open())
  {
    fio.seekg(0);
    cout << "������ ���� ������ ������ �����ϴ�:\n";
    cout << setw(15) << "���ڵ� ��ȣ " << setw(20) << "�̸� : "
         << setw(12) << "���� : " << setw(12) << "���� : "
         << setw(12) << "���� : " << "\n";
    for(int i = 0; i < 71; i++) cout << "-";
    cout << endl;
    while(fio.read((char *) &std, sizeof std))
    {
      cout << setw(10) << ct++ << setw(24) << std.name
           << setw(11) << std.kor << setw(11) << std.eng
           << setw(11) << std.mat << "\n";
    }
    if(fio.eof()) fio.clear(); // ������ ���̸� eof �÷��� ����
    else
    {
      cerr << "������ �дٰ� ���� �߻�.\n";
      exit(1);
    }
  }
  else
  {
    cerr << "������ �� �� �����ϴ�. ����.\n";
    exit(2);
  }
  cout << "������ ���ڵ� ��ȣ�� �Է��Ͻʽÿ�: ";
  long rec;
  cin >> rec;
  while(cin.get() != '\n') continue; // ���๮�ڸ� �����Ѵ�.
  if(rec < 0 || rec >= ct) // ���ڵ��� ������ ����� ���
  {
    cerr << "�߸��� ���ڵ� ��ȣ�Դϴ�. ����.\n";
    exit(3);
  }
  streampos stdace = rec * sizeof std;
  fio.seekg(stdace);
  if(fio.fail())
  {
    cerr << "���ڵ带 ã�ٰ� ���� �߻�.\n";
    exit(4);
  }
  fio.read((char *) &std, sizeof std);
  cout << "���� ���ڵ��� ����:\n";
  cout << rec << ": " << setw(25) << std.name << ": "
       << setw(6) << std.kor << setw(6) << std.eng
       << setw(6) << std.mat << "\n";
  if(fio.eof()) fio.clear();
  
  cout << "�̸��� �Է��Ͻʽÿ�: ";
  cin.get(std.name, 20);
  while(cin.get() != '\n') continue;
  
  cout << "���� ������ �Է��ϼ��� : ";
  cin >> std.kor;
  cout << "���� ������ �Է��ϼ��� : ";
  cin >> std.eng;
  cout << "���� ������ �Է��ϼ��� : ";
  cin >> std.mat;
  fio.seekp(stdace);
  fio.write((char *) &std, sizeof std) << flush;
  if(fio.fail())
  {
    cerr << "���ٰ� ���� �߻�.\n";
    exit(5);
  }
  // ������ ������ ȭ�鿡 ǥ���Ѵ�.
  ct = 0;
  fio.seekg(0);
  cout << " ������ ������ ������ ������ �����ϴ�:\n";
  while(fio.read((char *) &std, sizeof std))
  {
    cout << "���ڵ� ��ȣ " << ct++ << ": " << setw(25)
         << std.name << ": " << setw(6) << std.kor
         << setw(6) << std.eng << setw(6) << std.mat << "\n";
  }
  fio.close();
  
  system("PAUSE");
  return 0;
}


