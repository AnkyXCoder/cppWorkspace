#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  string s1 = "abc";
  cout << s1 << endl;

  string s2;
  s2 = "def";
  cout << s2 << endl;

  string *sp = new string;
  *sp = "ghid";
  cout << *sp << endl;

  cout << "String input will update the previous string variable" << endl;
  getline(cin, *sp);
  cout << *sp << endl;

  vector<string> v;
  v.push_back(s1);
  v.push_back(s2);
  v.push_back(*sp);
  v.push_back("hello!!!");

  for (int i = 0; i < v.size(); i++) {
    cout << i << " : " << v[i] << endl;
  }
}
