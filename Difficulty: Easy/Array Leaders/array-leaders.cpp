class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int> res;
        
        res.push_back(arr[n-1]);
        int leader=arr[n-1];
        
        if(n==1){
            return res;
        }
        
        int i=n-2;
        
        while(i>=0){
            if(arr[i]>=leader){
                res.push_back(arr[i]);
                leader=arr[i];
               
            }
            
            i--;
        }
        
        reverse(res.begin()+i+1, res.end());
        
        return res;
    }
};