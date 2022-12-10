class Solution(object):
    def kWeakestRows(self, mat, k):

        # tmp là mảng lưu lại số soldiers của mỗi hàng
        # stores numbers of soldiers of each row
        tmp = []

        for x in mat:
            tmp.append(sum(x))
        if len(tmp) == 0: 
            return [0]
        
        ans = []
        # cho mỗi giá tri j trong sorted(tmp) thì append index của j trong tmp vào ans
        for j in sorted(tmp):
            a = tmp.index(j) # returns the position at the first occurrence of the specified value.
            ans.append(a)
            
            # cho tmp[a] = -1 để hàm index() không lấy lại vị trí này nữa, 
            # có thể cho bằng số bất kì
            tmp[a] = -1
        
        # ans[:k] trả về chuỗi con có k phần tử đầu của ans
        return ans[:k]
