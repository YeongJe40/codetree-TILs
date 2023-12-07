#include <stdio.h>

int main() {
    int i, n, h,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n+1;i++)
    {
        scanf("%d ",&h);
        if(h==2)
        {
            cnt+=1;
            if (cnt==3)
            {
                printf(i);
            }
        }
        
            
    }
    return 0;
}