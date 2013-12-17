def fib(a):
	i = 0
	num = [1,2]
	while num[i] <= a:
		num.append(num[i]+num[i+1])
		i += 1
	num.pop()
	num.pop()
	return num

def even_sum(a):
	sum = 0
	for element in a:
		if(element % 2 == 0):
			sum += element
	return sum

def fib_sum(max):
    one = 1
    two = 2
    tot = 0
    while two <= max:
        if two % 2 == 0:
            tot += two
        one, two = two, one + two
    return tot

print fib_sum(4000000)
