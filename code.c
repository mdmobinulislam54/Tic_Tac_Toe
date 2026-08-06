#include <stdio.h>
void initialize(int,int,char arr[3][3]);
int win(char arr[3][3]);
int main(){
     char arr[3][3];
     int i=0,j=0,p=1,k=0;
     char ch;
     for(i=0;i<3;i++){
         for(j=0;j<3;j++){
              arr[i][j]=(char)p +'0';
              p++;
         }
     }
    initialize(3,3,arr);
    i=1;
    while(i<=9){
        if(i%2==0){
          ch='0';
          printf("enter position for player 2:");
          scanf("%d",&p);
        }
        else{
            ch='x';
            printf("enter position for player 1:");
            scanf("%d",&p);
        }
        if(p==1){
            if(arr[0][0]!='x'&& arr[0][0]!='0'){
                arr[0][0]=ch;
                
            }
        }
       else  if(p==2){
            if(arr[0][1]!='x'&& arr[0][1]!='0'){
                arr[0][1]=ch;
                
            }
        }
        else if(p==3){
            if(arr[0][2]!='x'&& arr[0][2]!='0'){
                arr[0][2]=ch;
                
            }
        }
        else if(p==4){
            if(arr[1][0]!='x'&& arr[1][0]!='0'){
                arr[1][0]=ch;
                
            }
        }
        else if(p==5){
            if(arr[1][1]!='x'&& arr[1][1]!='0'){
                arr[1][1]=ch;
                
            }
        }
        else if(p==6){
            if(arr[1][2]!='x'&& arr[1][2]!='0'){
                arr[1][2]=ch;
            
            }
        }
        else if(p==7){
            if(arr[2][0]!='x'&& arr[2][0]!='0'){
                arr[2][0]=ch;
                
            }
        }
        else if(p==8){
            if(arr[2][1]!='x'&& arr[2][1]!='0'){
                arr[2][1]=ch;
                
            }
        }
         else{
            if(arr[2][2]!='x'&& arr[2][2]!='0'){
                arr[2][2]=ch;
                
            }
        }
        initialize(3,3,arr);
        k=win(arr);
        if(k==1 && i%2==0){
          printf("player 2 wins") ; 
          break;
        }
       else if(k==1 && i%2!=0){
          printf("player 1 wins") ; 
          break;
        }
        else if(k==0 && i==9){
          printf("Draw") ; 
          break;
        }
        i++;
    }
    
    return 0;
}
    void initialize(int r, int c,char arr[3][3]){
        int i=0,j=0;
        for(i=0;i<r;i++){
        for(j=0;j<r ;j++){
            printf("%c",arr[i][j]);
            if(j==0||j==1){
                printf("  |   ");
        }
        }
        
        printf("\n");
        printf("__________________\n");
        }
    }
    int win(char arr[3][3]){
        if(arr[1][0]==arr[0][0]&&arr[0][0]==arr[2][0]||arr[0][1]==arr[1][1]&&arr[1][1]==arr[2][1]||arr[0][2]==arr[1][2]&&arr[1][2]==arr[2][2]||arr[0][0]==arr[0][1]&&arr[0][1]==arr[0][2]||arr[1][0]==arr[1][1]&&arr[1][1]==arr[1][2]||arr[2][0]==arr[2][1]&&arr[2][1]==arr[2][2]||arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2]||arr[0][2]==arr[1][1]&&arr[1][1]==arr[2][0]){
            return 1;
    }
    else{ 
        return 0;
    }
    
    }
