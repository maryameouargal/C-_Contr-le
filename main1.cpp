#include <iostream>
using namespace std;

// J'ai ajouté le & devant b pour que y soit aussi modifié
void modifier(int &a, int &b) {
    a += 5;
    b += 10;
}

int main() {
    int x = 10, y = 20;
    modifier(x, y);
    cout << x << " " << y << endl; 
    return 0;
}