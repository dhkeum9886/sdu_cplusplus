#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  char str[80];
  ofstream fout("test.txt", ios::out | ios::app);
  // ���� ����, �߰� ���
  cout << "�߰��� ���ڿ��� �Է��ϼ��� : ";
  cin.getline(str, 80);  // ���� ���ڸ� ������ ���ڿ��� �Է��Ѵ�.
  fout << str;           // ���Ͽ� ����Ѵ�.
  fout.close();          // ������ �ݴ´�.
  
  return 0;
}


