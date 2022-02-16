// Given a set of N jobs where each jobs(i) has a deadline and profit with it.
// Profit is earned if and only if the job is completed by it's deadline.
// Find number of jobs done and max profit.
// Jobs are given in the question as per the format - (Job(id), Deadline, Profit)

#include<iostream>
#include<algorithm>
using namespace std;

struct Job{

    int profit;
    int dead;
    char id;
};

bool profit(Job a, Job b){
    return(a.profit>b.profit);
}

pair<int,int> jobScheduling(JOb arr, int n){
    sort(arr,arr+n,comparison);
    int maxi = arr[0].dead;
    for(int i =0;i<n;i++){
        maxi = max[maxi, arr[i].dead];
    }
    int slot[maxi+1];
}


for(int i =0; i<=maxi;i++){
    slot[i] = -1;
}

int countJobs = 0;
int jobProfit = 0;

for(int i =0;i<n;i++){
    for(int j = arr[i].dead;j>0;j--){
        if(slot[i]==-1){
            slot[i] = i;
            countJobs++;
            jobProfit += arr[i].profit;
            break;
        }
    }
}
return maxe_pair(countJobs, jobProfit);