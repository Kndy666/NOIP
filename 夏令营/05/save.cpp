#include <iostream>

using namespace std;

int main()
{

  int per[12];
  for (int i = 0; i < 12; i++)
  {
    cin >> per[i];
  }
    
  int money = 0, save = 0;
  for (int i = 0; i < 12; i++)
  {
     money += 300;
     if  (money - per[i] >= 100)
     {
       save += (money - per[i]) / 100 * 100;
       money -= (money - per[i]) / 100 * 100;
       money -= per[i];
     }
     else if(money - per[i] < 100 && money - per[i] >= 0)
     {
       money -= per[i];
     }
     else
     {
       cout << -1 * (i + 1) << endl;
       return 0;
     }
        
  }

  double given = save * 1.2;
    
  cout << given + money << endl;
  
  return 0;
}
