#include <iostream>
#include <cstring>
using namespace std;

class String
{
  public:
    String(){str = new char[80];};
    String(char *s){str = new char[80]; strcpy(str, s);};
    String operator +(String obj);
    // ���ڿ��� �����ϱ� ���� + �����ڸ� �����ε�
    void showData(){cout << "������ ���ڿ�: " << str << endl;}; 
  private:
    char *str;
};

String String::operator +(String obj)
// ���ڿ� ����� + ������ �����ε忡 ���� ����
{
  String temp;
  strcpy(temp.str, this->str);
  strcat(temp.str, obj.str);  // obj ��ü�� �����Ѵ�. 
  return temp;
}

int main()
{
  String str1("Happy ");
  String str2("Day");
  String str3;

  str3 = str1 + str2;
  str3.showData();

  system("PAUSE");
  return 0;
}
