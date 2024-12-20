#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct Bag
{
  int num;
  int price;
  int money;
};

bool Cmp(Bag a, Bag b)
{
  return a.money < b.money;
}

int main()
{
  freopen("pencil.in", "r", stdin);
  freopen("pencil.out", "w", stdout);

  int num;
  cin >> num;

  Bag bag[3];

  for (int i = 0; i < 3; i++)
  {
    cin >> bag[i].num;
    cin >> bag[i].price;

    if (num % bag[i].num != 0)
    {
      bag[i].money = (num / bag[i].num + 1) * bag[i].price;
    }
    else
    {
      bag[i].money = (num / bag[i].num) * bag[i].price;
    }

  }

  sort(bag, bag + 3, Cmp);

  cout << bag[0].money << endl;
  return 0;
}
