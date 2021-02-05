#include <stdio.h>

revstr(char* str,int len){
    int straddress = len -1 ;
    while(straddress >=0 ){
        printf("%c", *(str+straddress));
        straddress -- ;
    }
}
int main(){
    char str[] = "Vishal";
    int length = strlen(str);
    printf("%s \n",str);
    revstr(str,length);
    
    
}
