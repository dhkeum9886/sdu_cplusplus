#include <iostream>
#include <cstring>
using namespace std;

class String
{
  public:
    String(char *s){str = new char[80]; strcpy(str, s);};
    char operator [](int num);
    ~String(){delete[] str;};  //�Ҹ��� 
    void showData(){cout << "����: " << str << endl;}; 
  private:
     char *str;
};

char String::operator [](int num) // []������ �����ε� ����
{
  return str[num];  // ������ ��� ���� str�� �迭�� ��ȯ
} 

int main()
{
  String str1("Happy Day");
  for(int i = 0; i < 9; i++)
    cout << str1[i] << endl;
  // ��ü  str1�� ���� [] ������ �����ε带 ����� �迭ó�� ó���Ѵ�.
 
  system("PAUSE");
  return 0;
}
