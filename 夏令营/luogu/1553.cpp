#include <iostream>
#define zhengshu 0
#define xiaoshu 1
#define fenshu 2
#define baifenshu 3

using namespace std;

string reverse(string num, int mode, bool isback) {
  string str(num.rbegin(), num.rend());
  int loc = 0;
  for (int i = 0; i < str.size(); i++) {
    if (str[i] != '0')
      break;
    else
      loc++;
  }
  str = str.substr(loc, str.size() - loc);

  if (mode == xiaoshu && isback) {
    loc = str.size();
    for (int i = str.size() - 1; i >= 0; i--) {
      if (str[i] != '0')
        break;
      else
        loc--;
    }
    str = str.substr(0, loc);
  }
  if(str == "")str = "0"; 
  return str;
}
int main() {
  int flag = zhengshu, pos = 0;
  string str, front, back;

  cin >> str;

  for (int i = 0; i < str.size(); i++) {
    switch (str[i]) {
    case '.':
      flag = xiaoshu;
      pos = i;
      break;
    case '/':
      flag = fenshu;
      pos = i;
      break;
    case '%':
      flag = baifenshu;
      pos = i;
      break;
    default:
      if (!pos)
        front += str[i];
    }
  }

  if (flag != zhengshu)
    back = str.substr(pos + 1, str.size() - pos - 1);

  switch (flag) {
  case zhengshu:
    cout << reverse(front, flag, false) << endl;
    break;
  case xiaoshu:
    cout << reverse(front, flag, false) << '.' << reverse(back, flag, true) << endl;
    break;
  case fenshu:
    cout << reverse(front, flag, false) << '/' << reverse(back, flag, false) << endl;
    break;
  case baifenshu:
    cout << reverse(front, flag, false) << '%' << endl;
  }
}
