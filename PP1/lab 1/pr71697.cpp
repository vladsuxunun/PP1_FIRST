// problem 71697

#include <iostream>

using namespace std;

int main () {

int n,k;

cin >> n >> k;

cout << n + (k / 100) + (k % 10);

return 0;


}