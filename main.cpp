#include <iostream>
#include "matrix.cpp"
#include "dijkstra.cpp"
#include "recursive.cpp"
#include <time.h>
#include <chrono>
using namespace std;

int main(){
        int ejemplo;
        cout<<"Elija un experimento: ";
        cin>>ejemplo;
        cout << endl;
        fill_matrix();
        print_matrix();
//test 1
        auto start= chrono::steady_clock::now();
        calcular_dij(0,DIM-1);
        auto end= chrono::steady_clock::now();
        double elapsed_time = double(chrono::duration_cast<chrono::nanoseconds>(end-start).count());
        cout << elapsed_time << " " << "nanoseconds in test 1" << endl;

//test 2
        auto start2= chrono::steady_clock::now();
        calcular_rec();
        auto end2= chrono::steady_clock::now();
        double elapsed_time2 = double(chrono::duration_cast<chrono::nanoseconds>(end2-start2).count());
        cout << elapsed_time2 << " " << "nanoseconds in test 2" << endl;

        return 0;
}

