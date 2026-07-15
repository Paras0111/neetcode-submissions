class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // non decreasing order
        // i < j 
        // i + j = target
        // i != j 
        int len = numbers.size(); 
        int left = 0 ;
        int right = left + 1  ; 
        vector<int> ans(2,0);
        while (right <= len ){
            if (numbers.at(left) + numbers.at(right) == target){
                return ans={left+1, right+1};
            }
            else 
            {
                right++;
                
            }

            if (right == len)
            {
                left++;
                right = left + 1;
            }

        }
    }
};
