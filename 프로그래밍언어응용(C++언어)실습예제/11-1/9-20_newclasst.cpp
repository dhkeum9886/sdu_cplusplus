#include <iostream>
using namespace std;

class Dog
{
  public:
    Dog(char name[], int age, int weight);  // ������ ����
    ~Dog();                                 // �Ҹ��� ����
    void showData();
  private:
    char Name[20];
    unsigned int Age;
    unsigned int Weight;
};

Dog::Dog(char name[], int age, int weight)
{
  cout << "������ ȣ��" << endl;
  strcpy(Name, name);
  Age = age;
  Weight = weight;
}

Dog::~Dog()
{
  cout <<"�Ҹ��� ȣ��" << endl;
  
  system("PAUSE");
}

void Dog::showData()
{
  cout << "���̴� " << Age << "�Դϴ�.\n";
  cout << "�����Դ� " << Weight << "�Դϴ�.\n";
}

int main()
{
  Dog *pt;        // ��ü ������ ����
  pt = new Dog("happy", 5, 6);

  pt->showData(); 

  delete pt;      // �������� �Ҵ���� �޸� ���� ����

  return 0; 
}
