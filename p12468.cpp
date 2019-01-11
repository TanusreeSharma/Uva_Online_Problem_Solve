
//  main.cpp
//  zapping
/*  The problem is changing channel on tv using up and down button. 
    So there are only 2 directions. We are to find the least key press from given channel1  to Channel2  in any direction. 
    The output should be the least number of key pressed. 
    program will keep running until it find two -1. 
    There will be two input per line, ranging within 0 to and including 99 ( 0<= a,b <=99 ).
    For example: 20  90; if press the up, it will take 70 press to reach but if  down key it will only take 30 press. 
    there is 0 to 99 channel mentioned. The answer should be 30 because the problems wants the least number of key presses.*/

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int x, y, z, w, max, min;
    while(scanf("%d %d", &x, &y) == 2)
    {
        if (x == -1 && y == -1)
            break;
        max = (x>y)?x:y;
        min = (x<y)?x:y;
        z = max-min;
        w =(99-max)+(min+1);
        if(z>w)
            printf("%d\n", w);
        else printf("%d\n", z);
        
    }
    return 0;
    
    
}
