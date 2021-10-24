#include <iostream>
#include <time.h>
#include <cmath>
#include <conio.h>

using namespace std;

long long int iterationsPerTenSecs() {
    long long int i = 0;
    cout << "Start" << endl;
    clock_t startTime = clock();
    while((clock() - startTime) / CLOCKS_PER_SEC < 10) {
        float result = i * 3 + sin(i) * (i * 3 + sin(i));
        i++;
    }
    return i;
}

int main ()
{
    cout << iterationsPerTenSecs();
    getch();
    return 0;
}
