#get factorial function
def fact(number):
	tot = 1
	for num in range(2,number+1):
		tot *= num
	return tot

#determine max factorial
def rearrange(limit=1000000):
	num = 1
	while limit > 1:
		num += 1
		limit /= num
	return num-1

#print rearrange()

#determine lexicon rearrangement
def lexi(max=1000000,array=[0,1,2,3,4,5,6,7,8,9]):
	limit = rearrange(max)
	lexi = []
	for num in range(0,limit+1)[::-1]:
		if max % fact(num) == 0:
			lexi.append(array.pop(max/fact(num)-1))
			array.sort()
			return lexi + array[::-1]
		times = int(max/fact(num))
		lexi.append(array.pop(times))
		max -= times*fact(num)
	return lexi 

#output digits into a number
def number(number=1000000,array=[0,1,2,3,4,5,6,7,8,9]):
	lexicon = ""
	for digit in lexi(number,array):
		lexicon += str(digit)
	return lexicon

print number()