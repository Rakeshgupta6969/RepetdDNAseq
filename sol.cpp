class Solution {
    public:
        vector<string> findRepeatedDnaSequences(string s) {
            // first of all we try to use the brute force solution.
          vector<string> ans;
          if(s.size()<=10)  return ans; // here we required for the repeatation of the 10 length string
    
        unordered_map<string,int> mp;
    
        for(int i = 0; i<=s.size()-10; i++){   // here we only  want to solve the length  10 string.
    
         string h = s.substr(i,10);
    
         mp[h]++;
    
        }
    
    
          for(auto i: mp){
         
         if(i.second > 1) ans.push_back(i.first);
    
    
          }
           
    
    
         return ans;
    
    
    
        }
    };