#include <iostream>
using namespace std;

enum COLOR {BLACK, BLUE, GREEN, BROWN, YELLOW};

class Mammal  // �⺻ Ŭ����
{
  public:
    void speak(int count) {cout << count << "�� �������!\n";};
    void speak() {cout << "������ ���!\n";};   // �����ε�
  protected: 
    int Age;
    int Weight;
};

class Dog:public Mammal  // �Ļ� Ŭ����
{
  public:
    void wagTail() {cout << "������ ����!\n";};
    void speak() {cout << "�۸� ���´�!\n";};   // �������̵�
  private:
    COLOR Color;
};

int main()
{
  Mammal dongmul;
  Dog happy;

  dongmul.speak();
  dongmul.speak(3);
  happy.speak(); // �Ļ� Ŭ���� Dog�� speak()�Լ��� ȣ��
  happy.Mammal::speak(5); // �⺻ Ŭ������ �Լ��� ȣ��

  system("PAUSE");
  return 0;
}
