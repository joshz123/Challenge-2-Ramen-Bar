#include <iostream>

using namespace std;

/* the insight in this problem was that Queues were unnecessary as you were always progressing through the list linearly and as long as you keep track of the rounds as they pass
 * there is no reason to move around items but it is cleaner and easier to keep track of indices and rounds as they pass.
 * This makes the complexity O(n) as you are only ever counting over as many numbers
 * as you need to add and there are no wasted passes or operations*/
int ramenChallenge(int rounds, int space, int *groups, int number_of_groups) {
    int temp_sum = 0;
    // this will keep track of the temporary sum. ex: the numbers we add in a given round/group size before the line for ramen fills
    int sum = 0;
    // this is the sum of the money the ramen bar makes at 1 dollar per person
    int index = 0;
    // this is the index in the list that we iterate through
    int round_counter = 0;
    // this will keep track of how many calls to ramen have passed. i.e the rounds or R value
    int index_counter = 0;
    // this will keep track of the number of times the index is incremented as the same person cannot eat twice in a round
    while (round_counter < rounds) {
        sum += groups[index % number_of_groups];
        // add the first group to the money sum
        temp_sum += groups[index % number_of_groups];
        // the temporary sum is updated as well
        if (temp_sum > space || index_counter == number_of_groups) {
            // to prevent the same person from eating 2x or more or overfilling  we use a conditional
            temp_sum = groups[index % number_of_groups];
            // the temporary sum is set to the index that we are currently adding
            round_counter++;
            // the call to ramen is complete the the round counter is incremented
            index_counter = 0;
            //since the round is complete everyone can eat again so the index counter is reset
        }
        index++;
        index_counter++;
        // incremented after every pass
    }
    if (index % number_of_groups != 0)
        //this if else subtracts the last block that was added as the final pass is technically an overfilled line so must be corrected for
        sum -= groups[index % number_of_groups - 1];
    else
        sum -= groups[number_of_groups - 1];
    return sum;
}

int main() {
    int array1[10] = {2, 4, 2, 3, 4, 2, 1, 2, 1, 3};
    int array2[1] = {1};
    int array3[4] = {1, 4, 2, 1};
    int array4[2] = {1, 2};
    int array5[11] = {43, 34, 39, 11, 22, 35, 46, 59, 16, 13, 34};

    cout << ramenChallenge(4, 6, array3, 4) << endl;
    cout << ramenChallenge(100, 10, array2, 1) << endl;
    cout << ramenChallenge(5, 5, array1, 10) << endl;
    cout << ramenChallenge(100000000, 2, array4, 2) << endl;
    cout << ramenChallenge(1000000, 200, array5, 11) << endl;
    //as you can see the algorithm is blazing quick


}