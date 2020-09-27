#include <iostream>
#include <cstring>
using namespace std;

char *ReverseString(const char* src, int len)
{
  // �������� ��ȯ�� ���ڿ��� ������ ���� �޸𸮸� �Ҵ��Ѵ�.
  char *reverse = new char [len + 1];
  
  // ���ڿ��� �������� �����Ѵ�.
  for(int i = 0; i < len; ++i)
    reverse[i] = src[len - i - 1];
    
  // �������� �� ���ڿ��� ���� NULL ���ڸ� �־� ���ڿ��� �ϼ��Ѵ�.
  reverse[len] = NULL;
  
  // �������� �� ���ڿ��� ��ȯ�Ѵ�.
  return reverse;
}

int main()
{
  // ���� ���ڿ��� �غ��Ѵ�.
  char old[] = "I can do it.";
  char *rev = ReverseString(old, strlen(old));
  
  cout << old << "\n";  // ���� ���ڿ��� ����Ѵ�.
  cout << rev << "\n";  // �������� ��ȯ�� ���ڿ��� ����Ѵ�.
  
  // �Ҵ��� ���� �޸𸮸� �����Ѵ�.
  delete[] rev;
  rev = NULL;    // �����͸� �ʱ�ȭ�Ѵ�.
  
  system("PAUSE");
  return 0;  
}

