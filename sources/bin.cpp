#include "bin.h"
#include "cmath"
int bin(int a){
    int res=0;
    int i=0;
    while (a > 0 ){
        res+=pow(10,i)*(a % 2);
        i++;
        a = a/2;
    }
    return res;
}