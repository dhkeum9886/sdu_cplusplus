#include <iostream>
using namespace std;

enum COLOR {BLACK, BLUE, GREEN, BROWN, YELLOW};

class Mammal
{
  public:
    Mammal():Age(3), Weight(4) {}; // ������ �ʱ�ȭ
    ~Mammal() {};
    void showData() {cout << Age << endl; cout << Weight << endl;};
    void SetData(int age, int weight) {Age = age; Weight = weight;};
    void speak() {cout << "������ ���!\n";};
  protected: // �Ļ� Ŭ���������� ����, �ܺ� Ŭ���������� �����
    int Age;
    int Weight;
};

class Dog:public Mammal
{
  public:
    Dog():Color(YELLOW) {};
    ~Dog() {};
    COLOR getColor() const {cout << Color << endl; return Color;};
    void setColor(COLOR color) {Color = color;};
    void wagTail() {cout << "������ ����!\n";};
    void speak() {cout << "�۸� ���´�!\n";};
  private:
    COLOR Color;
};

int main()
{
  Mammal dongmul;
  Dog happy;
  
  dongmul.speak();
  happy.speak();
  
  system("PAUSE");
  return 0;
}
