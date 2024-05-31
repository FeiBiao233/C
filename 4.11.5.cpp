#include <stdio.h>
int main()
{
    int ab,bb,cb;
    for(int ab='x';ab<='z';ab++)
    {
        for(int bb='x';bb<='z';bb++)
        {
            for(int cb='x';cb<='z';cb++)
            {
                if(ab!='x'&&cb!='x'&&cb!='z'&&ab!=bb&&ab!=cb&&bb!=cb)
                    printf("a对%c,b对%c,c对%c",ab,bb,cb);
            }
        }
    }
}