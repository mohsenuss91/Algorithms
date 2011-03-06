# Redouane <unrealdz@gmail.com>
# Bubble Sort a given list



def BubbleSort(list):
    """ bubble sorts and returns the given list """
    i=0
    while i<len(list) - 1:
        if list[i] > list[i+1]:
            tmp = list[i]
            list[i] = list[i+1]
            list[i+1] = tmp
            i=0
        else:
            i +=1
    return list
    



x = [5,3,19,2,100,1]

print x
print BubbleSort(x) 