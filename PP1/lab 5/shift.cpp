 #include<bits/stdc++.h>
 using namespace std; 
 string s;
 int main() {
 //abcdeffecba
 cin >> s;
 for(int i = 0;i < s.size();i ++) {
 if(s[i] == 'z') s[i] = 'a';
 else s[i] = char(s[i] + 1);
 }
 cout << s << " ";
 return 0;
 }