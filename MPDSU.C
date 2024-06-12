
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void worldcases();   //queue using link list
void displayworld(); //
void deleteworld();
void usacases();     //
void displayusa();   //
void deleteusa();
void indiacases();   //
void displayindia(); //
void deleteindia();
void francecases();  //
void displayfrance();//
void deletefrance();
void brazilcases();  //
void displaybrazil();//
void deletebrazil();
void netherlandscases();//
void displaynetherlands();//
void deletenetherlands();
void japancases();    //
void displayjapan();  //
void deletejapan();
void skoreacases();   //
void displayskorea(); //
void deleteskorea();
void vacc_names();    // priority queue using linked list
void displayvacc_name();
void lab_names();      //
void displaylab_name();  //
void man_names();         //
void displayman_name(); //
void testing_sub();
void display_sub();



struct world *front=NULL,*rear=NULL; //world
struct world *front1=NULL,*rear1=NULL; //usa
struct world *front2=NULL,*rear2=NULL; //india
struct world *front3=NULL,*rear3=NULL; //france
struct world *front4=NULL,*rear4=NULL; //brazil
struct world *front5=NULL,*rear5=NULL; //netherlands
struct world *front6=NULL,*rear6=NULL; //japan
struct world *front7=NULL,*rear7=NULL; //south korea
struct vacc *frontq1=NULL,*rearq1=NULL; //vaccine names
struct vacc *frontq2=NULL,*rearq2=NULL; //laboratory names
struct vacc *frontq3=NULL,*rearq3=NULL; //manufacturer names
struct vacc *frontq4=NULL,*rearq4=NULL; //testing subjects
int i1=1;//world
int i2=1;//usa
int i3=1;//india
int i4=1;//france
int i5=1;//brazil
int i6=1;//netherlands
int i7=1;//japan
int i8=1;//south korea




typedef struct vacc
{
 char name[30];
 int p;
 struct node *link;
}vacc;
void displayvacc_name()
{
 struct vacc *temp;
 temp=frontq1;
 printf("LIST OF COVID VACCINES:........\n");
 printf("\n");
 printf("vaccine name                   priority\n");
 printf("_______________________________________\n");
 while (temp!=NULL)
 {
  printf("%s vaccine                  %d\n",temp->name,temp->p);
  temp=temp->link;
 }
}
void vacc_names()
{
 vacc *ptr;
 clrscr();
 frontq1=(vacc*)malloc(sizeof(vacc));
 strcpy(frontq1->name,"Pneumocal");
 frontq1->p=1;
 frontq1->link=NULL;
 rearq1=frontq1;
 ptr=(vacc*)malloc(sizeof(vacc));
 strcpy(ptr->name,"hemophils");
 ptr->p=2;
 ptr->link=NULL;
 rearq1->link=ptr;
 rearq1=ptr;
 ptr=(vacc*)malloc(sizeof(vacc));
 strcpy(ptr->name,"pneumovac");
 ptr->p=3;
 ptr->link=NULL;
 rearq1->link=ptr;
 rearq1=ptr;
 ptr=(vacc*)malloc(sizeof(vacc));
 strcpy(ptr->name,"pertusis ");
 ptr->p=4;
 ptr->link=NULL;
 rearq1->link=ptr;
 rearq1=ptr;
 ptr=(vacc*)malloc(sizeof(vacc));
 strcpy(ptr->name,"anthrax  ");
 ptr->p=5;
 ptr->link=NULL;
 rearq1->link=ptr;
 rearq1=ptr;
 ptr=(vacc*)malloc(sizeof(vacc));
 strcpy(ptr->name,"anciphalt");
 ptr->p=6;
 ptr->link=NULL;
 rearq1->link=ptr;
 rearq1=ptr;
 ptr=(vacc*)malloc(sizeof(vacc));
 strcpy(ptr->name,"flu shot ");
 ptr->p=7;
 ptr->link=NULL;
 rearq1->link=ptr;
 rearq1=ptr;
 displayvacc_name();
}


void displaylab_name()
{
 struct vacc *temp;
 temp=frontq2;
 printf("LIST OF COVID LABORATORIES:........\n");
 printf("\n");
 printf("laboratory name                   priority\n");
 printf("__________________________________________\n");
 while (temp!=NULL)
 {
  printf("%s          %d\n",temp->name,temp->p);
  temp=temp->link;
 }
}

