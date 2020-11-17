#include<bits/stdc++.h>
using namespace std;

pair<long long int, long long int> binarySearch(vector<vector<long long int> > matrix, long long int i, long long int j_low, long long int j_high, long long int targetValue){
  while(j_low <= j_high){
    long long int j_mid = (j_low + j_high) / 2;
    if(matrix[i][j_mid] == targetValue)
      return make_pair(i, j_mid);
    else if(matrix[i][j_mid] > targetValue)
      j_high = j_mid - 1;
    else
      j_low = j_mid + 1;
  }
  return make_pair(-1, -1);
}

pair<long long int, long long int> locationOfTargetValue(long long int rowCount, long long int columnCount, vector<vector<long long int> > matrix, long long int targetValue){
  if(rowCount == 1)
      return binarySearch(matrix, 0, 0, columnCount-1, targetValue);

  long long int i_low = 0;
  long long int i_high = rowCount - 1;
  long long int j_mid = columnCount / 2;

  // Binary search in middle column

  while ((i_low + 1) < i_high){
    long long int i_mid = i_low + (i_high - i_low) / 2;

    if(matrix[i_mid][j_mid] == targetValue)
      return make_pair(i_mid, j_mid);

    else if (matrix[i_mid][j_mid] > targetValue)
      i_high = i_mid;

    else
      i_low = i_mid;
  }

  // If element is present on the mid of the two rows

  if (matrix[i_low][j_mid] == targetValue)
    return make_pair(i_low, j_mid);

  else if (matrix[i_low + 1][j_mid] == targetValue)
    return make_pair(i_low + 1, j_mid);

  // Ssearch element on 1st half of 1st row
  else if (targetValue <= matrix[i_low][j_mid-1])
    return binarySearch(matrix, i_low, 0, j_mid-1, targetValue);

  // Search element on 2nd half of 1st row
  else if (targetValue >= matrix[i_low][j_mid + 1] && targetValue <= matrix[i_low][columnCount - 1])
     return binarySearch(matrix, i_low, j_mid + 1, columnCount - 1, targetValue);

  // Search element on 1st half of 2nd row
  else if (targetValue <= matrix[i_low + 1][j_mid - 1])
    return binarySearch(matrix, i_low + 1, 0, j_mid - 1, targetValue);

  // search element on 2nd half of 2nd row
  else
    return binarySearch(matrix, i_low + 1, j_mid + 1, columnCount - 1, targetValue);
}

int main()
{
    long long int n = 4, m = 5, x = 8;
    vector<vector<long long int> > matrix (n, vector<long long int>(m, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cin >> matrix[i][j];
    }

    pair<int, int> sol = locationOfTargetValue(n, m, matrix, x);
    cout << sol.first << " " << sol.second << endl;
    return 0;
}


0 6 8 9 11
20 22 28 29 31
36 38 50 61 63
64 66 100 122 128
