#include <iostream>

using namespace std;

int ramenChallenge(int rounds, int space, int *groups, int number_of_groups) {
    int temp_sum = 0;
    int sum = 0;
    int index = 0;
    int round_counter = 0;
    int index_increases = 0;
    while (round_counter <
           rounds) { //todo account for case where the same person cannot eat 2x in one round
        if (index_increases >= number_of_groups) {
            index_increases = 0;
            continue;
        }
        if (space >= (groups[index] + temp_sum)) {
            temp_sum += groups[index];
            if (index < number_of_groups - 1) {
                index++;
                index_increases++;
            } else if (index == number_of_groups - 1) {
                index_increases++;
                index = 0;
            }


        } else if (space < groups[index] + temp_sum) {
            sum += temp_sum;
            temp_sum = 0;
            round_counter++;

        }


    }
    return sum;
}

int main() {
    int array1[10] = {2, 4, 2, 3, 4, 2, 1, 2, 1, 3};
    int array2[1] = {1};
    int array3[4] = {1, 4, 2, 1};

    cout << ramenChallenge(4, 6, array3, 4) << endl;
    cout << ramenChallenge(100, 10, array2, 1) << endl;
    cout << ramenChallenge(5, 5, array1, 10) << endl;


}