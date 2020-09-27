#include <iostream>
using namespace std;

class Dog
{
  public:
    Dog(char name[], int age, int weight);
    void showData();
  private:
    char Name[20];
    unsigned int Age;
    unsigned int Weight;
};

// void showObj(Dog *pt); // ��ü �����͸� ����� ���� ��� �Լ� ����

Dog::Dog(char name[], int age, int weight)
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

void showObj(Dog *pt)
{
  for(int i = 0; i < 3; i++)
     (pt + i)->showData();
}

int main()
{
  Dog ar[3] = {Dog("����", 3, 4),
               Dog("�޸�", 5, 6),
               Dog("������", 7, 8)};
  // �迭�� ����� 3 ���� ��ü�� ����
 
  showObj(ar); // ��ü �迭�� �����ּҸ� �Լ��� �Ű�����(���μ�)�� ����
  system("PAUSE");
  return 0;
}
