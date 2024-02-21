#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void frame(int size);
int main(){
    frame(8);
    return 0;
}
void frame(int size){
    srand((unsigned )time(NULL));
    int x = (rand() % (2 * size - 2) ) + 2 ;
    int y = (rand() % (size + (size / 3) - 2)) + 2 ;
    for (int i = 1; i <= (size + (size / 3)); i++){
        for (int j = 1; j <= 2 * size; j++){
            if ((i == y) && (j == x) ){
                cout << "F";
            }
            else if ((i == 1) || (i == (size + (size / 3)) || (j == 1) || (j == 2 * size))){
                cout << "#";
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }
    cout << x;cout << endl;
    cout << y;
}

