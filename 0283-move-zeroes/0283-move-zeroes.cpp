class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n = nums.size();
        bool swapped;
        int i,j;
        
        for(i = 0; i<n-1; i++)
        {
            swapped=false;
            for(j=0; j<n-1-i; j++)
            {
                if(nums[j]==0)
                {
                    swap(nums[j], nums[j+1]);
                    swapped=true;
                }
            }
            
        }
    }
};