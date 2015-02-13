def fib(n)
	nums = [1, 2]
	i = 0
	while i < n-2
		a = nums[i]
		b = nums[i + 1]
		c = a + b
		nums.push(c)
		i += 1
		end
	return nums.max
	end
	

x = 2
nums2 = []
while x < 34
	if fib(x) % 2 == 0
		nums2.push(fib(x))
		end
	x += 1
	end
puts nums2.inject{|sum,x| sum + x }