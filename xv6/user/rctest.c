#include "types.h"
#include "user.h"
char buf[512];
int main(){
    int n;
    while((n=read(0,buf,sizeof(buf)))!=0){
        write(1, buf, n);
    }
    int readcount=getreadcount();
    printf(1, "readcount %d\n", readcount);
}