#include <bits/stdc++.h>
using namespace std;

int main() {
   vector<bool> isUsed(26,false);
   vector<int> lastIndex(26,-1);
   string input = "cbacdcbc",result = "";
   
   for(int i = 0; i<input.size(); i++){
     lastIndex[input[i]-'a'] = i;
   }
   
   for(int i = 0; i<input.size(); i++){
    
    if(isUsed[input[i]-'a']){
        continue;
    }
    
    while(result.length()>0 && result.back()>input[i] && lastIndex[result.back()-'a']>i){
        isUsed[result.back()-'a'] = false;
        result.pop_back();
    }
    
    result.push_back(input[i]);
    isUsed[input[i]-'a'] = true;
   }
   
   cout<<result<<endl;
   
   return 0;
}






