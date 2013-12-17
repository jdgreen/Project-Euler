def find_prod(number):
	with open('/home/jonny/documents/computing/mathematics/euler_problems/data011.data','r') as file:
		element = [ map(int,line.split(' ')) for line in file ]
		
	#find product across each line
	running = 0
	for a in range(20):
		for b in range(20-number):
			product_across = 1
			product_down = 1
			product_r_diag = 1
			product_l_diag = 1
			for i in range(number):
				product_across *= element[a][b+i]
				product_down *= element[b+i][a]
				if a < 20-number:
					product_r_diag *= element[a+i][b+i]
					product_l_diag *= element[a+i][19-b-i]
			if product_across > running:running = product_across
			if product_down > running:running = product_down
			if product_r_diag > running:running = product_r_diag
			if product_l_diag > running:running = product_l_diag
	return running

print find_prod(4)