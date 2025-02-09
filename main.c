#include <stdio.h>

int main()
{
    FILE*new;
    new=fopen("phnnumbers7.dat","w+");
    char num[12];
    num[0]='0';
    num[1]='1';
    num[11]='\0';

    int a,b,c,d,e,f,g,h,i;
    for(num[2]=48;num[2]<58;num[2]++){
        for(num[3]=48;num[3]<58;num[3]++){
            for(num[4]=48;num[4]<58;num[4]++){
                for(num[5]=48;num[5]<58;num[5]++){
                    for(num[6]=48;num[6]<58;num[6]++){
                        for(num[7]=48;num[7]<58;num[7]++){
                            for(num[8]=48;num[8]<58;num[8]++){
                                for(num[9]=48;num[9]<58;num[9]++){
                                    for(num[10]=48;num[10]<58;num[10]++){
                                        fprintf(stdout,"%c%c%c%c%c%c%c%c%c%c%c\n",num[0],num[1],num[2],num[3],num[4],num[5],num[6],num[7],num[8],num[9],num[10])  ;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    fclose(new);

    return 0;
}
