#include <iostream>
using namespace std;

template <class Type>
void Swap(Type &px, Type &py);

struct Dept
{
  int no;
  char name[20];
  char loc[80];
};

template <> void Swap<Dept>(Dept &px, Dept &py);
// ����ü Dept�� ���ؼ� ����ǵ��� ����� ����� Ư�� ���ø� 

int main()
{
  int x = 3, y = 7;
  Dept dt1 = {101, "�λ��", "����"};
  Dept dt2 = {102, "�����", "��õ"};
  cout << "Swap ȣ����, x: " << x << " y: " << y << "\n";
  Swap(x, y);  // �������� ���μ��� ������ Swap �Լ��� ȣ�� 
  cout << "Swap ȣ����, x: " << x << " y: " << y << "\n";
  Swap(dt1, dt2);  // ����ü Dept�� ��ü�� ���μ��� ������ Swap �Լ��� ȣ�� 
  cout << "Swap ȣ����, �μ�1: " << dt1.no << " " 
       << dt1.name << " " << dt1.loc << endl << "             �μ�2: " 
       << dt2.no << " " << dt2.name << " " << dt2.loc << endl;
  system("PAUSE");
  return 0;
}

template <class Type>            // �Ϲ� ���ø� �Լ��� ���� 
void Swap(Type &px, Type &py)
{
  Type temp;
  
  temp = px;
  px = py;
  py = temp;
}

template <> void Swap<Dept>(Dept &px, Dept &py) // ����� ���ø� �Լ��� ���� 
{
  Dept temp(px);
  px.no = py.no;
  strcpy(px.name, py.name);
  strcpy(px.loc, py.loc);
  py.no = temp.no;
  strcpy(py.name, temp.name);
  strcpy(py.loc, temp.loc);
}

