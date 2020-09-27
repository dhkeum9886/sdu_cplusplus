#include <iostream>
using namespace std;

enum COLOR {BLACK, BLUE, GREEN, BROWN, YELLOW};

class Mammal             // �⺻ Ŭ����
{
  public:
    void speak(int count) {cout << count << "�� �������!\n";};
    virtual void speak() {cout << "������ ���!\n";};
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

void showData(Mammal &ref)  // ���� - �Լ���(��ü�� &�Ű�����)
{
  ref.speak();
}

int main()
{
  Dog happy;      // �Ļ� Ŭ������ ��ü�� ����
  Mammal mammal;  // �⺻ Ŭ������ ��ü�� ����
  
  showData(mammal); // �⺻ Ŭ������ ��ü�� ���ڷ� ���
  showData(happy);  // �Ļ� Ŭ������ ��ü�� ���ڷ� ���

  system("PAUSE");
  return 0;
}
