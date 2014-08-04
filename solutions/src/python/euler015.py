#Can easily generalise to a rectangle but not in this case
def square(grid_size):
	big = 1
	small = 1
	inter = 1
	for value in range(2,grid_size*2+1):
		if value <= grid_size:
			small *= value
		big *= value
		if value <= grid_size:
			inter *= value
	big = big/(inter*small)
	return big

print square(20)

