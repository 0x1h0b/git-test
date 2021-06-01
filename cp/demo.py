
def solve(a,ch,c01,c10):
	cost,n = 0, len(a)
	for i in range(1,n):
		if i==0 and i!=ch:
			a[i]=1-ch
			if a[i]==0:
				cost+=c10
			else:
				cost+=c01
			i+=1
		if a[i]==1 and a[i-1]==1:
			cost+=c10
			a[i]=0
		elif a[i]==0 and a[i-1]==0:
			cost+=c01
			a[i]=1
	return cost
for _ in range(int(input())):
    n,c01,c10 = map(int,input().split(' '))
    a=list(map(int,input().split(' ')))
    cost= min(solve(a,0,c01,c10), solve(a,1,c01,c10))
    print(cost)
