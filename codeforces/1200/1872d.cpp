#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

/* 
    given an array of elements from 1 to n
    you can re-arrange the elements however you like
    given two integers x and y
    for all indices i, where i is a multiple of x (ie 0, 1x, 2x, 3y, ...)
    for all indices j, where j is a multiple of y (ie 0, 1y, 2y, 3y, ...)
    we would like to find the maximim possible "score"
    score is the sum(all arr[i]) - sum(all arr[j])
*/
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    /*
        break the problem into its components pertaining to score
        arr[ix], arr[jy], arr[ix=jy]
        how does each contribute to the score ?
            arr[ix] increases the score
            arr[jy] decreases the score
            arr[ix=jy] either adds to, or does nothing (adds 0)
        to maximize score
            maximize values on ix
            minimize values on jy
            don't worry about instances of ix=jy
        the simple solution is to place max values on all ix, and all min values on jy
        add all the values at each ix, subtract all the values on jy
        the problem lies in the contraints
        you can't create an array size 10e9 given 256MB
        you can't perform 10e9 addition operations in 1s without TLE
        how else can you implement this ?

        hint 1
        arithmetic sum = n * (left + right) / 2; O(1)
        observe the elements you are adding together 
        you are performing sum on an arithmetic progression
        now the problem becomes finding the values to perform the sum on

    */
        
}





































































