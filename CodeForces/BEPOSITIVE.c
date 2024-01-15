    #include<stdio.h>
    #include<math.h>


    int main(){

        int h;
        scanf("%d",&h);



        int half;

        if( h % 2 == 0){
            half = h/2;
        }else{
            half = (h/2) + 1 ;
        }



        int a[h];

        int p = 0;
        int n = 0;
        int z = 0;

        for(int i=0 ; i<h ; i++){
            scanf("%d" , &a[i]);

            if(a[i] > 0){
                p = p + 1 ;
            }

            else if(a[i] < 0){
                n = n + 1 ; 
            }
            
            else{
                z = z + 1;
            }
            

        }

        

        if(p>=half){
            printf("2 \n");
        }else if (n>=half){
            printf("-2 \n");
        }else if (z >= half || (n == p) || (n < half) || (p<half)){
            printf("0 \n");
        }



        return 0;


    }