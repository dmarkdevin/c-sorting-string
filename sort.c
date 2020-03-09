#include<stdio.h>
#include<string.h>

void arrange(int i,int j, int n, char s[100], char str[100][100]); 

struct players{
    char str[100][100];
} name;

main()
{
int i,j,n;
char s[100];
 
    printf("ENTER THE NUMBER OF PLAYERS: \n");
    scanf("%d",&n);
    printf("ENTER THE NAMES: \n");
    for(i=0;i<n;i++)
    {
     scanf("%s",name.str[i]);
    }

    arrange(i,j,n,s,name.str);

}

void arrange(int i,int j, int n, char s[100], char str[100][100]){

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(s,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],s);
            }
        }
    }

    printf("\nARRANGE ALPHABETICALLY\n");
    for(i=0;i<n;i++){
     printf("%s\n",str[i]);
    }
}

