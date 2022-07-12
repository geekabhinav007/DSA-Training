# program to Reverse an array
def reverseArray(array):
    reversed_array = []
    for i in range(1,len(array)+1):
        reversed_array.append(array[-i])
    return reversed_array

if __name__ == '__main__':
    listCumArray = [4,5,9,6,1,4,3,8,7,6,5]
    reversed_list = reverseArray(listCumArray)
    print(reversed_list)