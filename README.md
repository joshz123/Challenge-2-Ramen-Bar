# Challenge-2-Ramen-Bar
A solution to the second challenge problem of MTE 140
Question is as follows:

CHALLENGE: A new innovative ramen bar (R4m3n) has opened in Waterloo. They're trying something new: they only make small samples of their ramen, and serve it at their bar. Each time a group of people go up, they're given the small bowl, and when they're done they re-queue at the back of the line until there is room at the bar again. Some people come alone, other as groups of friends which don't want to be broken up. Everyone who eats a bowl of ramen wants to each another one (it's addictive and too small!). A bowl costs $1 per person. You must design an algorithm that determines how much money R4m3n will make in one day based on the people in line.

At any one time, the restaurant bar can hold K people. People line up (queue) in groups. Groups come to the bar, one at a time in order, until there are no more people in line or there is no room for the next group. Then, ramen is served. Once everyone at the bar is finished, the people who just ate re-queue in the same order. The ramen bar serves ramen R times in a day.

For example, suppose R=4 and K=6, and there are four groups of people with sizes [1, 4, 2, 1]. On the first call, the first 2 groups [1,4] eat, leaving an empty seat (the group of 2 doesn't fit, and the group of 1 can't go ahead of them). They eat, then go back into line, which now looks like [2, 1, 1, 4]. On the second call, the bar will accommodate 4 people: [2, 1, 1]. Now the line looks like [4, 2, 1, 1]. The third time, it will accommodate 6 people: [4, 2]. Now the line looks like [1, 1, 4, 2]. Finally, the last call will accommodate 6 people: [1, 1, 4]. The bar made $21 today!

Design a function that takes in parameters R, K, and s (group sizes) and returns how much money the ramen bar makes:
  int ramen_challenge(int R, int K, int* s)

Consider the following input (R, K, s) and expected output:
4, 6, {1,4,2,1} --> 21
100, 10, {1} --> 100
5, 5, {2,4,2,3,4,2,1,2,1,3} --> 20

For 2/3 marks, design any algorithm that works regardless of efficiency. For 3/3 marks, design an efficient algorithm that will solve large datasets (1<R<10^8, 1<k<10^9, 1<N<1000, 1<g<10^7, where g is a group size) within a reasonable time.
