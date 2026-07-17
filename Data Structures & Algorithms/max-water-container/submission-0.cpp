class Solution {
public:
    int maxArea(vector<int>& heights) {
        /***
            heights[i] = height of the ith bar
            return max water = length x breadth
        
        ***/
        int len = heights.size();
        int right = len - 1 ; 
        int left  = 0;
        int maxArea = 0; 

        while (left < right)
        {
            int area = (right - left) * (min(heights.at(left), heights.at(right)));
            maxArea = max(area, maxArea);

            if(heights.at(left) < heights.at(right)) 
                left++;
            else 
                right--;
        }
        
        return maxArea;

    }
};
