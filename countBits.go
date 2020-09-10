func countBits(num int) []int {
	var res []int
	base := 1
	for i := 0; i <= num; i++ {
		if i == 0 {
			res = append(res, 0)
			continue
		} else if i == 1 {
			res = append(res, 1)
			continue
		}

		if i == base*2 {
			res = append(res, 1)
			base *= 2
			continue
		}
		res = append(res, 1+res[i-base])
	}
	return res
}