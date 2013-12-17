from math import sqrt

#determine number factor sum
def abund(num):
	tot = 1
	sq = sqrt(num)
	for div in range(2,int(sq)+1):
		if num % div == 0: tot += div + num/div
	if int(sq) ==  sq: tot -= sq
	return tot

#determine sum of non abundant pairs
def non_sum(limit=20162):
	abn = set()
	tot = 0
	#get all abundant numbers
	for num in range(1,limit):
		if abund(num) > num:
			abn.add(num)
		#check sums of abundant number
		if not any( num - pair in abn for pair in abn):
			tot += num
	return tot

print "Sum is",non_sum()