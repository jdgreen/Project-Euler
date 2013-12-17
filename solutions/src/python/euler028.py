def corners(start,rank):
	return sum(range(start, start+rank*4, rank))

print corners(13, 4)

def spiral(max_rank=1001):
	tot, rank , step = 1, 2, 3
	while rank <= max_rank:
		tot += corners(step, rank)
		step += rank*4+2
		rank += 2
	return tot

print spiral()