#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<bitset>


int size;
char line[16];
bool placeable[16][16];
int count= 0;

void Backtracking(int r, int c, int uD, int dD){
    if (r == size) {
        ++count;
        return;
        
    }
    
    int position = ((1 << size) -1);
    
    int p = position & ~(c | uD | dD);
    
    for (int s = 0; s < size; ++s)
    {
        if(((p >> s) & 1) && placeable[r][s])
        {
        
        Backtracking(r + 1, c | (1 << s),
                     (uD | (1 << s)) >> 1,
                     (dD | (1 << s)) << 1);
                     
        }
    }
    
    
}

int main() {
    int tc = 0;
    while(scanf("%d", &size),size)
    {
        for (int i =0; i < size; ++i)
        {
            scanf("%s", line);
        

            
            for(int j =0; j < size; ++j)
            {
                
                scanf("%s", line);
                for (int j = 0; j < size; ++j)
                    placeable[i][j] = (line[j] == '.');
            }
            
            
            count = 0;
            Backtracking(0, 0, 0, 0);
            
            printf("Case %d: %d\n", tc++, count);
        }
    }
}
