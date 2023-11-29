# 1) Write a python script that could take an array of a file as an input
# 2) Sort it
# 3) Calculate the mean
# 4) Calculate median
# 5) Calculate standard deviation without using built-in library functions beside square root.

import math


def read_array_from_file(filename):
    with open(filename, 'r') as file:
        content = file.read()
        split_content = content.split()
        array = [int(x) for x in split_content]
    return array


# def bubble_sort(arr):
#     n = len(arr)
#     for i in range(n):
#         for j in range(0, n-i-1):
#             if arr[j] > arr[j+1]:
#                 arr[j], arr[j+1] = arr[j+1], arr[j]
#     return arr
#
#
# def calculate_mean(arr):
#     return sum(arr) / len(arr)
#
#
# def calculate_median(arr):
#     n = len(arr)
#     if n % 2 == 0:
#         mid1 = arr[n//2]
#         mid2 = arr[n//2 - 1]
#         median = (mid1 + mid2) / 2
#     else:
#         median = arr[n//2]
#     return median
#
# def calculate_standard_deviation(arr, mean):
#     squared_diff_sum = sum((x - mean) ** 2 for x in arr)
#     variance = squared_diff_sum / len(arr)
#     std_dev = math.sqrt(variance)
#     return std_dev
#
#
# # Replace 'your_file.txt' with the actual file name
# file_array = read_array_from_file('your_file.txt')
#
# # Sort the array
# sorted_array = bubble_sort(file_array)
#
# # Calculate mean, median, and standard deviation
# mean_value = calculate_mean(sorted_array)
# median_value = calculate_median(sorted_array)
# std_dev_value = calculate_standard_deviation(sorted_array, mean_value)
#
# # Print the results
# print(f"Sorted Array: {sorted_array}")
# print(f"Mean: {mean_value}")
# print(f"Median: {median_value}")
# print(f"Standard Deviation: {std_dev_value}")
