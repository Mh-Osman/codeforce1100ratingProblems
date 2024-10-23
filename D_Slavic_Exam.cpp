
#include <bits/stdc++.h>
using namespace std;
void solution(string &s, string &t){

    int l=0;
    int remaining_spos=0;
    for(int i=0;i<s.size() && l<t.size();i++){

           if(s[i] == t[l]){

            l+=1;
           }else if(s[i] == '?'){

                s[i]=t[l];
                l+=1;
           }
            remaining_spos=i;

    }
    for(int i=remaining_spos+1;i<s.size();i++){
            if(s[i]=='?'){
               s[i]='a';
            }

    }
    if(l == t.size()){
        cout<<"YES"<<endl;
        cout<<s<<endl;
    }else{

        cout<<"NO"<<endl;
    }

}
int main() {
int t;
cin>>t;
while(t--){


 string s, t;
 cin>>s;
 cin>>t;
  solution(s, t);

}



    return 0;
}