#include<stdio.h>
int main(int argc, char *argv[]){
FILE *fs;
int i;
for(i=1;i<argc;i++){
fs = fopen(argv[i],"w");
fclose(fs);
return 0;
}