void lab_names()
{
 vacc *ptr;
 clrscr();
 frontq2=(vacc*)malloc(sizeof(vacc));
 strcpy(frontq2->name,"Clinical management of SARI ");
 frontq2->p=1;
 frontq2->link=NULL;
 rearq2=frontq2;
 ptr=(vacc*)malloc(sizeof(vacc));
 strcpy(ptr->name,"THSTI                       ");
 ptr->p=2;
 ptr->link=NULL;
 rearq2->link=ptr;
 rearq2=ptr;
 ptr=(vacc*)malloc(sizeof(vacc));
 strcpy(ptr->name,"CNRS research laboratory    ");
 ptr->p=3;
 ptr->link=NULL;
 rearq2 ->link=ptr;
 rearq2=ptr;
 ptr=(vacc*)malloc(sizeof(vacc));
 strcpy(ptr->name,"LDV USP LABS                ");
 ptr->p=4;
 ptr->link=NULL;
 rearq2->link=ptr;
 rearq2=ptr;
 ptr=(vacc*)malloc(sizeof(vacc));
 strcpy(ptr->name,"Applikon biotechnology      ");
 ptr->p=5;
 ptr->link=NULL;
 rearq2->link=ptr;
 rearq2=ptr;
 ptr=(vacc*)malloc(sizeof(vacc));
 strcpy(ptr->name,"kakagowa laboratories       ");
 ptr->p=6;
 ptr->link=NULL;
 rearq2->link=ptr;
 rearq2=ptr;
 ptr=(vacc*)malloc(sizeof(vacc));
 strcpy(ptr->name,"gwangju institue of medicine");
 ptr->p=7;
 ptr->link=NULL;
 rearq2->link=ptr;
 rearq2=ptr;
 displaylab_name();
}

void displayman_name()
{
 struct vacc *temp;
 temp=frontq3;
 printf("LIST OF COVID VACCINE MANUFACTURERS:........\n");
 printf("\n");
 printf("manufacturer name                   priority\n");
 printf("__________________________________________\n");
 while (temp!=NULL)
 {
  printf("%s                 %d\n",temp->name,temp->p);
  temp=temp->link;
 }
}

void man_names()
{
 vacc *ptr;
 clrscr();
 frontq3=(vacc*)malloc(sizeof(vacc));
 strcpy(frontq3->name,"gen target inc      ");
 frontq3->p=1;
 frontq3->link=NULL;
 rearq3=frontq3;
 ptr=(vacc*)malloc(sizeof(vacc));
 strcpy(ptr->name,"pharma lonza        ");
 ptr->p=2;
 ptr->link=NULL;
 rearq3->link=ptr;
 rearq3=ptr;
 ptr=(vacc*)malloc(sizeof(vacc));
 strcpy(ptr->name,"eurofins            ");
 ptr->p=3;
 ptr->link=NULL;
 rearq3->link=ptr;
 rearq3=ptr;
 ptr=(vacc*)malloc(sizeof(vacc));
 strcpy(ptr->name,"astrazeneca         ");
 ptr->p=4;
 ptr->link=NULL;
 rearq3->link=ptr;
 rearq3=ptr;
 ptr=(vacc*)malloc(sizeof(vacc));
 strcpy(ptr->name,"virtuvax            ");
 ptr->p=5;
 ptr->link=NULL;
 rearq3->link=ptr;
 rearq3=ptr;
 ptr=(vacc*)malloc(sizeof(vacc));
 strcpy(ptr->name,"barr labs inc       ");
 ptr->p=6;
 ptr->link=NULL;
 rearq3->link=ptr;
 rearq3=ptr;
 ptr=(vacc*)malloc(sizeof(vacc));
 strcpy(ptr->name,"dynavax technologies");
 ptr->p=7;
 ptr->link=NULL;
 rearq3->link=ptr;
 rearq3=ptr;
 displayman_name();
}

void display_sub()
{
 struct vacc *temp;
 temp=frontq4;
 printf("LIST OF COVID VACCINE TESTING SUBJECTS:........\n");
 printf("\n");
 printf("subject name                   priority\n");
 printf("__________________________________________\n");
 while (temp!=NULL)
 {
  printf("%s                            %d\n",temp->name,temp->p);
  temp=temp->link;
 }
}

void testing_sub()
{
 vacc *ptr;
 clrscr();
 frontq4=(vacc*)malloc(sizeof(vacc));
 strcpy(frontq4->name,"hamster");
 frontq4->p=1;
 frontq4->link=NULL;
 rearq4=frontq4;
 ptr=(vacc*)malloc(sizeof(vacc));
 strcpy(ptr->name,"pig    ");
 ptr->p=2;
 ptr->link=NULL;
 rearq4->link=ptr;
 rearq4=ptr;
 ptr=(vacc*)malloc(sizeof(vacc));
 strcpy(ptr->name,"rabbit ");
 ptr->p=3;
 ptr->link=NULL;
 rearq4->link=ptr;
 rearq4=ptr;
 ptr=(vacc*)malloc(sizeof(vacc));
 strcpy(ptr->name,"rat    ");
 ptr->p=4;
 ptr->link=NULL;
 rearq4->link=ptr;
 rearq4=ptr;
 ptr=(vacc*)malloc(sizeof(vacc));
 strcpy(ptr->name,"lizard ");
 ptr->p=5;
 ptr->link=NULL;
 rearq4->link=ptr;
 rearq4=ptr;
 ptr=(vacc*)malloc(sizeof(vacc));
 strcpy(ptr->name,"dog    ");
 ptr->p=6;
 ptr->link=NULL;
 rearq4->link=ptr;
 rearq4=ptr;
 ptr=(vacc*)malloc(sizeof(vacc));
 strcpy(ptr->name,"human  ");
 ptr->p=7;
 ptr->link=NULL;
 rearq4->link=ptr;
 rearq4=ptr;
 display_sub();
}



