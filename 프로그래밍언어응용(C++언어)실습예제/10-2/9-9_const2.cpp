#include <iostream>
using namespace std;

class Dog
{
 public:      // ���� ���� 
  Dog(int age, int weight);  // �Ű������� �ִ� ������ 
  void DataShow();
 private:     // ����� ���� 
  unsigned int Age;
  unsigned int Weight;
};

Dog::Dog(int age, int weight)
{
  Age = age;        // ������� Age �ʱ�ȭ 
  Weight = weight;  // ������� Weight �ʱ�ȭ 
}

void Dog::DataShow()
{
  cout << "happy�� ���̴� " << Age << "�Դϴ�.\n";
  cout << "happy�� �����Դ� " << Weight << "�Դϴ�.\n";
}

int main()
{
  Dog happy = Dog(3,4);
  // ������ Dog() ȣ��, ���μ� 3�� Age, ���μ� 4�� Weight�� ����
  happy.DataShow();

  system("PAUSE");
  return 0; 
}
