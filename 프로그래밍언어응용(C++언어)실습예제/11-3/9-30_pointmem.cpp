#include <iostream>
using namespace std;

class Dog
{
  public:
    Dog(const Dog &cct); // ���� ������ ����
    Dog(char *name, unsigned int age, unsigned int weight);
    ~Dog();
    void showData();
  private:
    char *Name;   // ���ڿ� ���� - ������ ���
    unsigned int Age;
    unsigned int Weight;
};

Dog::Dog(const Dog &cct) // ���� ������ ����
{
  Name = new char[20];
  strcpy(Name, cct.Name);
  
  Age = cct.Age;
  Weight = cct.Weight;
}

Dog::Dog(char *name, unsigned int age, unsigned int weight)
{
  Name = new char[20]; // ������ ������� Name�� ���� ���� �޸� ���� �Ҵ�
  strcpy(Name, name);
  Age = age;
  Weight = weight;
}

Dog::~Dog()
{
  delete[] Name;
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
  Dog *obj2 = new Dog(*obj1);
  // ���� �����ڸ� ȣ���Ͽ� obj2 ��ü ����

  obj1->showData();
  delete obj1; // ���� �޸� ����
  // obj2�� Name�� ���� �޸𸮵� �����Ѵ�.
  // �׷��� obj2�� Name�� ���� �����ڸ� ����� Name�� ��ġ�� �����Ѵ�.
  
  obj2->showData();
  // obj2�� Name�� ���� �޸� ��ġ�� ����, ��Ȯ�� ���� ��µȴ�.
  delete obj2;  // ��ü ������ ����
  system("PAUSE");
  return 0;
}
