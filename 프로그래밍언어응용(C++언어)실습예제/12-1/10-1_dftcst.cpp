#include <iostream>
using namespace std;

enum COLOR {BLACK, BLUE, GREEN, BROWN, YELLOW};
// ������ ���������� ����

class Mammal
{
  public:
    Mammal():Age(3), Weight(4) {}; // ������ �ʱ�ȭ
    ~Mammal() {};                  // �Ҹ���
    
    void showData();
    void SetData(int age, int weight) {Age = age; Weight = weight;};
  protected: // �Ļ� Ŭ���������� ����, �ܺ� Ŭ���������� �����
    int Age;
    int Weight;
};

void Mammal::showData() // ��� �Լ��� ����
{
  cout << "��  ��: " << Age << endl;
  cout << "������: " << Weight << endl;
}

class Dog:public Mammal // �Ļ� Ŭ���� ����
{
  public:
    Dog():Color(YELLOW) {}; // ������ �ʱ�ȭ
    ~Dog() {};
    COLOR getColor() const {cout << Color << endl; return Color;};
    void setColor(COLOR color) { Color = color; };
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

  system("PAUSE");
  return 0;
}
