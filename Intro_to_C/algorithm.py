# 1 - Write a python script that could take an array of a file as an input
# 2 - Sort it
# 3 - Calculate the mean
# 4 - Calculate median
# 5 - Calculate standard deviation without using built-in library functions beside square root.

import math 

def read_array_from_file(filename):
    with open(filename, 'r') as file:   # reads file using 'r'
        content = file.read()   # reads contents of file
        split_content = content.split(',')   # splits into list of strings using ','
        array = [float(x) for x in split_content]   # Converts each string in the list to an integer and create a new list
    return array


def sort_array(array):   # uses array as input
    sorted_array = sorted(array)   # sorts array using sorted()
    return sorted_array


def calculate_mean(array):
    mean = sum(array) / len(array)   # mean = sum of numbers / number of nums
    return mean


def calculate_median(array):
    sorted_array = sort_array(array)   # call sort_array func from above
    array_len = len(sorted_array)   # counts num of arrays
    
    # If the array length is even, take the average of the middle two elements
    if array_len % 2 == 0:
        middle1 = sorted_array[array_len // 2 - 1]   # gets element before middle
        middle2 = sorted_array[array_len // 2]   # gets element at the middle
        median = (middle1 + middle2) / 2   # gets average of middle elements
    else:
        # If the length is odd, take the middle element
        median = sorted_array[array_len // 2]   # gets middle element 

    return median

def calculate_standard_deviation(array):
    mean = calculate_mean(array)
    n = len(array)
    sum_squared_diff = sum((x - mean) ** 2 for x in array)   # Calculate the sum of squared differences from the mean
    variance = sum_squared_diff / n   # Calculate the variance
    standard_deviation = math.sqrt(variance)   # Calculate the standard deviation as the square root of the variance

    return standard_deviation


# Example usage:
filename = '/path/to/file/file_name'
input_array = read_array_from_file(filename)
sorted_array = sort_array(input_array)
mean_value = calculate_mean(input_array)
median_value = calculate_median(input_array)
std_deviation_value = calculate_standard_deviation(input_array)

print("Input Array:", input_array)
print("Sorted Array:", sorted_array)
print("Mean:", mean_value)
print("Median:", median_value)
print("Standard Deviation:", std_deviation_value)