typedef struct world
{
 unsigned long int data;
 struct world *link;
}world;
void worldcases()
{
 world *ptr;
 unsigned long int a[6]={62004949,42798107,17757534,105249,1449308,7828430350};
 int i;
 front=(world*)malloc(sizeof(world));
 front->data=a[0];
 front->link=NULL;
 rear=front;
 if(i1==1)
 {
 for(i=1;i<6;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear->link=ptr;
  rear=ptr;
 }
 }
 else if(i1==2)
 {
  for(i=1;i<5;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear->link=ptr;
  rear=ptr;
 }
 }
 else if(i1==3)
 {
  for(i=1;i<4;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear->link=ptr;
  rear=ptr;
 }
 }
 else if(i1==4)
 {
  for(i=1;i<3;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear->link=ptr;
  rear=ptr;
 }
 }
 else if(i1==5)
 {
  for(i=1;i<2;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear->link=ptr;
  rear=ptr;
 }
 }
 displayworld();
}
void displayworld()
{
 world *temp;
 temp=front;
 if(i1==1)
 {
  printf("***************** World Wide COVID Infections ***************\n");
  printf("\n");
  printf("cases  |  recovered |  active | serious | deaths |  population | \n");
  printf("----------------------------------------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu | ",temp->data);
   temp=temp->link;
  }
 }
 else if (i1==2)
 {
  printf("***************** World Wide COVID Infections ***************\n");
  printf("\n");
  printf(" recovered |  active | serious | deaths |  population | \n");
  printf("---------------------------------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu | ",temp->data);
   temp=temp->link;
  }
 }
 else if (i1==3)
 {
  printf("***************** World Wide COVID Infections ***************\n");
  printf("\n");
  printf(" active | serious | deaths |  population | \n");
  printf("--------------------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu | ",temp->data);
   temp=temp->link;
  }
 }
 else if(i1==4)
 {
  printf("***************** World Wide COVID Infections ***************\n");
  printf("\n");
  printf(" serious | deaths |  population | \n");
  printf("-----------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu | ",temp->data);
   temp=temp->link;
  }
 }
 else if(i1==5)
 {
  printf("***************** World Wide COVID Infections ***************\n");
  printf("\n");
  printf(" deaths |  population | \n");
  printf("------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu | ",temp->data);
   temp=temp->link;
  }
 }
 else if(i1==6)
 {
  printf("***************** World Wide COVID Infections ***************\n");
  printf("\n");
  printf(" population | \n");
  printf("--------------\n");
  while(temp!=NULL)
  {
   printf("%lu | ",temp->data);
   temp=temp->link;
  }
 }
 else
 printf("queue is empty\n");
}
void deleteworld()
{
 struct world *temp;
 temp=front;
 front=front->link;
 printf("\n\n%d field was deleted from the queue\n\n",i1);
 i1++;
 free(temp);
 displayworld();
}



void usacases()  //usa
{
 world *ptr;
 unsigned long int a[6]={10182818,3497817,18480,6441744,243257,331690410};
 int i;
 front1=(world*)malloc(sizeof(world));
 front1->data=a[0];
 front1->link=NULL;
 rear1=front1;
 if(i2==1)
 {
 for(i=1;i<6;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear1->link=ptr;
  rear1=ptr;
 }
 }
 else if(i2==2)
 {
  for(i=1;i<5;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear1->link=ptr;
  rear1=ptr;
 }
 }
 else if(i2==3)
 {
  for(i=1;i<4;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear1->link=ptr;
  rear1=ptr;
 }
 }
 else if(i2==4)
 {
  for(i=1;i<3;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear1->link=ptr;
  rear1=ptr;
 }
 }
 else if(i2==5)
 {
  for(i=1;i<2;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear1->link=ptr;
  rear1=ptr;
 }
 }
 displayusa();
}
void displayusa()
{
 world *temp;
 temp=front1;
 if(i2==1)
 {

  printf("***************** USA COVID Infections ***************\n");
  printf("\n");
  printf("cases  |  recovered |  active | serious | deaths |  population | \n");
  printf("----------------------------------------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu  |  ",temp->data);
   temp=temp->link;
  }
 }
 else if (i2==2)
 {

  printf("***************** USA COVID Infections ***************\n");
  printf("\n");
  printf(" recovered |  active | serious | deaths |  population | \n");
  printf("---------------------------------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu  |  ",temp->data);
   temp=temp->link;
  }
 }
 else if (i2==3)
 {

  printf("***************** USA COVID Infections ***************\n");
  printf("\n");
  printf(" active | serious | deaths |  population | \n");
  printf("--------------------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu  |  ",temp->data);
   temp=temp->link;
  }
 }
 else if(i2==4)
 {
  printf("***************** USA COVID Infections ***************\n");
  printf("\n");
  printf(" serious | deaths |  population | \n");
  printf("-----------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu  |  ",temp->data);
   temp=temp->link;
  }
 }
 else if(i2==5)
 {
  printf("***************** USA COVID Infections ***************\n");
  printf("\n");
  printf(" deaths |  population | \n");
  printf("------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu  |  ",temp->data);
   temp=temp->link;
  }
 }
 else if(i2==6)
 {
  printf("***************** USA COVID Infections ***************\n");
  printf("\n");
  printf(" population | \n");
  printf("--------------\n");
  while(temp!=NULL)
  {
   printf("%lu  |  ",temp->data);
   temp=temp->link;
  }
 }
 else
 printf("queue is empty\n");
}
void deleteusa()
{
 struct world *temp;
 temp=front1;
 front1=front1->link;
 printf("\n\n%d field was deleted from the queue\n\n",i2);
 i2++;
 free(temp);
 displayusa();
}


