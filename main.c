#include <stdio.h>
#include "my_mat.h"

int main(){
    char select;
    scanf("%c",  &select);
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
        scanf("%c",&select);
    }
    
    return 0;
}
