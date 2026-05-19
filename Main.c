#include <stdio.h>
#include <stdbool.h>
#include <immintrin.h>
#include "Signitures.h"


int main();
long int findSizeofDisk();
void readFiles(diskSize, byteTemp);
bool isSomething();

bool isComplete = false;



int main(){

    long int diskSize = findSizeofDisk();
    printf("We have %ld Bytes in the disk!\n", diskSize);

    __uint8_t temp[512];

    readFiles(diskSize, temp);

};

long int findSizeofDisk(){

    FILE *card = fopen("/dev/sdb","rb");

    fseek(card,0,SEEK_END);
    long int diskSize = ftell(card);
    fclose(card);
    return diskSize;
}

void readFiles(size, byteTemp){
    FILE *card = fopen("/dev/sdb","rb");

    while (fread(byteTemp, 1, 512, card) == 512){ //while reading file from 1st byte to 512nd byte. also make sure were actually reading the 512nd byte
        //TODO need to check. cant do a massive if else as thats ugly as anything
        //use struct of values
    }

}