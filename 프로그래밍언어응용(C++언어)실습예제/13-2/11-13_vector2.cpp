#include <iostream>
using namespace std;
#include <string>
#include <vector>

int main()
{
  const int NUM = 3;
  vector<int> ratings(NUM);
  vector<string> titles(NUM);
  
  cout << NUM << "å ����� å ���(0-10)�� �Է�!\n";
  
  for(int i = 0; i < NUM; i++) {
    cout << endl;
    cout << i + 1 << "�� å�� ���� �Է�! ";
    getline(cin, titles[i]);
    cout << i + 1 << "�� å�� ���(0-10)�� �Է�! ";
    cin >> ratings[i];
    cin.get(); // Ű����κ��� �Է¹��� '\n'�� ����
  }
  cout << "�Է� ����:\n" << "------------------\n"
       << "���\t����\n";
  for(int i = 0; i < NUM; i++)
    cout << ratings[i] << "\t" << titles[i] << endl;
    
  system("PAUSE");
  return 0;
}
