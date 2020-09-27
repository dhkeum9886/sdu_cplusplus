#include <iostream>
using namespace std;

enum COLOR {BLACK, BLUE, GREEN, BROWN, YELLOW};

// �⺻ Ŭ�������� ����� �Լ��� �Ļ� Ŭ�������� �������Ͽ� ����Ϸ���
// �Լ��� �տ� virtual�� �ٿ��� �Ѵ�.
class Mammal    // �⺻ Ŭ����
{
  public:
    void speak(int count) {cout << count << "�� �������!\n";};
    virtual void speak() {cout << "������ ���!\n";};
  protected: 
    int Age;
    int Weight;
};

class Dog:public Mammal
{
  public:
    void wagTail() {cout << "������ ����!\n";};
    void speak() {cout << "�۸� ���´�!\n";};
  private:
    COLOR Color;
};

int main()
{
  Mammal *pt;
  Dog happy;
  pt = &happy;

  pt->speak();  // ���� �Լ��� ��������Ƿ� Dog�� speak()�� ȣ���Ѵ�.
  pt->speak(5); // �⺻ Ŭ������ ��ü�� ���� ��� �Լ��� ȣ��

  system("PAUSE");
  return 0;
}
