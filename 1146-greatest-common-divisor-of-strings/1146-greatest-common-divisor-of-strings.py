class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        ref_string = ""
        if(len(str1) > len(str2)):
            ref_string = str2
        else: ref_string = str1

        output = ""
        for i in range(len(ref_string)):
            if(i == 0):
                substr = ref_string
            else:
                substr = ref_string[:-i]
            if (len(str1)%len(substr) == 0 and len(str2)%len(substr) == 0):
                diviser1 = int(len(str1)/len(substr))
                diviser2 = int(len(str2)/len(substr))
                if(str1 == substr*diviser1 and str2 == substr*diviser2):
                    output = substr
                    break
            else:
                continue

        return output
        
        