#include <iostream>
using namespace std;

class Dog
{
  public:
    Dog(int age, int weight);         // �Ű������� �����»�����
    friend void DataShow(Dog &obj);   // friend �Լ� ����
  private:
    unsigned int Age;
    unsigned int Weight;
};

Dog::Dog(int age, int weight)
{
  Age = age;
  Weight = weight;
}

// friend �Լ��� ��� �Լ��� �ƴϹǷ� � Ŭ�������� ������ �ʴ´�.
// ���� ���� ������(::)�� �ʿ� ����.
void DataShow(Dog &obj)   // firend �Լ� ����
{
  cout << "��  ��: " << obj.Age << endl;  // private ��� ����
  cout << "������: " << obj.Weight << endl;
}

int main()
{
  Dog happy = Dog(3, 4);
  DataShow(happy);

  system("PAUSE");
  return 0;
}
