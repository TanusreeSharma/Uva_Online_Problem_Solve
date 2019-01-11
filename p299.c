

  #include<cstdio>

  int main (){
      int T[60], swap, i, j, n,m;
      scanf("%d", &n);
      while (n--){
        scanf("%d", &m);
        for(i=0; i < m; ++i)
            scanf("%d", &T[i]);
        //bubble sort
        for(i = 0; i< m - 1; ++i){
            for(j = i + 1; j < m; ++j){
                if(T[i] > T[j])
                    ++swap;
            }
        }
        printf("Optimal train swapping takes %d swap.\n", swap);
      }
      return 0;
  }
