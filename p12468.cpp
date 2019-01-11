
//  main.cpp
//  zapping


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
