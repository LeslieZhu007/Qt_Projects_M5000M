#include <stdio.h>

int main()
{
    FILE *fp;
    char str[] = "hello world\n";
    char str1[] = "how are you\n";
    char str2[] = "what are you doing\n";
    fp = fopen(".//file.txt","w");
    if (NULL == fp) {
        printf("open error\n");
         return -1;
    }
    printf("file open success\n");
    fprintf(fp,"%s",str);
    fprintf(fp,"%s",str1);
    fprintf(fp,"%s",str2);
    fclose(fp);
    /***************************/
    fp = fopen(".//file.txt", "r");              //以只读的形式打开文件
    if(NULL==fp)
    {
        printf("open error\n");
        return -1;
    }
    //读取数据
    char buf[100];
    char buf1[100];
    char buf2[100];
     char buf3[100];

    fscanf(fp,"%s%s%s%s",buf,buf1,buf2,buf3);
    printf("buf = %s\n", buf);
    printf("buf1 = %s\n", buf1);
    printf("buf2 = %s\n", buf2);
    printf("buf3 = %s\n", buf3);


     /*
    while (!feof(fp)) {
        fscanf(fp,"%s     %s      %s      %s",buf,buf1,buf2,buf3);
        printf("buf = %s\n", buf);
        printf("buf1 = %s\n", buf1);
        printf("buf2 = %s\n", buf2);
        printf("buf3 = %s\n", buf3);
    }
    */

    return 0;
}