void indiacases()  //india
{
 world *ptr;
 unsigned long int a[6]={850774,512624,8944,7868968,126162,1384789754};
 int i;
 front2=(world*)malloc(sizeof(world));
 front2->data=a[0];
 front2->link=NULL;
 rear2=front2;
 if(i3==1)
 {
 for(i=1;i<6;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear2->link=ptr;
  rear2=ptr;
 }
 }
 else if(i3==2)
 {
  for(i=1;i<5;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear2->link=ptr;
  rear2=ptr;
 }
 }
 else if(i3==3)
 {
  for(i=1;i<4;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear2->link=ptr;
  rear2=ptr;
 }
 }
 else if(i3==4)
 {
  for(i=1;i<3;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear2->link=ptr;
  rear2=ptr;
 }
 }
 else if(i3==5)
 {
  for(i=1;i<2;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear2->link=ptr;
  rear2=ptr;
 }
 }

 displayindia();
}
void displayindia()
{
 world *temp;
 temp=front2;
 if(i3==1)
 {

  printf("***************** India COVID Infections ***************\n");
  printf("\n");
  printf("cases  |  recovered |  active | serious | deaths |  population | \n");
  printf("----------------------------------------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu  |  ",temp->data);
   temp=temp->link;
  }
 }
 else if (i3==2)
 {

  printf("***************** India COVID Infections ***************\n");
  printf("\n");
  printf(" recovered |  active | serious | deaths |  population | \n");
  printf("---------------------------------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu  |  ",temp->data);
   temp=temp->link;
  }
 }
 else if (i3==3)
 {

  printf("***************** India COVID Infections ***************\n");
  printf("\n");
  printf(" active | serious | deaths |  population | \n");
  printf("--------------------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu  |  ",temp->data);
   temp=temp->link;
  }
 }
 else if(i3==4)
 {
  printf("***************** India COVID Infections ***************\n");
  printf("\n");
  printf(" serious | deaths |  population | \n");
  printf("-----------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu  |  ",temp->data);
   temp=temp->link;
  }
 }
 else if(i3==5)
 {
  printf("***************** India COVID Infections ***************\n");
  printf("\n");
  printf(" deaths |  population | \n");
  printf("------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu  |  ",temp->data);
   temp=temp->link;
  }
 }
 else if(i3==6)
 {
  printf("***************** India COVID Infections ***************\n");
  printf("\n");
  printf(" population | \n");
  printf("--------------\n");
  while(temp!=NULL)
  {
   printf("%lu  |  ",temp->data);
   temp=temp->link;
  }
 }
 else
 printf("queue is empty\n");
}
void deleteindia()
{
 struct world *temp;
 temp=front2;
 front2=front2->link;
 printf("\n\n%d field was deleted from the queue\n\n",i3);
 i3++;
 free(temp);
 displayindia();
}


