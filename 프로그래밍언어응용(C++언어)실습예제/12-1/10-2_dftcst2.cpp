#include <iostream>
using namespace std;

enum COLOR {BLACK, BLUE, GREEN, BROWN, YELLOW};

class Mammal
{
  public:
    Mammal();
    ~Mammal();
    void showData();
    void SetData(int age, int weight) {Age = age; Weight = weight;};
  protected: // �Ļ� Ŭ���������� ����, �ܺ� Ŭ���������� �����
    int Age;
    int Weight;
};

Mammal::Mammal():Age(3), Weight(4)
{
  cout << "--- Mammal ������ ȣ�� ---\n";
}

Mammal::~Mammal()
{
  cout << "--- Mammal �Ҹ��� ȣ�� ---\n";
  system("PAUSE");
}

void Mammal::showData() // ��� �Լ��� ����
{
  cout << "��  ��: " << Age << endl;
  cout << "������: " << Weight << endl;
}

class Dog:public Mammal
{
  public:
    Dog():Color(YELLOW) {cout << "--- Dog ������ ȣ�� ---\n";};
    ~Dog(){cout << "--- Dog �Ҹ��� ȣ�� ---\n";};
    COLOR getColor() const {cout << Color << endl; return Color;};
    void SetColor(COLOR color) {Color = color;};
    void wagTail() { cout << "���� ����!\n"; };
    void speak() { cout << "�۸� ���´�!\n"; };
  private:
    COLOR Color;
};

int main()
{
  Dog happy;

  happy.showData();
  happy.speak();
  happy.getColor();

  return 0;
}
