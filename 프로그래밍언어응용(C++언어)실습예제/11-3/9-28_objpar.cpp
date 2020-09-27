#include <iostream>
using namespace std;

class Dog
{
  public:
    Dog(char *name, int age, int weight);
    void showData();
  private:
    char Name[20];
    unsigned int Age;
    unsigned int Weight;
};

Dog::Dog(char *name, int age, int weight)
{
  strcpy(Name, name);
  Age = age;
  Weight = weight;
}

void Dog::showData()
{
  cout << "�̸�: " << Name << ", ";
  cout << "����: " << Age << ", ";
  cout << "������: " << Weight << endl;
}

int main()
{
  Dog obj1("����", 3, 4);  // ��ü1�� ����
  Dog obj2(obj1);    // ��ü1�� �Ű������� �����Ͽ� ��ü2�� �ʱ�ȭ
  
  obj1.showData();
  obj2.showData();
  system("PAUSE");
  return 0;
}
