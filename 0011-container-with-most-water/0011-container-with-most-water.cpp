class Solution {
public:
int maxwater = 0;
    int maxArea(vector<int>& height) {
        int n= height.size();
        int start = 0;
        int end = n-1;
        // int max1 = INT_MIN;
        int ans = 0;
        while(start < end){
            
            
                int water = 0;
                int heightc = min(height[start],height[end]);
                int width = end-start;
                water = heightc * width;
                ans = max(ans,water);
                if(height[start] < height[end]){
                    start++;
                }
                else{
                    end--;
                }



            
            

        }
        return ans;
        
    }
};