void francecases()  //france
{
 world *ptr;
 unsigned long int a[6]={1748705,1580598,4421,127938,40169,65324901};
 int i;
 front3=(world*)malloc(sizeof(world));
 front3->data=a[0];
 front3->link=NULL;
 rear3=front3;
 if(i4==1)
 {
 for(i=1;i<6;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear3->link=ptr;
  rear3=ptr;
 }
 }
 else if(i4==2)
 {
  for(i=1;i<5;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear3->link=ptr;
  rear3=ptr;
 }
 }
 else if(i4==3)
 {
  for(i=1;i<4;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear3->link=ptr;
  rear3=ptr;
 }
 }
 else if(i4==4)
 {
  for(i=1;i<3;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear3->link=ptr;
  rear3=ptr;
 }
 }
 else if(i4==5)
 {
  for(i=1;i<2;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear3->link=ptr;
  rear3=ptr;
 }
 }

 displayfrance();
}
void displayfrance()
{
 world *temp;
 temp=front3;
 if(i4==1)
 {

  printf("***************** France COVID Infections ***************\n");
  printf("\n");
  printf("cases  |  recovered |  active | serious | deaths |  population | \n");
  printf("----------------------------------------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu  |  ",temp->data);
   temp=temp->link;
  }
 }
 else if (i4==2)
 {

  printf("***************** France COVID Infections ***************\n");
  printf("\n");
  printf(" recovered |  active | serious | deaths |  population | \n");
  printf("---------------------------------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu  |  ",temp->data);
   temp=temp->link;
  }
 }
 else if (i4==3)
 {

  printf("***************** France COVID Infections ***************\n");
  printf("\n");
  printf(" active | serious | deaths |  population | \n");
  printf("--------------------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu  |  ",temp->data);
   temp=temp->link;
  }
 }
 else if(i4==4)
 {
  printf("***************** France COVID Infections ***************\n");
  printf("\n");
  printf(" serious | deaths |  population | \n");
  printf("-----------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu  |  ",temp->data);
   temp=temp->link;
  }
 }
 else if(i4==5)
 {
  printf("***************** France COVID Infections ***************\n");
  printf("\n");
  printf(" deaths |  population | \n");
  printf("------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu  |  ",temp->data);
   temp=temp->link;
  }
 }
 else if(i4==6)
 {
  printf("***************** France COVID Infections ***************\n");
  printf("\n");
  printf(" population | \n");
  printf("--------------\n");
  while(temp!=NULL)
  {
   printf("%lu  |  ",temp->data);
   temp=temp->link;
  }
 }
 else
 printf("queue is empty\n");
}
void deletefrance()
{
 struct world *temp;
 temp=front3;
 front3=front3->link;
 printf("\n\n%d field was deleted from the queue\n\n",i4);
 i4++;
 free(temp);
 displayfrance();
}


void brazilcases()  //brazil
{
 world *ptr;
 unsigned long int a[6]={5653561,426931,8318,5064344,162286,213094038};
 int i;
 front4=(world*)malloc(sizeof(world));
 front4->data=a[0];
 front4->link=NULL;
 rear4=front4;
 if(i5==1)
 {
 for(i=1;i<6;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear4->link=ptr;
  rear4=ptr;
 }
 }
 else if(i5==2)
 {
  for(i=1;i<5;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear4->link=ptr;
  rear4=ptr;
 }
 }
 else if(i5==3)
 {
  for(i=1;i<4;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear4->link=ptr;
  rear4=ptr;
 }
 }
 else if(i5==4)
 {
  for(i=1;i<3;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear4->link=ptr;
  rear4=ptr;
 }
 }
 else if(i5==5)
 {
  for(i=1;i<2;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear4->link=ptr;
  rear4=ptr;
 }
 }

 displaybrazil();
}
void displaybrazil()
{
 world *temp;
 temp=front4;
 if(i5==1)
 {

  printf("***************** Brazil COVID Infections ***************\n");
  printf("\n");
  printf("cases  |  recovered |  active | serious | deaths |  population | \n");
  printf("----------------------------------------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu  |  ",temp->data);
   temp=temp->link;
  }
 }
 else if (i5==2)
 {

  printf("***************** Brazil COVID Infections ***************\n");
  printf("\n");
  printf(" recovered |  active | serious | deaths |  population | \n");
  printf("---------------------------------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu  |  ",temp->data);
   temp=temp->link;
  }
 }
 else if (i5==3)
 {

  printf("***************** Brazil COVID Infections ***************\n");
  printf("\n");
  printf(" active | serious | deaths |  population | \n");
  printf("--------------------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu  |  ",temp->data);
   temp=temp->link;
  }
 }
 else if(i5==4)
 {
  printf("***************** Brazil COVID Infections ***************\n");
  printf("\n");
  printf(" serious | deaths |  population | \n");
  printf("-----------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu  |  ",temp->data);
   temp=temp->link;
  }
 }
 else if(i5==5)
 {
  printf("***************** Brazil COVID Infections ***************\n");
  printf("\n");
  printf(" deaths |  population | \n");
  printf("------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu  |  ",temp->data);
   temp=temp->link;
  }
 }
 else if(i5==6)
 {
  printf("***************** Brazil COVID Infections ***************\n");
  printf("\n");
  printf(" population | \n");
  printf("--------------\n");
  while(temp!=NULL)
  {
   printf("%lu  |  ",temp->data);
   temp=temp->link;
  }
 }
 else
 printf("queue is empty\n");
}
void deletebrazil()
{
 struct world *temp;
 temp=front4;
 front4=front4->link;
 printf("\n\n%d field deleted from the queue\n\n",i5);
 i5++;
 free(temp);
 displaybrazil();
}



