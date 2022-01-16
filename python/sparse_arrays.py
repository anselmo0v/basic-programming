#
# Complete the 'matchingStrings' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. STRING_ARRAY strings
#  2. STRING_ARRAY queries
#

def matchingStrings(strings, queries):
    # Write your code here
    sum_list = []
    for query in queries:
        true_cases = [query==string for string in strings]
        sum_list.append(sum(true_cases))
    
    return sum_list
