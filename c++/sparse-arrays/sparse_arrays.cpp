#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'matchingStrings' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. STRING_ARRAY strings
 *  2. STRING_ARRAY queries
 */

vector<int> matchingStrings(int n, int q, vector<string> strings, vector<string> queries) {
    vector<int> result_vector(q, 0);
    
    for (int query=0; query < q; query++){
        
        int count = 0;
        
        for (int string=0; string < n; string++){
            if (strings[string] == queries[query]) count++;
        }
        
        result_vector[query] = count;
    }
    
    return result_vector;
}
