#include<cstdio>
#include<vector>
#include<iostream>
#include<bitset>
#include<fstream>

using namespace std;

char str[2000000];
int main()
{
    long len, n, i, j, min, max, temp, c = 1;
    
while(scanf("%s", &str)== 1)
{
    len = strlen(str);
    if(len == 0) break;
    scanf("%ld", &n);
    {
        for(i = 0; i < n; i++)
        {
            scanf("%ld%ld", &min, &max);
            if(i == 0)
                printf("Case %ld: \n", c);
            if(min>max)
            {
                temp = min;
                min = max;
                max = temp;
            }
            for (j =min; j < max; j++)
            {
                if(str[j] != str[j+1])
                {
                    printf("No\n");
                    break;
                }
            }
            if(j == max)
                printf("Yes\n");
        }
            
    }
    c++;
}
    return 0;
}
