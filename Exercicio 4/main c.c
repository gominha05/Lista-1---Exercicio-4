#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int a2;
    int b;
    int c;
    int d;
    int R;

    printf("Digite dois numeros inteiros e positivos");
    scanf("%d %d",&b,&c);

    for(a=1;a>0;a++){
        R = (b*a)%c;
        if(R == 0) break;
    }
    printf("O MMC entre %d e %d e: %d\n",b,c,b*a);
    system("Pause.");

    if(b>c){
        d=b;
        b=c;
        c=d;
    }
    for(a2=b;a2>1 && !(b%a2==0 && c%a2==0);a2--){

    }
    printf("MDC %d\n",a2);

    return 0;


}




