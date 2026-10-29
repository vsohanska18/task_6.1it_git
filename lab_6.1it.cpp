#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int main(){
    const int n = 20;
    int p[n];
    int i = 0;
    int low = -20;
    int high = 34;
    int found = 0;
    int sum = 0;
    srand((unsigned)time(NULL));

    cout << "Початковий масив: " << endl;
    for(i = 0; i < n; i++){
        p[i] = low + rand() % (high - low + 1);
    }

    for(i=0; i < n; i++){
        cout << setw(4) << p[i];
    }
    cout << endl;

    cout << "Від'ємні парні числа: " << endl;
    for(i=0; i<n; i++){
        if (p[i] % 2 == 0 && p[i] < 0){
            cout << p[i] << " ";
            found ++;
            sum += p[i];
            p[i] = 0;
        }
    }
    cout << endl;

    cout << "Знайдені числа = " << found << endl;
    cout << "Сума = " << sum << endl;

    cout << "Масив після заміни: " << endl;
    for(i=0; i < n; i++){
        cout << setw(3) << p[i] << " ";
    }
    cout << endl;

    return 0;
}
