#ifndef SIGNITURES_H
#define SIGNITURES_H

//struct to check for a beggining of a file
struct checker
{
    
};

//struct if signitures for file starters
static const struct checker Signitures[] ={
    {{0xFF, 0xD8, 0xFF}, 3, "jpg"},
    {{0x89, 0x50, 0x4E, 0x47}, 4, "png"},
    {{0x25, 0x50, 0x44, 0x46}, 4, "pdf"},
    {{0x50, 0x4B, 0x03, 0x04}, 4, "zip"}
};




#endif