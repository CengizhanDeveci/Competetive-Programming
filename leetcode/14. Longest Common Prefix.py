class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) == 0:
            return ""
        elif len(strs) == 1:
            return strs[0]
        
        for i in strs:
            mini = min(len(strs[0]) , len(i))
        
        if mini == 0:
            return ""
        
        for i in range(1,len(strs)):
            found = False
            while not found:
                if mini == 0:
                    return ""
                elif strs[0][:mini] == strs[i][:mini]:
                    found = True
                else:
                    mini -= 1
        
        return strs[0][:mini] 
        