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
  for(int i = 0; i < 5; i++)
  {
    cout << str1[i] << endl;
    str1[i] = i + 2;  // ������ �߻��Ѵ�! 
  }
 
  system("PAUSE");
  return 0;
}
