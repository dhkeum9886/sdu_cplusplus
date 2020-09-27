#include <iostream>
using namespace std;

class Point
{
  public:
    Point(){x = 0; y = 0;};             // ������ 
    Point(int a, int b){x = a; y = b;}; // ������ 
    Point operator +(Point obj); // + ������ �����ε� 
    Point operator -(Point obj); // - ������ �����ε� 
    void showData(){cout << "x : " << x << endl;
           cout << "y : " << y << endl;};
  private:
    int x;
    int y;
};

Point Point::operator +(Point obj)
// ������ + �� ���� �����ε� ���� - ��ü���� + ����
{
  Point Result;
  Result.x = x + obj.x;
  Result.y = y + obj.y;
  return Result;
}

Point Point::operator -(Point obj)
// ������ - �� ���� �����ε� ���� - ��ü���� - ����
{
  Point Result;
  Result.x = x - obj.x;
  Result.y = y - obj.y;
  return Result;
}

int main()
{
  Point pt1(200, 300);
  Point pt2(50, 100);
  Point pt3; 

  pt3 = pt1 + pt2; // �� ��ü���� + ����
  pt3.showData();

  pt3 = pt1 - pt2; // �� ��ü���� - ����
  pt3.showData();

  system("PAUSE");
  return 0;
}
 
