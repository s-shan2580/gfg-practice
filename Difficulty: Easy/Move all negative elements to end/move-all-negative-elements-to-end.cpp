class Solution {
  public:
    void segregateElements(vector<int>& arr){

    vector<int> ans;

    for(int x:arr){
        if(x>=0)
            ans.push_back(x);
    }

    for(int x:arr){
        if(x<0)
            ans.push_back(x);
    }

    arr=ans;
}
};