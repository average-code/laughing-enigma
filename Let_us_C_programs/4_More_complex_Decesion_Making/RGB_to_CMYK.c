#include<stdio.h>
int main(){
    float rgb[3], white, cmyk[4];
    int i;
    printf("Enter colours R G B: ");
    for (i = 0; i < 3  ; i++)
    {
        scanf("%f", &rgb[i]);
    }
    if (rgb[0] >rgb[1] &&rgb[2]){
        white =rgb[0]/255;
    }
    else if (rgb[1] >rgb[0]&&rgb[2]){
        white =rgb[1]/255;
    }
    else if (rgb[2] >rgb[1] &&rgb[1]){
        white =rgb[2]/255;
    }
    for ( i = 0; i < 3; i++)
    {
        cmyk[i] = ((white - rgb[i]/255)/white);
    }
    cmyk[3] = 1 - white;
    printf("Values in C M Y K are: ");
    for ( i = 0; i < 4; i++)
    {
        printf("%f ", cmyk[i]);
    }
    return 0;
}