#include<stdio.h>
int main(int argc, char *argv[]){
FILE *fs;
int i;
for(i=1;i<argc;i++){
fs = fopen(argv[i],"w");
fclose(fs);
printf("%d New file(s) created!\n", argc-1);

}
return 0;
}

