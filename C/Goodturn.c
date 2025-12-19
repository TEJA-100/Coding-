#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    // Loop for each test case
   for(int i=1; i <= t; i++) {
        int x, y;
      
        scanf("%d %d", &x, &y);
        if(x+y > 6){
            printf("YES\n");
            
        }
        else{
            printf("NO\n");
        }

        // Your code for each test case goes here 
    }
}
