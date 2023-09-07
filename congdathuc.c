#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[100],b[100];
	gets(a);
	gets(b);
	strcat(a," + ");
	strcat(a,b);
	char c[100][100];
	char *token;
	token=strtok(a," + ");
	long n=0;
	while(token!=NULL)
	{
		strcpy(c[n],token);
		n++;
		token=strtok(NULL," + ");
	}
	int hs[n][2];
	for(int i=0;i<n;i++)
	{
		int k=strlen(c[i]);
		int j=0;
		char tmp[20];int p=0;
		while(c[i][j]>47 && c[i][j]<58)
		{
			tmp[p]=c[i][j];
			p++;
			j++;
		}
		puts(tmp);
		//chuyenso(&hs[i][0],tmp);
		/*while(c[i][j]<=47 && c[i][j]>=58)
		{
			j++;
		}
		char tmp_[20];int p_=0;
		while(c[i][j]>47 && c[i][j]<58)
		{
			tmp_[p_]=c[i][j];
			p_++;
			j++;
		}*/
		//puts(tmp_);
	}		
}