void netherlandscases()  //netherlands
{
 world *ptr;
 unsigned long int a[6]={404401,2000,630,300205,7690,17148361};
 int i;
 front5=(world*)malloc(sizeof(world));
 front5->data=a[0];
 front5->link=NULL;
 rear5=front5;
 if(i6==1)
 {
 for(i=1;i<6;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear5->link=ptr;
  rear5=ptr;
 }
 }
 else if(i6==2)
 {
  for(i=1;i<5;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear5->link=ptr;
  rear5=ptr;
 }
 }
 else if(i6==3)
 {
  for(i=1;i<4;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear5->link=ptr;
  rear5=ptr;
 }
 }
 else if(i6==4)
 {
  for(i=1;i<3;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear5->link=ptr;
  rear5=ptr;
 }
 }
 else if(i6==5)
 {
  for(i=1;i<2;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear5->link=ptr;
  rear5=ptr;
 }
 }

 displaynetherlands();
}
void displaynetherlands()
{
 world *temp;
 temp=front5;
 if(i6==1)
 {

  printf("***************** Netherlands COVID Infections ***************\n");
  printf("\n");
  printf("cases  |  recovered |  active | serious | deaths |  population | \n");
  printf("----------------------------------------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu   |  ",temp->data);
   temp=temp->link;
  }
 }
 else if (i6==2)
 {

  printf("***************** Netherlands COVID Infections ***************\n");
  printf("\n");
  printf(" recovered |  active | serious | deaths |  population | \n");
  printf("---------------------------------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu   |  ",temp->data);
   temp=temp->link;
  }
 }
 else if (i6==3)
 {

  printf("***************** Netherlands COVID Infections ***************\n");
  printf("\n");
  printf(" active | serious | deaths |  population | \n");
  printf("--------------------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu   |  ",temp->data);
   temp=temp->link;
  }
 }
 else if(i6==4)
 {
  printf("***************** Netherlands COVID Infections ***************\n");
  printf("\n");
  printf(" serious | deaths |  population | \n");
  printf("-----------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu   |  ",temp->data);
   temp=temp->link;
  }
 }
 else if(i6==5)
 {
  printf("***************** Netherlands COVID Infections ***************\n");
  printf("\n");
  printf(" deaths |  population | \n");
  printf("------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu   |  ",temp->data);
   temp=temp->link;
  }
 }
 else if(i6==6)
 {
  printf("***************** Netherlands COVID Infections ***************\n");
  printf("\n");
  printf(" population | \n");
  printf("--------------\n");
  while(temp!=NULL)
  {
   printf("%lu   |  ",temp->data);
   temp=temp->link;
  }
 }
 else
 printf("queue is empty\n");
}
void deletenetherlands()
{
 struct world *temp;
 temp=front5;
 front5=front5->link;
 printf("\n\n%d field deleted from the queue\n\n",i6);
 i6++;
 free(temp);
 displaynetherlands();
}


void japancases()  //japan
{
 world *ptr;
 unsigned long int a[6]={105941,7644,194,96461,1809,126337911};
 int i;
 front6=(world*)malloc(sizeof(world));
 front6->data=a[0];
 front6->link=NULL;
 rear6=front6;
 if(i7==1)
 {
 for(i=1;i<6;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear6->link=ptr;
  rear6=ptr;
 }
 }
 else if(i7==2)
 {
  for(i=1;i<5;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear6->link=ptr;
  rear6=ptr;
 }
 }
 else if(i7==3)
 {
  for(i=1;i<4;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear6->link=ptr;
  rear6=ptr;
 }
 }
 else if(i7==4)
 {
  for(i=1;i<3;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear6->link=ptr;
  rear6=ptr;
 }
 }
 else if(i7==5)
 {
  for(i=1;i<2;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear6->link=ptr;
  rear6=ptr;
 }
 }

 displayjapan();
}
void displayjapan()
{
 world *temp;
 temp=front6;
 if(i7==1)
 {

  printf("***************** Japan COVID Infections ***************\n");
  printf("\n");
  printf("cases  |  recovered |  active | serious | deaths |  population | \n");
  printf("----------------------------------------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu   |   ",temp->data);
   temp=temp->link;
  }
 }
 else if (i7==2)
 {

  printf("***************** Japan COVID Infections ***************\n");
  printf("\n");
  printf(" recovered |  active | serious | deaths |  population | \n");
  printf("---------------------------------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu   |   ",temp->data);
   temp=temp->link;
  }
 }
 else if (i7==3)
 {

  printf("***************** Japan COVID Infections ***************\n");
  printf("\n");
  printf(" active | serious | deaths |  population | \n");
  printf("--------------------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu   |   ",temp->data);
   temp=temp->link;
  }
 }
 else if(i7==4)
 {
  printf("***************** Japan COVID Infections ***************\n");
  printf("\n");
  printf(" serious | deaths |  population | \n");
  printf("-----------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu   |   ",temp->data);
   temp=temp->link;
  }
 }
 else if(i7==5)
 {
  printf("***************** Japan COVID Infections ***************\n");
  printf("\n");
  printf(" deaths |  population | \n");
  printf("------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu   |   ",temp->data);
   temp=temp->link;
  }
 }
 else if(i7==6)
 {
  printf("***************** Japan COVID Infections ***************\n");
  printf("\n");
  printf(" population | \n");
  printf("--------------\n");
  while(temp!=NULL)
  {
   printf("%lu   |   ",temp->data);
   temp=temp->link;
  }
 }
 else
 printf("queue is empty\n");
}
void deletejapan()
{
 struct world *temp;
 temp=front6;
 front6=front6->link;
 printf("\n\n%d field deleted from the queue\n\n",i7);
 i7++;
 free(temp);
 displayjapan();
}


