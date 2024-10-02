string removeDuplicateLetters(string s) {
  string ans = "";
  vector < bool > map(26, false);
  for (int i = 0; i < s.length(); i++) {
    if (map[s[i] - 'a'] == false) {
      ans += s[i];
      map[s[i] - 'a'] = true;
    }
  }
  return ans;
}
int main() {
