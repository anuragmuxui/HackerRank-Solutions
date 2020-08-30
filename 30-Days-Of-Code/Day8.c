#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
             
         int data;
         char name[1000];
         struct node *next;
};

int main()
{
        int n;
        scanf("%d",&n);
        struct node *head[26]={NULL},*c;
        for(int i=0;i<n;i++)
        {
            struct node * newnode=(struct node *)malloc(sizeof(struct node));
            int val;
            char temp[1000];
            scanf("%s%d",temp,&val);
            newnode->data=val; strcpy(newnode->name,temp);
               newnode->next = NULL;
               if(head[temp[0]-'a'] == NULL)
                    head[temp[0]-'a'] = newnode;
               else
               {
                    for(c=head[temp[0]-'a'];c->next != NULL;c=c->next);
                    c->next=newnode;
               }
         
        }
         for(int i=0;i<n;i++)
        {
            char temp[1000];int flag=1;
            scanf("%s",temp);
            if(head[temp[0]-'a'] == NULL)
                 printf("Not found\n");
            else
               {
                              for(c=head[temp[0]-'a'];c!=NULL;c=c->next)
                              {
                                  if(strcmp(temp,c->name) == 0)
                                  {
                                      printf("%s=%d\n",c->name,c->data);
                                      flag=0;break;
                                  }
                              }
                              if(flag)
                                printf("Not found\n");
                           
               }
        }
        return 0;
}

