for i in range(int(input())):
	s=str(input())
	print(sum([1 for i in s.split('0') if len(i)!=0]))
