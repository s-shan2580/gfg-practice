class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
         sort(arr.begin(),arr.end());
        return *(arr.begin()+k-1);
    }
};