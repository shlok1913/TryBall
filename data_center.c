//data center (800)
#include<stdio.h>
#include<math.h>

int main(){
    
    int n,j=0;
    scanf("%d",&n);
    int factor[n];          //taking maximum size of array(for the sake of it)
    
    for(int i=1;i<=n;i++){   //storing factors of n in array 'factor'
        if(n%i==0){
            factor[j]=i;
            j++;
        }
    }

    int p;                  //p = minimum perimeter

    if(j%2==0){            //that is number is not a perfect square  
        p= 2*(factor[j/2] +factor[j/2 -1]);               //taking middle two factors (when arranged ascendingly)
    }
    else{                  //that is number is a perfect square  
        p = 4*factor[(j-1)/2];                             
    }
    printf("%d\n",p);
    
    

    return 0;
}