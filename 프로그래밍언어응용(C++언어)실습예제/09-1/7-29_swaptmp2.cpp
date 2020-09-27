#include <iostream>
#include <cstring>
using namespace std;

template <class T> void Swap(T &px, T &py);

struct Dept
{
  int no;           // �μ���ȣ 
  char name[20];    // �μ��� 
  char loc[80];     // �μ���ġ 
};

template <> void Swap<Dept>(Dept &px, Dept &py);

int main()
{
  int x = 3, y = 7;
  Dept dt1 = {101, "�λ��", "����"};
  Dept dt2 = {102, "�����", "��õ"};
  
  cout << "Swap ȣ�� ��, x: " << x << " y: " << y << "\n";
  
  Swap(x, y);
  cout << "Swap ȣ�� ��, x: " << x << " y: " << y << "\n";
  
  Swap(dt1, dt2);
  cout << "Swap ȣ�� ��, �μ�1: " << dt1.no << "  "
       << dt1.name << "  " << dt1.loc << endl;

  system("PAUSE"); 
  return 0;
}

template <class T> void Swap(T &px, T &py)
{
  T temp;
  
  temp = px;
  px = py;
  py = temp;
}

template <> void Swap<Dept>(Dept &px, Dept &py) // ����� Ư��ȭ
{
  px.no = py.no; 
  strcpy(px.name, py.name);
  // ����ü�� �� ���� ��� �߿��� Ư���� �κ�(�μ� ��ġ)�� �����Ѵ�.
}

