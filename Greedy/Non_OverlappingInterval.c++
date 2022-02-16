// We are given with an array of intervals with Intervals[i]=[starti,endi]
// We need to return minimum number of intervals that needs to get remove to make rest of intervals non overlapping.

// Intervals = [[1,2],[2,3],[3,4],[1,3]]
// Output : 1
// Explanation - [0,3],[2,6],[4,6],[6,8]
// Remove - [2,6]

#include <iostream>
using namespace std;

struct interval{
    int start, end;
};

  int nonOverlapping(vector<int>& a){
      sort(a.begin(),a.end())
      int n = a.size();
      int count = 0;
      int right = 0;                   
      int left = 0;

      while(right<n){
          if(a[left][1]<=a[right][0]){                    //Overlapping case 1
              left = right;
              right++;
          }
          else if(a[left][1]<=a[right][1]){                // overlapping case 2
              count += 1;
              right += 1
          }
          else if(a[left][1]>=a[right][1]){                 //overlapping case 3
              count +=1;
              left = right;
              right += 1;
          }
      }
      return count;
  }