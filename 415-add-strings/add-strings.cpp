class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans = "";
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int digit1 = (i >= 0) ? (num1[i] - '0') : 0;
            int digit2 = (j >= 0) ? (num2[j] - '0') : 0;

            int currentSum = digit1 + digit2 + carry;
            carry = currentSum / 10;
            int digitToAdd = currentSum % 10;

            ans += to_string(digitToAdd);

            i--;
            j--;
        }

        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};
