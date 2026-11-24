class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
      
        int leftsum=0;
        int n= cardPoints.size();
        int rightsum = 0;
        int sum  = 0;
        int left = 0;
        int right = n-1;
      
        int ans=0;
        
      
           


            for(int i=0; i<k; i++){
                leftsum = leftsum + cardPoints[i];
                ans = leftsum;

            }
            for(int i=k-1;i>=0;i--){
                leftsum = leftsum - cardPoints[i];
                rightsum = rightsum+cardPoints[right];
                sum = leftsum+rightsum;
                right--;
                ans = max(ans,sum); 
            }
            
            

        
        return ans;
        
    }
};