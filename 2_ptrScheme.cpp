#include <iostream>

using namespace std;
int main(){
    /*double **p = new double*;
    *p = new double;
    **p = 2.0;
    cout << **p << endl;
    free(p);
    return 0;*/
    double** t = 0;
    t = new double *(new double(2)); 

    cout<< **t <<endl;
    cout<< *t <<endl;
    cout<< t << endl;

    free(*t);

    cout<< **t <<endl;
    cout<< *t <<endl;
    cout<< t << endl;


/*
    double **p2;
    double *p1;
    double v = 2;

    p1 = (double*)malloc(sizeof(double));
    p2 = (double**)malloc(sizeof(double*));

    p1 = &v;
    p2 = &p1;

    free(p1);
    return 0;*/
    
    //cout << sizeof(double)<< endl;
    //cout<<sizeof(double*)<<endl;

}
/*
    double **p2;
    double *p1;
    double v = 2;
    sizeof


*/