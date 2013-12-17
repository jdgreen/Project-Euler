from decimal import *

#find recurring cycle length (slow)
def recurring_slow(number):
	getcontext().prec = number
	rm = 1
	rm_list = [1]
	len = 1
	while len < number:
		rm = 10*rm % number
		if rm == 0: return 0
		if any((rm in rm_list) for num in rm_list):
			return len
		rm_list.append(rm)	
		len += 1
	return 0

#get recurring cycle length
def recurring(denom):
	recur = "False"
	ind = 6
	while recur == "False":
		getcontext().prec = ind*3
		fract = Decimal(10**ind) / Decimal(denom)
		left,right = int(fract),int((fract-int(fract))*10**ind)
		check = int((fract*10**(ind) - left*10**ind - right)*10**ind)
		if left == right == check:
			return ind
		ind += 1

#check prime number
def prime(number):
	for fact in range(2,int(number**0.5)+1):
		if number % fact == 0:
			return False
	return True

#find longest recip cycle
def recip(max=1000):
	length = 0
	for num in range(7,max)[::-1]:
		if prime(num) == True:
			repeat = recurring(num)
			if repeat > length: length,number = repeat,num
			if num - repeat == 1:
				return number
	return number

print recip()