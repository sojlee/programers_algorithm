def solution(array, commands):
    answer = []
    
    for com in commands:
        temp = array[com[0] - 1:com[1]]
        for i in range(len(temp)):
            min = i
            for j in range(i+1, len(temp)):
                if temp[min] > temp[j]:
                    min = j
            temp[i], temp[min] = temp[min], temp[i]
        answer.append(temp[com[2]-1])    
        
    return answer
