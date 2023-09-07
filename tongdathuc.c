#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
struct polinomial
{
	int base;
	int index_number;
	char variable;
};
typedef struct polinomial polinomial;
int exchange_string_to_int(char *string)
{
	int n=strlen(string),num;
	for(int i=0;i<n;i++)
	{
		num+=((int)(string[i])-48)*pow(10,n-1-i);
	}
	return num;
}
void compact(polinomial *po, char *input,int *cou)
{
	int n=strlen(input);
	*cou=0;
	for(int i=0;i<n;i++)
	{
		if(input[i]==' ')
		{
			for(int j=i;j<n;j++)
			{
				input[j]=input[j+1];
			}
			input[n]='\0';
			n=strlen(input);
		}
	}
	for(int i=0;i<n;i++)
	{
		
			char *bases=(char *)malloc(20*sizeof(char));
			int pt=i;
			while(input[i]!='*')
			{
				i++;
			}
			strncpy(bases, input + pt, i-pt);
			bases[i-pt]='\0';
			po[*cou].base= exchange_string_to_int(bases);
			
			i++;
			po[*cou].variable= input[i++];
			
			i++;
			char *index_numbers=(char *)malloc(20*sizeof(char));
			int pt2=i;
			while(input[i]!='+' && i<n)
			{
				i++;
			}
			strncpy(index_numbers, input + pt2, i-pt2);
			index_numbers[i-pt2]='\0';
			po[*cou].index_number= exchange_string_to_int(index_numbers);
			//printf("%d %c %d\n",po[*cou].base,po[*cou].variable,po[*cou].index_number);
			(*cou)++;	
	}
	po=realloc(po,(*cou)*sizeof(polinomial));
}
void ghep(polinomial *po3,int *count,polinomial *po2,int count2,polinomial *po1,int count1)
{
	*count=count1+count2;
	for(int i=0;i<*count;i++)
	{
		if(i<count1) 
		{
			po3[i]=po1[i];
		}
		else 
		{
			po3[i]=po2[i-count1];
		}
	}
}
void rutgon(polinomial *po3,int count)
{
	for(int i=0;i<count;i++)
	{
		int max=i;
		for(int j=i+1;j<count;j++)
		{
			if( po3[max].index_number < po3[j].index_number )
			{
				max=j;
			}
		}
		if(max !=i)
		{
			polinomial tmp=po3[max];
			po3[max]=po3[i];
			po3[i]=tmp;
		}
	}
	for(int i=1;i<count;i++)
	{
		if( po3[i].index_number == po3[i-1].index_number)
		{
			while(po3[i].index_number== po3[i-1].index_number && i<count)
			{
				po3[i].base+=po3[i-1].base;
				po3[i-1].base=0;
				i++;
			}
			i--;
		}
	}
}
int main()
{
	int t=0;scanf("%d",&t);
	getchar();
	while(t--)
	{
		char *input1=malloc(50000*sizeof(char));
		int count1;
		gets(input1);
		input1= realloc(input1,sizeof(char)*strlen(input1));
		polinomial *po1=malloc(10000*sizeof(polinomial));
		compact(po1,input1,&count1);
		
		char *input2=malloc(50000*sizeof(char));
		int count2;
		gets(input2);
		input2= realloc(input2,sizeof(char)*strlen(input2));
		polinomial *po2=malloc(10000*sizeof(polinomial));
		compact(po2,input2,&count2);
		
		polinomial *po3=malloc(10000*sizeof(polinomial));
		int count;
		ghep(po3,&count,po2,count2,po1,count1);
		rutgon(po3,count);
		for(int i=0;i<count;i++)
		{
			if(po3[i].base != 0) 
			{
				printf("%d*%c^%d",po3[i].base,po3[i].variable,po3[i].index_number);
				if(i != count-1) printf(" + ");
			}
			
		}
	}
	
}