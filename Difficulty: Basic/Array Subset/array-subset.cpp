class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        unordered_map<int,int>map;
        
        for(int x: a){
            map[x]++;
        }
        
        for(int x : b){
            if(map[x]==0){
                return false;
            }
            
            map[x]--;
        }
        
        return true;
        
        
    }
};