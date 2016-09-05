#include <stdio.h>

using namespace std;

class Loops{
    
    public:Loops(){}

    void makeSquareFor(int lado){
        for(int i = 0; i < lado; i++){
            for(int j = 0; j < lado; j++){
                printf("* ");
            }
            printf("\n");
        }
        printf("\n");
    }
    
    void makeSquareWhile(int lado){
        int i = 0;
        int j = 0;
        while(i < lado){
            while(j < lado){
                printf("* ");
                j++;
            }
            printf("\n");
            j = 0;
            i++;
        }
        printf("\n");
    }
};

