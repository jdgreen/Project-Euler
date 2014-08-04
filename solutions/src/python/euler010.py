#Note: this runs for ages, will try to get a much quicker version!

def get_prime(max):
	i = 3
	m = 0
	j = 0
	list = [2]
	while i < max:
		m = 0 
		for factor in list:
			if i % factor == 0:
				m = 1
		if m == 0:
			list.append(i)
			print i
			j += 1
		i += 1
	return list

def sum_prime(max):
	tot = 0
	for element in get_prime(max):
		tot += int(element)
	return tot

print sum_prime(100000)