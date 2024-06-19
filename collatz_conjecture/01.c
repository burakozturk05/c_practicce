#include <stdio.h>

int collatz(int n)
{
    while( n!= 1)
    {
        printf("%d ", n);
    if(n % 2 == 0)
    {
        n /= 2;
                }else{
                    n = (n *3) + 1;
                }
                printf("%d\n",n);
            }
        }

int main(){
    int n = 12;
    collatz(n);
    return 0;
}