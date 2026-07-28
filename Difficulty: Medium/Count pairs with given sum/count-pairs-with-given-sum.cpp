class Solution {
  public:
   int countPairs(vector<int>& arr, int k) {
    unordered_map<int,int> map;
    int count = 0;

    for (int num : arr) {
        int need = k - num;

        if (map.find(need) != map.end()) {
            count += map[need];
        }

        map[num]++;
    }

    return count;
}
};