#include <windows.h>
#include <iostream>
 
using namespace std;
 
void hanoiTowers(int quantity, int from_rod, int to_rod, int buffer){
        if (quantity != 0){
                hanoiTowers(quantity-1, from_rod, buffer, to_rod); 
                cout << from_rod << " -> " << to_rod << endl; 
                hanoiTowers(quantity-1, buffer, to_rod, from_rod);
        }
}

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int start_rod = 1, destination_rod = 3, buffer_rod = 2, plate_quantity;
    cout << "Количество дисков:" << endl;
    cin  >> plate_quantity;
 
    hanoiTowers(plate_quantity, start_rod, destination_rod, buffer_rod);
    return 0;
}