void skoreacases()  //south korea
{
 world *ptr;
 unsigned long int a[6]={27427,1981,58,24968,478,51284907};
 int i;
 front7=(world*)malloc(sizeof(world));
 front7->data=a[0];
 front7->link=NULL;
 rear7=front7;
 if(i8==1)
 {
 for(i=1;i<6;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear7->link=ptr;
  rear7=ptr;
 }
 }
 else if(i8==2)
 {
  for(i=1;i<5;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear7->link=ptr;
  rear7=ptr;
 }
 }
 else if(i8==3)
 {
  for(i=1;i<4;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear7->link=ptr;
  rear7=ptr;
 }
 }
 else if(i8==4)
 {
  for(i=1;i<3;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear7->link=ptr;
  rear7=ptr;
 }
 }
 else if(i8==5)
 {
  for(i=1;i<2;i++)
 {
  ptr=(world*)malloc(sizeof(world));
  ptr->data=a[i];
  ptr->link=NULL;
  rear7->link=ptr;
  rear7=ptr;
 }
 }

 displayskorea();
}
void displayskorea()
{
 world *temp;
 temp=front7;
 if(i8==1)
 {

  printf("***************** South Korea COVID Infections ***************\n");
  printf("\n");
  printf("cases  |  recovered |  active | serious | deaths |  population | \n");
  printf("----------------------------------------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu   |   ",temp->data);
   temp=temp->link;
  }
 }
 else if (i8==2)
 {

  printf("***************** South Korea COVID Infections ***************\n");
  printf("\n");
  printf(" recovered |  active | serious | deaths |  population | \n");
  printf("---------------------------------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu   |   ",temp->data);
   temp=temp->link;
  }
 }
 else if (i8==3)
 {

  printf("***************** South Korea COVID Infections ***************\n");
  printf("\n");
  printf(" active | serious | deaths |  population | \n");
  printf("--------------------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu   |   ",temp->data);
   temp=temp->link;
  }
 }
 else if(i8==4)
 {
  printf("***************** South Korea COVID Infections ***************\n");
  printf("\n");
  printf(" serious | deaths |  population | \n");
  printf("-----------------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu   |   ",temp->data);
   temp=temp->link;
  }
 }
 else if(i8==5)
 {
  printf("***************** South Korea COVID Infections ***************\n");
  printf("\n");
  printf(" deaths |  population | \n");
  printf("------------------------\n");
  while(temp!=NULL)
  {
   printf("%lu   |   ",temp->data);
   temp=temp->link;
  }
 }
 else if(i8==6)
 {
  printf("***************** South Korea COVID Infections ***************\n");
  printf("\n");
  printf(" population | \n");
  printf("--------------\n");
  while(temp!=NULL)
  {
   printf("%lu   |   ",temp->data);
   temp=temp->link;
  }
 }
 else
 printf("queue is empty\n");
}
void deleteskorea()
{
 struct world *temp;
 temp=front7;
 front7=front7->link;
 printf("\n\n%d field deleted from the queue\n\n",i8);
 i8++;
 free(temp);
 displayskorea();
}



