class Solution:
    def validPalindrome(self, s: str) -> bool:
        def is_valid(left,right,s,deleted):
            while left<right:
                if s[left] != s[right]:
                    if not deleted:
                        deleted = True
                        if is_valid(left,right-1,s,deleted) or is_valid(left + 1,right,s,deleted):
                            return True
                        else:
                            return False
                    else:
                        return False
                left += 1
                right -= 1
            return True
            
            
        return is_valid(0,len(s)-1,s,False)
            
        