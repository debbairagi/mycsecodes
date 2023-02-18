def merge(customList, l, m, r):
    # Dividing
    # l = first, m = middle, r = last
    n1 = m - l + 1 # First Subarray
    n2 = r - m # Second Subarray

    L = [0] * (n1) # First Array
    R = [0] * (n2) # Second Array

    # Copy the elements to the first Subarray
    for i in range(0, n1): 
        L[i] = customList[l+i]
    
    # Copy the elements to the Second Subarray
    for j in range(0, n2):
        R[j] = customList[m+1+j]
    
    i = 0 # Initial index of First Subarray
    j = 0 # Initial index of Second Subarray
    k = l # Initial index of merge Subarray

    # Merging
    while i < n1 and j < n2:
        if L[i] <= R[j]:
            customList[k] = L[i]
            i += 1
        else:
            customList[k] = R[j]
            j += 1
        k += 1
    while i < n1:
        customList[k] = L[i]
        i += 1
        k += 1
    
    while j < n2:
        customList[k] = R[j]
        j += 1
        k += 1

def mergeSort(customList, l, r):
    if l < r:
        m = (l+(r-1))//2
        mergeSort(customList, l, m)
        mergeSort(customList, m+1, r)
        merge(customList, l, m, r)
    return customList

cList = [4, 8, 7, 2, 11, 1, 3]
print(f"Sorted array is : {mergeSort(cList, 0, 6)}")