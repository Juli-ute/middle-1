#include <iostream>
using namespace std;

long long itc_rev_bin_num(long long number){
long long num = 0;
long long s = 0;
long long a = 0;
int f = 1;
while(number != 0){
        while (s+a > 0){
            f = f*2;
            s--;
        }
        num = num + ((number%10)*f);
        number = number/10;
        a++;
}
return num;
}
