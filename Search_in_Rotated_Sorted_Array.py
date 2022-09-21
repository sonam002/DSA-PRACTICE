class Solution:
    def search(self, nums, target):
        if target not in nums:
            return -1
        left, right= 0,len(nums)-1
        while left<=right:
            mid=(left+right)//2
            if target==nums[mid]:
                return mid
            if nums[left]<=nums[mid]:
                if nums[left]<=target<=nums[mid]:
                    right=mid-1
                else:
                    left=mid+1
            else:
                if nums[mid]<=target <=nums[right]:
                    left=mid+1
                else:
                    right=mid-1
        return -1
ob1 = Solution()
print(ob1.search([4,5,6,7,8,0,1,2], 0))
         
            
        