#User function Template for python3

class Solution:
    def productExceptSelf(self, nums):
        #code here
        num_zeros=0  
        product_of_non_zero=1  
        for num in nums:  
            if num==0:  
                num_zeros+=1  
            else:  
                product_of_non_zero*=num  
        product_array=[0]*n  
        if num_zeros>1:  
            return product_array  
        elif num_zeros==1:  
            for i in range(n):  
                if nums[i]==0:  
                    product_array[i]=product_of_non_zero  
                    break  
        else:  
            for i in range(n):  
                product_array[i]=product_of_non_zero//nums[i]  
        return product_array  


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())

    for _ in range(t):
        n = int(input())
        arr = [int(x) for x in input().split()]

        ans = Solution().productExceptSelf(arr)
        print(*ans)

# } Driver Code Ends