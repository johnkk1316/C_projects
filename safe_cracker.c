#include <stdio.h>

int main () 
{
    typedef struct {
    const char* description;
    float value;
} swag;

typedef struct {
    swag* swag;
    const char* sequence;
} combination;

typedef struct {
    combination numbers;
    const char* make;
} safe;

};
