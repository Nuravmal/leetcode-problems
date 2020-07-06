Prison Cells After N Days


There are 8 prison cells in a row, and each cell is either occupied or vacant.

Each day, whether the cell is occupied or vacant changes according to the following rules:

If a cell has two adjacent neighbors that are both occupied or both vacant, then the cell becomes occupied.
Otherwise, it becomes vacant.
(Note that because the prison is a row, the first and the last cells in the row can't have two adjacent neighbors.)

We describe the current state of the prison in the following way: cells[i] == 1 if the i-th cell is occupied, else cells[i] == 0.

Given the initial state of the prison, return the state of the prison after N days (and N such changes described above.)



Example 1:

Input: cells = [0,1,0,1,1,0,0,1], N = 7
Output: [0,0,1,1,0,0,0,0]
Explanation:
The following table summarizes the state of the prison on each day:
Day 0: [0, 1, 0, 1, 1, 0, 0, 1]
Day 1: [0, 1, 1, 0, 0, 0, 0, 0]
Day 2: [0, 0, 0, 0, 1, 1, 1, 0]
Day 3: [0, 1, 1, 0, 0, 1, 0, 0]
Day 4: [0, 0, 0, 0, 0, 1, 0, 0]
Day 5: [0, 1, 1, 1, 0, 1, 0, 0]
Day 6: [0, 0, 1, 0, 1, 1, 0, 0]
Day 7: [0, 0, 1, 1, 0, 0, 0, 0]

Example 2:

Input: cells = [1,0,0,1,0,0,1,0], N = 1000000000
Output: [0,0,1,1,1,1,1,0]


Note:
The most naive approach of the solution will be, running a loop for N times and
changing the position of cells after every iteration and then storing it in a
temporary list. But considering the fact N is very large (N<=10^9) this solution will produce an error TLE.
But as we have just 8 cells out of which 1st and the last cell will always be 0 after
 the first day, we need to find the permutations of the rest of the cells, which will
 be a fixed number of patterns. The cells start following a pattern after every 15 days,
  so instead of running a while loop for N, run it on "(N-1)%14 +1".




class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {

        vector<int>result(cells.size(),0);
        int j=0;

        N=(N-1)%14 +1;

        while(j<N)
        {
            for(int i=1;i<cells.size()-1;i++)
            {
                 if(cells[i-1]==cells[i+1])
                {
                    result[i]=1;
                }
                else
                {
                    result[i]=0;
                }

            }
             cells=result;
            j++;
        }
        return result;
    }
};
