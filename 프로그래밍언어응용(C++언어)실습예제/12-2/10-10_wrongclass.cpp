#include <iostream>
using namespace std;

enum COLOR {BLACK, BLUE, GREEN, BROWN, YELLOW};

class Mammal             // �⺻ Ŭ����
{
  public:
    void speak(int count) {cout << count << "�� �������!\n";};
    void speak() {cout << "������ ���!\n";};
  protected: 
    int Age;
    int Weight;
};

class Dog:public Mammal  // �Ļ� Ŭ���� Dog
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
  
  pt->speak(); // �߸��� ȣ��, �⺻ Ŭ������ speak()�� ȣ��
  pt->speak(5); // �⺻ Ŭ������ ��ü�� ���� ��� �Լ��� ȣ��

  system("PAUSE");
  return 0;
}
