class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // non decreasing order
        // i < j 
        // i + j = target
        // i != j 
        int len = numbers.size(); 
        int left = 0 ;
        int right = len - 1 ;
        int sum = 0;  
        vector<int> ans(2,0);
        while (left < right){
          sum = numbers.at(left) + numbers.at(right);
          if(sum == target)
          {
            return ans = {left+1, right+1};
          } else if(sum < target)
          {
            left++; 
          }
          else
            right--;
            
        }
    }
};
