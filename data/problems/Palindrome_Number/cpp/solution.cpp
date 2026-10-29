class Solution { // This was written by Claude
public:
    bool isPalindrome(int x) {
        // Negatives aren't palindromes, and neither is anything ending in 0 (except 0 itself)
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        // Reverse only the second half of the number
        int reversed = 0;
        while (x > reversed) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }

        // Even digit count: halves match exactly (1221 -> 12 and 12)
        // Odd digit count: drop the middle digit (12321 -> 12 and 123)
        return x == reversed || x == reversed / 10;
    }
};