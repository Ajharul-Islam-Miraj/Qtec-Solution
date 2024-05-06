## code explanation

I sorted the array using qsort build-in function. compare function is a part of that function that returns the differences between two elements to determine the bigger number.

I used binary search here for searching the targetted elements to the array. We know the logic that binary search measures the mid-value and checks whether the targetted value is greater or smaller than the mid-value. if the targetted value is greater than the mid value then mid is changed to lower value -1.

if the value is not found in the array then it will return the last index number where the targetted value should be inserted.
