#include <stdio.h>
#include "my_mat.h"

int main(){
    int select;
    scanf("%d",  &select);
    while(select!='D'){
        if(select=='A'){
            funcA();
        }
        else if(select=='B'){
            funcB();
        }
        else if(select=='C'){
            funcC();
        }
        scanf("%d",&select);
    }
}