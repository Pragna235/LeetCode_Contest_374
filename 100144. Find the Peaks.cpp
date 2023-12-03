class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int> result;
        int n = mountain.size();
        for(int i=1;i<n-1;i++){
            if(mountain[i]>mountain[i-1] && mountain[i]>mountain[i+1]){
                result.push_back(i);
            }
}
        return result;
    }
};
