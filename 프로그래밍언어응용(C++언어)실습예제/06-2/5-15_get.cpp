#include <iostream>        
using namespace std;     

int main()                   
{                                        
  char ch;
    
  cout << "���� ���ڸ� �Է��ϼ���!\n";
  cout << "Ctrl + z Ű�� ������ �����մϴ�!\n";
  while((ch = cin.get()) != EOF)
  {
     cout << ch;
  }
  
  system("PAUSE");  
  return  0;
}

