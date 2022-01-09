#include<stdio.h>

int main()
{
    int tm = 5000;      ///tm = number of execution
    for(int i=0;i<tm;i++){          
        FILE *ptr;
        ///Note a new file isn't created if it doesn't exist.So For checking multiple times,
        /// I manually set the value of num.txt to 0.
        ptr = fopen("./num.txt", "r");          
        int val=-1,nval=-2;
        fscanf(ptr,"%d",&val);
        fclose(ptr);
        ptr = fopen("./num.txt","w");
        fprintf(ptr,"%d\n",val+1);
        // printf("val = %d\n",val);
        fclose(ptr);
    }
}
