#include <bits/stdc++.h>
using namespace std;
int main() {
string str = "HELLO";
 reverse(str.begin(), str.end()); 
cout << "The reversed string is- " << str;
}
////////////////////////////////////////////////////////////////
int main() {

  string str = "HELLO";
  stack < char > st;
  int n = str.length();

  for (int i = 0; i < n; i++) {
    st.push(str[i]);
  }
 int j = 0;
  while (!st.empty()) {
    char elem = st.top();
    st.pop();
    str[j] = elem;
    j++;
  }
  cout << "The reversed string is- " << str;
}
