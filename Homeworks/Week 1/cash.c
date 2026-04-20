#include <stdio.h>
int main(){

int N;
printf("Write any number:");
scanf("%d",&N);
for(int i = 0;i <= N;i++){
    if(i % 5 == 0 && i % 2 == 0){
        printf("%d\n",i);
    }
}



return 0;




}
