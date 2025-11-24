class Solution {
public:
    bool ispe(string str){
        int l=0;
        int h=str.size()-1;
        while(l<h){
            if(str[l]!=str[h])
                return false;
            l++;
            h--;

        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(string str:words){
            if(ispe(str)) return str;
        }
        return "";

        
    }
};