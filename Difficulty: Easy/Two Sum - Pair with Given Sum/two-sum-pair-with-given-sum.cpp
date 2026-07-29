class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int l=0;
        int r=n-1;
        
        sort(arr.begin(),arr.end());
        
        while(l<r){
            int sum=arr[l]+arr[r];
            if(sum==target){
                return true;
            }
            else if(sum>target){
                r--;
            }
            else{
                l++;
            }
        }
        
        return false;
    }
};