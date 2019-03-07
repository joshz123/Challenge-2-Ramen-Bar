#include <iostream>

using namespace std;

int ramenChallenge(int rounds, int space, int *groups, int number_of_groups) {
    int temp_sum = 0;
    int sum = 0;
    int index = 0;
    int round_counter = 0;
    int index_counter = 0;
    while (round_counter < rounds) {
        //todo change the algorithm to simplify the conditionals. use a variable but with less if statements
        //todo account for case where the same person cannot eat 2x in one round
        sum += groups[index];
        temp_sum += groups[index];
        if(temp_sum>space||index_counter==number_of_groups){
            temp_sum = groups[index];
            round_counter++;
            index_counter=0;
        }
        if(index <number_of_groups-1)
            index++;
        else
            index=0;
        index_counter++;
    }
    if(index!=0)
        sum-=groups[index-1];
    else
        sum-=groups[number_of_groups-1];
    return sum;
}

int main() {
    int array1[10] = {2, 4, 2, 3, 4, 2, 1, 2, 1, 3};
    int array2[1] = {1};
    int array3[4] = {1, 4, 2, 1};
    int array4[2] = {1,2};
    int array5[11]= {43,34,39,11,22,35,46,59,16,13,34};

    cout << ramenChallenge(4, 6, array3, 4) << endl;
    cout << ramenChallenge(100, 10, array2, 1) << endl;
    cout << ramenChallenge(5, 5, array1, 10) << endl;
    cout << ramenChallenge(100000000, 2, array4, 2) << endl;
    cout << ramenChallenge(1000000, 200, array5, 11) << endl;


}