#include <iostream> // cout ��� 
#include <cstdlib>  // srand(), rand() ��� 
#include <iomanip>  // setw() ��� 
#include <ctime>    // time() ��� 
using namespace std;

int main()
{
  srand(time(0));   // ��ǻ�� ��ü�� clock�� �о� ������ ����
  for(int i = 1; i < 11; i++) {
     cout << setw(5) << (1 + rand() % 7);
     if(i % 5 == 0) // �� �ٿ� 5���� ���
        cout << endl;
  }
  cout << endl;
  
  system("PAUSE");
  return 0;
}

