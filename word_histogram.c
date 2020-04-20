#include <stdio.h>

#define IN 1
#define OUT 0

int main(void) {
        // your code goes here
        int state=OUT,nwords=0,c,arr[10];
        for(int i=0;i<10;++i)
        {
                arr[i]=0;
        }
        while((c=getchar())!=EOF)
        {
                if(c=='\n' || c=='\t' || c==' ')
                {
                        if(state == IN && nwords < 10)
                                ++arr[nwords-1];
			else if(state == IN && nwords >=10)
				++arr[9];

                        state = OUT;
                        nwords = 0;
                }
                else
                {
                        state = IN;
                        ++nwords;
                }

        }
	printf("Size:Frequency\n");
        for(int i=0;i<10;++i)
        {
                (i==9)?printf("%3d+:",i+1):printf("%4d:",i+1);
		for(int j=0;j<arr[i];++j)
			printf("X");
		printf("\n");
        }
        return 0;
}
