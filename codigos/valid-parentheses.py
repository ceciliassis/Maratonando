# https://leetcode.com/problems/valid-parentheses/

# ### Valid Parentheses
 
# Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

# An input string is valid if:

#     Open brackets must be closed by the same type of brackets.
#     Open brackets must be closed in the correct order.
#     Every close bracket has a corresponding open bracket of the same type.

# Example 1:

# Input: s = "()"
# Output: true

# Example 2:

# Input: s = "()[]{}"
# Output: true

# Example 3:

# Input: s = "(]"
# Output: false

# Constraints:

#     1 <= s.length <= 104
#     s consists of parentheses only '()[]{}'.

# Complexity
# - Time complexity:
# $$O(n)$$

# - Space complexity:
# $$O(n)$$

class Solution:
    def isValid(self, s: str) -> bool:
        par_map = {'(':')', '[':']', '{':'}'}
        stack = []
       
        for par in s:
            if par in par_map:
                stack.append(par)
            elif len(stack) == 0 or par_map[stack.pop()] != par:
                return False

        return len(stack) == 0
                