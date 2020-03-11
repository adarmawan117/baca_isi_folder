#include <stdio.h>
#include <dirent.h>

int main(void){
    struct dirent *de;

    DIR *dr = opendir("coba");
    if(dr == NULL){
        printf("Tidak bisa membuka direktory sekarang!\n");
        return 1;
    }

    while((de = readdir(dr)) != NULL)
        if((strcmp(de->d_name, ".") != 0) && (strcmp(de->d_name, "..") != 0))
            printf("%s\n",de->d_name);
    closedir(dr);

    return 0;
}
