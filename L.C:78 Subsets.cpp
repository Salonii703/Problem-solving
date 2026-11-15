class Solution {
public:
vector<vector<int>> result;
void fun(vector<int>& nums, int n, int index, vector<int> &tmp){
    if(index==n){
        result.push_back(tmp);
        return;
        
    }
    fun(nums,n,index+1,tmp);
    tmp.push_back(nums[index]);
    fun(nums,n,index+1,tmp);
    tmp.pop_back();
    return;
}
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int> tmp;
        
        fun(nums,n,0,tmp);

        
        return result;
        
        
    }
};
