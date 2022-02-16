#Python - Small Project By Erol Gelbul - Highest Score


student_scores = [78, 92, 89, 86, 55, 91, 64, 89]

highest = 0
for score in student_scores:
	current_score = score
	if current_score > highest:
		highest = current_score
		

print(highest) 