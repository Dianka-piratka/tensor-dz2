#include <cstdio>
struct elements{
    float elmnt[1024];
};
int rec(elements elm, int i){
    i++;
    printf("Itteration No: % i \n", i);
    rec(elm,i);
    return 0;

}
 int main(){
     elements elm;
     int i=0;
     rec(elm, i);
     return 0;
 }
