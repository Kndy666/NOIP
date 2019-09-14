#include <iostream>
#include <cstdio>
      
using namespace std;
      
int main()
{     
  freopen("cowroute.in","r",stdin);
  freopen("cowroute.out","w",stdout);
                                                      
  int a,b,n,min,tmp;    
  int ans = -1;                                    
  cin >> a >> b >> n;
      
  for(int i = 0;i < n;i++)
  {                                                      
    int fee,city;    
    cin >> fee >> city;   
    int posa = -1;
    int posb = -1;                             
    for(int j = 0;j < city;j++)                          
    {                                                   
      cin >> tmp;                            
      if(tmp == a)
      {
	posa = j;
      }
      if(tmp == b)
      {
	posb = j;
      }
      if(posa < posb && fee < min)
      {
	min = fee;
	ans = fee;
      }
    }                                                                         
  }                                                        
  cout << ans << endl;                            
  return 0;                                                
}                                                         
                                                                      
