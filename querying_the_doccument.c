#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

char* kth_word_in_mth_sentence_of_nth_paragraph(char**** document, int k, int m, int n) 
{
    return document[n-1][m-1][k-1];
}

char** kth_sentence_in_mth_paragraph(char**** document, int k, int m) 
{ 
	return document[m-1][k-1];
}

char*** kth_paragraph(char**** document, int k) 
{
	return document[k-1];
}

char**** get_document(char* text,int *pa) 
{
	int sen=0,wo=0,cha=0;
	int count=0;



	 char**** document = (char****)malloc(MAX_PARAGRAPHS * sizeof(char***));
    for (int i = 0; i < MAX_PARAGRAPHS; i++) {
        document[i] = (char***)malloc(1000 * sizeof(char**));
        for (int j = 0; j < 1000; j++) {
            document[i][j] = (char**)malloc(1000 * sizeof(char*));
            for (int k = 0; k < 1000; k++) {
                document[i][j][k] = (char*)malloc(1000 * sizeof(char));
                document[i][j][k][0] = '\0';  // dat ki tu ban dau la chuoi rong
            }
        }
    }
    


	while(text[count]!='\0')
	{
		if( text[count]!='\n' && text[count]!='.' &&text[count]!=' ') document[*pa][sen][wo][cha++]=text[count];
		else if(text[count]==' ')
		{
			document[*pa][sen][wo][cha]='\0';
			cha=0;
			wo++;
			
		}
		else if(text[count]=='.')
		{
			cha=0;
			wo=0;
			sen++;
		}
		else if(text[count]=='\n')
		{
			cha=0;
			wo=0;
			sen=0;
			(*pa)++;
		}
		count++; 
	}
	(*pa)++;
	return document;
}


char* get_input_text() 
{	
    int paragraph_count;
    scanf("%d", &paragraph_count);

    char p[MAX_PARAGRAPHS][MAX_CHARACTERS], doc[MAX_CHARACTERS];
    memset(doc, 0, sizeof(doc));
    getchar();
    for (int i = 0; i < paragraph_count; i++) {
        scanf("%[^\n]%*c", p[i]);
        strcat(doc, p[i]);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char* returnDoc = (char*)malloc((strlen (doc)+1) * (sizeof(char)));
    strcpy(returnDoc, doc);
    return returnDoc;
}

void print_word(char* word) 
{
    printf("%s", word);
}

void print_sentence(char** sentence) 
{
    int word_count;
    scanf("%d", &word_count);
    for(int i = 0; i < word_count; i++){
        printf("%s", sentence[i]);
        if( i != word_count - 1)
            printf(" ");
    }
} 

void print_paragraph(char*** paragraph) 
{
    int sentence_count;
    scanf("%d", &sentence_count);
    for (int i = 0; i < sentence_count; i++) 
	{
        print_sentence(*(paragraph + i));
        printf(".");
    }
}

int main() 
{
    char* text = get_input_text();
    int pa=0;
    char**** document = get_document(text,&pa);
    
    
    
    int q;
    scanf("%d", &q);

    while (q--) {
        int type;
        scanf("%d", &type);

        if (type == 3)
		{
            int k, m, n;
            scanf("%d %d %d", &k, &m, &n);
            char* word = kth_word_in_mth_sentence_of_nth_paragraph(document, k, m, n);
            print_word(word);
        }

        else if (type == 2)
		{
            int k, m;
            scanf("%d %d", &k, &m);
            char** sentence = kth_sentence_in_mth_paragraph(document, k, m);
            print_sentence(sentence);
        }

        else
		{
            int k;
            scanf("%d", &k);
            char*** paragraph = kth_paragraph(document, k);
            print_paragraph(paragraph);
        }
        printf("\n");
    } 
}