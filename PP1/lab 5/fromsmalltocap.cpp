//  From small to capital
 #include <iostream>
 #include <string>
 #include <algorithm>
 using namespace std;
 int main(){

     string n;
     cin>>n;

     for(int i=0;i<n.size();++i)
     {if(n[i]>='a' && n[i]<='z')
      n[i]=n[i]+'A'-'a';}

      cout<<n<<endl;

      return 0;
}