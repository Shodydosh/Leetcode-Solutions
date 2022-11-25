class Solution {
public:
	int tribonacci(int n) {
		int f[3]={0,1,1};
		for(int i=3;i<=n;i++)
			f[i%3]+=f[(i+1)%3]+f[(i+2)%3];
		return f[n%3];
	}
};
