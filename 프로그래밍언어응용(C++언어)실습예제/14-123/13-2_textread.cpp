#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  // ���� ��� ��Ʈ���� �����ϱ� ���� ofstream Ŭ���� ��ü�� �����Ѵ�.
  // �׸��� ��� ���۷� ����� ������ Ȯ���Ѵ�.
  char str[80];
  ofstream fout;

  fout.open("test.txt");   // ���� ����, ios::out | ios::trunc ����Ʈ ���

  cout << "���ڿ��� �Է��ϼ��� : ";
  cin.getline(str, 80);    // Ű����κ��� ���ڿ��� �Է��Ѵ�.
  fout << str;             // �Է��� ���ڿ��� ���Ͽ� ����Ѵ�.
  
  fout.close();            // ���� �ݱ�
  
  return 0;
}


