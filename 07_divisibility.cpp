#include <iostream>
#include <time.h>

int simple_2(int a){
    return a%2;
}

int binary_2(int a){
    return (a&1);
}

int main(){
    clock_t start1, start2, stop1, stop2;
    long int n;
    bool tf1, tf2;

    start1 = clock();
    
    for (n = 0; n < 100000000; n++){
        //n%2;
        simple_2(n);
    }
    stop1 = clock();

    std::cout << "Время %: " << 1000.0 * (double)(stop1 - start1) / CLOCKS_PER_SEC << std::endl;

    start2 = clock();
    for (n = 0; n < 100000000; n++){
        binary_2(n);
        //n&1;
    }
    stop2 = clock();

    std::cout << "Время &: " << 1000.0 * (double)(stop2 - start2) / CLOCKS_PER_SEC << std::endl;

    std::cout << (1 - ((double)(stop1 - start1)/CLOCKS_PER_SEC)/((double)(stop2 - start2)/CLOCKS_PER_SEC))*100 << std::endl;

    //std::cout << "время %: " << time1 << std::endl <<"время &: " << time2 << std::endl;

    //std::cout << (1 - time1/time2)*100 << std::endl;

    return 0;
}
