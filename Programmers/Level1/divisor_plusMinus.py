def divisor(num):
    count = 0
    if num == 1:
        return 1
    for i in range(2,num):
        if num%i == 0:
            count+=1
        
    return count+2

def solution(left, right):
    answer = 0
    for i in range(left,right+1):
        if divisor(i)%2 == 0:
            answer += i
        else:
            answer -= i
            
    return answer