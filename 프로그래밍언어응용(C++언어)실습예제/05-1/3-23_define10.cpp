#include <iostream>        
using namespace std;     
#define PAI       3.1415926
#define root(x)   ((x)) * ((x))
#define ADD(x,y)  (x + y)
#define OUTTEXT   cout << "Always for you"
#define OUT(message) cout << #message": " << message << "\n"

int main()                   
{                                        
  int x = 123;
  cout << "��ũ�� ��� ���: " << PAI << endl;
  cout << "5 * 5 = " << root(5) << endl;
  cout << "3 + 5 = " << ADD(3, 5) << endl;
  cout << "��ũ�� ����� ���ڿ����� ���� ��� �Ұ�: OUTTEXT\n";
  OUT(x); // #�μ�(�ǸŰ�����)�� ����ϸ� ���ڿ����� ��� ����
  
  system("PAUSE");
  return  0;
}
