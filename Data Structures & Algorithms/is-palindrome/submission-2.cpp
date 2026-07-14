
class Solution {
public:
    bool isPalindrome(string s) {
   
    int len = s.length();
    int right =  len - 1;
    int left =  0;
    
    while (left < right)
    {
        if (!isalnum(s[left])) { 
            left++; 
            continue;}
        if (!isalnum(s[right])) {
            right--;
            continue;
            }
        if(tolower(s[left]) != tolower(s[right]))
        {
            return false;
        }
        left++; 
        right--;
        
    }
    return true; 
    

    }
};
/***
Here the idea is take the centre or the egdes and in a single loop traverse
the string, till they cross each other. here you could do a lot of things, compare add place etc, 

***/

