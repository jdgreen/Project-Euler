#takes ages but does work - will try to find quicker method!

def tri(divisors):
	tri = 0
	div = 1
	m = 0
	while m <= divisors:
		m = 0
		tri += div
		div += 1
		for factor in range(1,tri+1):
			if tri % factor == 0:
				m += 1
	return tri

print tri(5)
