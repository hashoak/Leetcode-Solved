class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        ans=[[1]]
        for i in range(1,numRows):
            k=[1]
            for j in range(0,i//2):
                k.append(ans[-1][j]+ans[-1][j+1])
            ans.append(k+k[(i+1)//2-1::-1])
        return ans