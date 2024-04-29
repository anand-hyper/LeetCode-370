class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            int left,right,sum;
            vector<std::pair<int,int>> num_with_index;
            for(int i=0;i<nums.size();i++)
            {
                num_with_index.push_back({nums[i],i});
                
            }
            sort(num_with_index.begin(),num_with_index.end());
            
            left =0,right=num_with_index.size()-1;
            while(left<right)
            {
                 sum = num_with_index[left].first + num_with_index[right].first;
                 if(sum==target)
                 {
                     
                     return {num_with_index[left].second,num_with_index[right].second};
                 }
                
                 else if(sum>target) right--;
                 else left++;
                
                
            }
            

            
            
            return {};
        
            
        
    }
};