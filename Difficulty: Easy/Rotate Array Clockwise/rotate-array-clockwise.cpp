class Solution {
  public:
    void rotateclockwise(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int r=k%n;
        int d=n-r;
        reverse(arr.begin(), arr.begin()+d);
        reverse(arr.begin()+d, arr.begin()+n);
        reverse(arr.begin(), arr.begin()+n);
    }
};
