#include <iostream>
using namespace std;

enum COLOR {BLACK, BLUE, GREEN, BROWN, YELLOW};

class Mammal
{
  public:
    Mammal():Age(3), Weight(4) {}; // ������ �ʱ�ȭ
    ~Mammal() {};
    void showData() {cout << "��  ��: " << Age << endl;};
    void SetData(int age, int weight) {Age = age; Weight = weight;};
  protected: // �Ļ� Ŭ���������� ����, �ܺ� Ŭ���������� �����
    int Age;
    int Weight;
};

class Dog:virtual public Mammal // �Ļ� Ŭ���� ����
{
  public:
    void wagTail() { cout << "���� ����!\n"; };
    void Speak() { cout << "�۸� ���´�!\n"; };
  private:
    COLOR Color;
};

class Cat:virtual public Mammal // �Ļ� Ŭ���� ����
{
  public:
    void wagTail() { cout << "���� �����!\n"; };
    void Speak() { cout << "�߿�!\n"; };
  private:
    COLOR Color;
};

class Pet:public Dog, public Cat  // ���� �Ļ� Ŭ����
{
  public:
    void Show() { cout << "����: " << Age << endl; };
    void Speak() { cout << "�߿�!\n"; };
  private:
    COLOR Color;
};

int main()
{
  Pet Pet;
  Pet.Show();

  system("PAUSE");
  return 0;
}
