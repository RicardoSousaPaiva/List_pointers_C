#include <stdio.h>

int main(){
    int n,l, p,i,y,count,count1;
    
       
   

    scanf("%d",&n);
    int A[n][n];
    int c=n*n;
    int B[c];
    count=0; 
     while (count < c+1){
        fgets(B, sizeof(B),stdin);
        
     
        
        for(i=0; i < n; i++){
            for(y=0; y < n; y++){
                A[i][y]= B[count1];  
            }
        }  
        count++;
     }   
        for(l=1; l < n; l++){
            for(p=1; p < n; p++){
                printf("%d", A[l][p]);   
            }
            printf("\n");
        } 
    
    
 
    return 0;
}