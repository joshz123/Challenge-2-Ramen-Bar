#include <iostream>
using namespace std;
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD

int ramenChallenge(int rounds, int space, int *groups, int number_of_groups) {
    int temp_sum = 0;
    int sum = 0;
    int index = 0;
    int round_counter = 0;
    int index_increases = 0;
    while (round_counter <
           rounds) { //todo account for case where the same person cannot eat 2x in one round
        if (index_increases >= number_of_groups) {//todo comment adn explain the code
            index_increases = 0;
            round_counter++;
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

=======
>>>>>>> parent of cca4f28... First iteration of the function
=======
>>>>>>> parent of cca4f28... First iteration of the function
=======
>>>>>>> parent of cca4f28... First iteration of the function
int main() {
    cout << "Hello, World!" << std::endl;
    return 0;
}