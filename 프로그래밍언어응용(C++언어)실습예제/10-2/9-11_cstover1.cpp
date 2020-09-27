#include <iostream>
using namespace std;

class Dog
{
 public:      // ���� ���� 
  Dog();      // ����Ʈ ������
  Dog(int age, int weight);  // �Ű������� �ִ� ������ 
  // ������ Dog()�� �� ���̻� �����ϹǷ� ������ �����ε� 
  void DataShow();
 private:     // ����� ���� 
  unsigned int Age;
  unsigned int Weight;
};

Dog::Dog()   // ����Ʈ �������� ���� 
{
  Age = 3;
  Weight = 4;
}

Dog::Dog(int age, int weight) // �Ű������� �ִ� �������� ���� 
{
  Age = age;        // ������� Age �ʱ�ȭ 
  Weight = weight;  // ������� Weight �ʱ�ȭ 
}

void Dog::DataShow()
{
  cout << "���̴� " << Age << "�Դϴ�.\n";
  cout << "�����Դ� " << Weight << "�Դϴ�.\n";
}

int main()
{
  Dog happy;       // happy ��ü ����, ����Ʈ ������ ����
  Dog marry(5, 7); // marry ��ü ����, �Ű������� ������ ������ ���� 
  happy.DataShow();
  marry.DataShow();

  system("PAUSE");
  return 0; 
}
