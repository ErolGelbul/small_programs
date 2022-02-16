#Python - Small Project By Erol Gelbul - FizzBuzz


for val in range(1, 100):

	if val%3 == 0 and val%5 == 0:
		print("FizzBuzz")
	elif val%5 == 0:
		print("Buzz")
	elif val%3 == 0:
		print("Fizz")
	else:
		print(val)


