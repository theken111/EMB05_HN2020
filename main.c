#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<stdint.h>

int main() {
    FILE *fp;
    uint16_t sector=512;
    uint8_t buff[sector];
    fp=fopen("floppy.img","rb");

    if(fp == NULL)
    {
       printf("Error!");
       exit(1);
    }

    fread(buff, 1, sector, fp);
    printf("1 : %x\n", buff );
/*
    fread(buff, 1, 100, fp);
    printf("2 : %s\n", buff );
    fread(buff, 1, 100, fp);
    printf("3 : %s\n", buff );
    fread(buff, 1, 100, fp);
    printf("4 : %s\n", buff );
*/

    fclose(fp);
    return 0;
}
