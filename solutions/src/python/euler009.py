def calc():
	for a in range(1,999):
		for b in range(1,999):
			if 500000 + a*b -1000*(a+b) == 0:
				return a*b*(1000-a-b)

print calc()