class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n= nums.size();
        sort(nums.begin(),nums.end());
       
        for(int i=0;i<n-3;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            // vector is used
            for(int j=i+1;j<n-2;j++){
                if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }
                int start= j+1,end= n-1;
                
                long long  sum= target- nums[i]-nums[j];
               
                    while(start<end){
                        if(nums[start]+nums[end]==sum){
                            ans.push_back({nums[i],nums[j],nums[start],nums[end]});
                            start++;end--;
                            while(start>j+1 && start<n-1 &&  nums[start]==nums[start-1] && end<n-1 && nums[end]==nums[end+1]){
                                start++;
                                end--;
                            }
                        }
                        else if( nums[start]+nums[end]>sum){
                            end--;
                        }
                        else{
                            start++;
                        }
                    }
                }
            
            //fringing effect
        }
        return ans;
    }
};