void main()
{
 int ch;//main menu
 for(;;)
 {
  clrscr();
  printf("****************************** Data Structure Project **************************\n");
  printf("******************************* COVID-19 information ***************************\n");
  printf("******************** MAIN MENU *******************\n");
  printf("ENTER YOUR CHOICE\n");
  printf("1. Display Menu\n");
  printf("2. Delete menu\n");
  printf("3. EXIT \n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1://display menu
   clrscr();
   printf("******************** DISPLAY MENU ********************\n");
   printf("ENTER YOUR CHOICE\n");
   printf("1. COVID Infection Cases information \n");
   printf("2. COVID vaccination information\n");
   printf("3. Return to Main Menu\n");
   printf("4. EXIT\n");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:
    clrscr();
    printf("**************** COVID INFECTION CASES INFO MENU ****************\n");
    printf("ENTER YOUR CHOICE\n");
    printf("1. Display Total World Wide cases\n");
    printf("2. Display info of any Specific country\n");
    printf("3. Return to Main Menu\n");
    printf("4. EXIT\n");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:
     clrscr();
     worldcases();
     getch();
     break;
     case 2:
     clrscr();
     printf("*************** Country Wise COVID Infections ***************\n");
     printf("ENTER YOUR CHOICE\n");
     printf("1. USA\n");
     printf("2. India\n");
     printf("3. France\n");
     printf("4. Brazil\n");
     printf("5. Netherlands\n");
     printf("6. Japan\n");
     printf("7. South Korea\n");
     printf("8. Return to main menu\n");
     printf("9. EXIT\n");
     scanf("%d",&ch);
     switch(ch)
     {
      case 1://usa
      clrscr();
      usacases();
      getch();
      break;
      case 2://india
      clrscr();
      indiacases();
      getch();
      break;
      case 3://france
      clrscr();
      francecases();
      getch();
      break;
      case 4://brazil
      clrscr();
      brazilcases();
      getch();
      break;
      case 5://netherlands
      clrscr();
      netherlandscases();
      getch();
      break;
      case 6://japan
      clrscr();
      japancases();
      getch();
      break;
      case 7://south korea
      clrscr();
      skoreacases();
      getch();
      break;
      case 8:
      break;
      case 9:
      exit(0);
      default:
      printf("Invalid Choice Try Again\n");
      break;
     }
     break;
    }
    break;
    case 2://vaccine info
    clrscr();
    printf("******************* COVID Vaccination Info Menu ********************\n");
    printf("ENTER YOUR CHOICE\n");
    printf("1. Display list of vaccine names\n");
    printf("2. Display list of laboratory names involved in covid vaccine creation\n");
    printf("3. Display list of manufacturer names involved in vaccine creation\n");
    printf("4. Display list of testing subjects used in vaccine creation\n");
    printf("5. Return to main menu\n");
    printf("6. EXIT\n");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1: //vaccine names
     clrscr();
     vacc_names();
     getch();
     break;
     case 2: //lab names
     clrscr();
     lab_names();
     getch();
     break;
     case 3://manufacturer names
     clrscr();
     man_names();
     getch();
     break;
     case 4://testing subjects
     clrscr();
     testing_sub();
     getch();
     break;
     case 5:
     break;
     case 6:
     exit(0);
     break;
     default:
     printf("Invalid Choice Try Again\n");
     break;
    }
    break;
    case 3://return to main menu
    break;
    case 4:
    exit(0);
    default:
    printf("Invalid choice Try Again\n");
    break;
   }
   break;
   case 2:// edit menu
   clrscr();
   printf("******************** Delete Menu ********************\n");
   printf("Enter your choice\n");
   printf("1. Delete covid infections record\n");
   printf("2. Return to main menu\n");
   printf("3. EXIT\n");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1: //covid infections menu
    clrscr();
    printf("******************** COVID Infection Records ********************\n");
    printf("Choose from the following records to edit\n");
    printf("1. world covid record\n");
    printf("2. USA covid record\n");
    printf("3. India covid record\n");
    printf("4. France covid record\n");
    printf("5. Brazil covid record\n");
    printf("6. Netherlands covid record\n");
    printf("7. Japan covid record\n");
    printf("8. South Korea covid record\n");
    printf("9. Return to main menu\n");
    printf("10. EXIT\n");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1: //world
     clrscr();
     worldcases();
     deleteworld();
     getch();
     break;
     case 2: //usa
     clrscr();
     usacases();
     deleteusa();
     getch();
     break;
     case 3: //india
     clrscr();
     indiacases();
     deleteindia();
     getch();
     break;
     case 4: //france
     clrscr();
     francecases();
     deletefrance();
     getch();
     break;
     case 5: //brazil
     clrscr();
     brazilcases();
     deletebrazil();
     getch();
     break;
     case 6: //netherlands
     clrscr();
     netherlandscases();
     deletenetherlands();
     getch();
     break;
     case 7: //japan
     clrscr();
     japancases();
     deletejapan();
     getch();
     break;
     case 8: //south korea
     clrscr();
     skoreacases();
     deleteskorea();
     getch();
     break;
     case 9:
     break;
     case 10:
     exit(0);
     default:
     printf("Invalid Choice Try Again\n");
     break;
    }
    case 2:
    break;
    case 3:
    exit(0);
    default:
    printf("invalid choice try again\n");
    break;
   }
   getch();
   break;
   case 3:
   exit(0);
   break;
   default:
   printf("Invalid choice Try again\n");
   break;
  }
 }
 getch();
}


