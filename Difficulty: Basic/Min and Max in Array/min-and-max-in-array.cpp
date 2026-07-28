class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        vector<int> res(2,0);
        
        int minm=arr[0];
        int maxm=arr[0];
        int n=arr.size();
        
        for(int i=0; i<n; i++){
            minm=min(arr[i],minm);
            maxm=max(arr[i],maxm);
        }
        
        res[0]=(minm);
        res[1]=(maxm);
        
        return res;
    }
};