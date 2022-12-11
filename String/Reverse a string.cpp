class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size()-1;
    
    while(start<end){
        char temp = s[start];//store first element in temp
        s[start]= s[end];//update start with end element
        s[end]=temp;
        start++;
        end--;
    }
    }
};
