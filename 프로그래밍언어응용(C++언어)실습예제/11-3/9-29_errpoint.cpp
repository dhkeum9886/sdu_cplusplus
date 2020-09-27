#include <iostream>
using namespace std;

class Dog
{
  public:
    Dog(char *name, int age, int weight);
    ~Dog();
    void showData();
  private:
    char *Name;   // ���ڿ� ���� - ������ ���
    unsigned int Age;
    unsigned int Weight;
};

Dog::~Dog()
{
  delete[] Name;
}

Dog::Dog(char *name, int age, int weight)
{
  Name = new char[20]; // ������ ������� Name�� ���� ���� �޸� ���� �Ҵ�
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
  Dog *obj1 = new Dog("����", 3, 4);
  // obj1 ��ü ����, ���� �޸� �Ҵ�
  Dog *obj2 = new Dog(*obj1);  // obj2 ��ü ����
  
  obj1->showData();
  delete obj1;  // ��ü ������ obj1�� ���� �޸� ����,
  // ��ü ������ obj2�� Name�� ���� �޸𸮵� �����ȴ�.
  // ���� obj2�� Name�� �ƹ� �͵� ���� ��ġ�� ����Ų��.
  
  obj2->showData(); // ���� ������ ����� �ʷ�, Name�� �ùٷ� ��µ��� ����
  delete obj2;  // ��ü ������ obj2 ����
  system("PAUSE");
  return 0;
}
