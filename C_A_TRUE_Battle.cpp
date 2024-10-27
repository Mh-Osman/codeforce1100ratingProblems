
#include <bits/stdc++.h>
using namespace std;

int main() {


int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
    string s;
    cin>>s;
    int one_length=0;
    int alice = max(s[0]-'0' , s[n-1]-'0');
    int i=0;
    while(i<n){
      int end=0;
     while(s[i] == '1')end++ , i++;
     one_length = max(end , one_length);
      i+=1;  
    }

    if(one_length >=2){

        cout<<"YES"<<endl;
    }else if(alice){
     
       cout<<"YES"<<endl;

    }else{

          cout<<"NO"<<endl;
    }
    
}



    return 0;
}