class Solution:
    # @return a tuple, (index1, index2)
    def twoSum(self, num, target):
    	dic = {}
    	for x in range(len(num)):
    		if dic.get(target - num[x]) == None:
    			dic[num[x]] = x
    		else:
    			return (dic[target - num[x]] + 1, x + 1)

