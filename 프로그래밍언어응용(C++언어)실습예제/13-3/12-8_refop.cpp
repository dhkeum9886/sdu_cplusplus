#include <iostream>
#include <cstring>
using namespace std;

class String
{
  public:
    String(char *s){str = new char[80]; strcpy(str, s);};
    char &operator [](int num);
    // ��ȯ ������ Ÿ���� ����(&)�ؾ� ���� ������ �� �ִ�. 
    ~String(){delete[] str;};  //�Ҹ��� 
    void showData(){cout << "����: " << str << endl;}; 
  private:
    char *str;
};

char & String::operator [](int num) // []������ �����ε� ����
{
  return str[num];  // ������ ��� ���� str�� �迭�� ��ȯ
} 

int main()
{
  String str1("Happy Day");
  for(int i = 0; i < 5; i++)
  {
    cout << str1[i] << "    ";
    str1[i] = 97 + i;
    cout << str1[i] << endl;
  }
  system("PAUSE");
  return 0;
}
