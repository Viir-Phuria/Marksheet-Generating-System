#include<stdio.h>
#include<stdlib.h>
int main()
{
int rollno, std, percentage, sum;
int maths, english, hindi, marathi, pt, art, craft, evs, science, history, geography, fs, science1, science2, algebra, geometry;
char name[30], school_name[30];
printf("Enter your Roll No:");
scanf("%d", &rollno);
printf("Enter your name:");
scanf(" %s", name);
printf("Enter your School name:");
scanf(" %s", school_name);
standard:
printf("Enter your Standard (1-10):");
scanf("%d", &std);
if(std>11)
{
goto standard;
}
switch (std)
{
case 1:
case 2:
mat:
printf("Enter marks of maths:");
scanf("%d", &maths);
if(maths>100)
{
goto mat;
}
eng:
printf("Enter marks of english:");
scanf("%d", &english);
if(english>=100)
{
goto eng;
}
hin:
printf("Enter marks of hindi:");
scanf("%d", &hindi);
if(hindi>=100)
{
goto hin;
}
mar:
printf("Enter marks of marathi:");
scanf("%d", &marathi);
if(marathi>100)
{
goto mar;
}
printf("\n \n \n \n \n \n \n \n \n \n \n");
printf("===================================================\n");
printf("MARKSHEET OF STANDARD:%d \n", std);
printf("Student Name: %s\n",name);
printf("===================================================\n");
printf("Roll No.: %d\n",rollno);
printf("===================================================\n");
printf("SUBJECT\t\t\tMARKS\n");
printf("===================================================\n");
printf("Maths\t\t\t %d \n\n", maths);
printf("English\t\t\t %d \n\n", english);
printf("Hindi\t\t\t %d \n\n", hindi);
printf("Computer\t\t %d \n\n", marathi);
printf("===================================================\n");
printf("Total Marks:\t\t%d\n", maths+english+hindi+marathi);
printf("===================================================\n");
sum=maths+science+english+hindi+marathi;
percentage=sum/4*1;
printf("Total Percentage:\t%d%%\n",percentage);
printf("===================================================\n");
break;

case 3:
case 4:
case 5:
math:
printf("Enter marks of maths:");
scanf("%d", &maths);
if(maths>100)
{
goto math;
}
engl:
printf("Enter marks of english:");
scanf("%d", &english);
if(english>=100)
{
goto engl;
}
hind:
printf("Enter marks of hindi:");
scanf("%d", &hindi);
if(hindi>=100)
{
goto hind;
}
mara:
printf("Enter marks of marathi:");
scanf("%d", &marathi);
if(marathi>100)
{
goto mara;
}
pt:
printf("Enter marks of pt:");
scanf("%d", &pt);
if(pt>100)
{
goto pt;
}
art:
printf("Enter marks of art:");
scanf("%d", &art);
if(art>100)
{
goto art;
}
craft:
printf("Enter marks of craft:");
scanf("%d", &craft);
if(craft>100)
{
goto craft;
}
evs:
printf("Enter marks of evs:");
scanf("%d", &evs);
if(evs>100)
{
goto evs;
}
printf("\n \n \n \n \n \n \n \n \n \n \n");
printf("===================================================\n");
printf("MARKSHEET OF STANDARD:%d \n", std);
printf("===================================================\n");
printf("Student Name: %s\n",name);
printf("===================================================\n");
printf("Roll No.: %d\n",rollno);
printf("===================================================\n");
printf("SUBJECT\t\t\tMARKS\n");
printf("===================================================\n");
printf("Maths\t\t\t %d \n\n", maths);
printf("English\t\t\t %d \n\n", english);
printf("Hindi\t\t\t %d \n\n", hindi);
printf("Computer\t\t %d \n\n", marathi);
printf("PT\t\t\t\t %d \n\n", pt);
printf("ART\t\t\t\t %d \n\n", art);
printf("Craft\t\t\t %d \n\n", craft);
printf("EVS\t\t\t\t %d \n\n", evs);
printf("===================================================\n");
printf("Total Marks:\t\t%d\n", maths+english+hindi+marathi+pt+art+craft+evs);
printf("===================================================\n");
sum=maths+english+hindi+marathi+pt+art+craft+evs;
percentage=sum/8*1;
printf("Total Percentage:\t%d%%\n",percentage);
printf("===================================================\n");
break;
case 6:
case 7:
maths:
printf("Enter marks of maths:");
scanf("%d", &maths);
if(maths>100)
{
goto maths;
}
english:
printf("Enter marks of english:");
scanf("%d", &english);
if(english>=100)
{
goto english;
}
hindi:
printf("Enter marks of hindi:");
scanf("%d", &hindi);
if(hindi>=100)
{
goto hindi;
}
marathi:
printf("Enter marks of marathi:");
scanf("%d", &marathi);
if(marathi>100)
{
goto marathi;
}
his:
printf("Enter marks of history:");
scanf("%d", &history);
if(history>100)
{
goto his;
}
geography:
printf("Enter marks of geography:");
scanf("%d", &geography);
if(craft>100)
{
goto geography;
}
sci:
printf("Enter marks of science:");
scanf("%d", &science);
if(evs>100)
{
goto sci;
}
printf("\n \n \n \n \n \n \n \n \n \n \n");
printf("===================================================\n");
printf("MARKSHEET OF STANDARD:%d \n", std);
printf("===================================================\n");
printf("Student Name: %s\n",name);
printf("===================================================\n");
printf("Roll No.: %d\n",rollno);
printf("===================================================\n");
printf("SUBJECT\t\t\tMARKS\n");
printf("===================================================\n");
printf("Maths\t\t\t %d \n\n", maths);
printf("English\t\t\t %d \n\n", english);
printf("Hindi\t\t\t %d \n\n", hindi);
printf("Computer\t\t %d \n\n", marathi);
printf("Science\t\t\t %d \n\n", science);
printf("History\t\t\t %d \n\n", history);
printf("Geography\t\t %d \n\n", geography);
printf("===================================================\n");
printf("Total Marks:\t\t%d\n", maths+english+hindi+marathi+science+geography+history);
printf("===================================================\n");
sum=maths+english+hindi+marathi+science+geography+history;
percentage=sum/7*1;
printf("Total Percentage:\t%d%%\n",percentage);
printf("===================================================\n");
break;
case 8:
printf("Enter marks of maths:");
scanf("%d", &maths);
if(maths>100)
{
goto mat;
}
Eng:
printf("Enter marks of english:");
scanf("%d", &english);
if(english>=100)
{
goto Eng;
}
Hin:
printf("Enter marks of hindi:");
scanf("%d", &hindi);
if(hindi>=100)
{
goto Hin;
}
Mar:
printf("Enter marks of marathi:");
scanf("%d", &marathi);
if(marathi>100)
{
goto Mar;
}
His:
printf("Enter marks of history:");
scanf("%d", &history);
if(history>100)
{
goto His;
}
Geo:
printf("Enter marks of geography:");
scanf("%d", &geography);
if(craft>100)
{
goto Geo;
}
Sci:
printf("Enter marks of science:");
scanf("%d", &science);
if(evs>100)
{
goto Sci;
}
fs:
printf("Enter marks of french/sanskrit:");
scanf("%d", &fs);
if(fs>100)
{
goto fs;
}
printf("\n \n \n \n \n \n \n \n \n \n \n");
printf("===================================================\n");
printf("MARKSHEET OF STANDARD:%d \n", std);
printf("===================================================\n");
printf("Student Name: %s\n",name);
printf("===================================================\n");
printf("Roll No.: %d\n",rollno);
printf("===================================================\n");
printf("SUBJECT\t\t\t\tMARKS\n");
printf("===================================================\n");
printf("Maths\t\t\t\t %d \n\n", maths);
printf("English\t\t\t\t %d \n\n", english);
printf("Hindi\t\t\t\t %d \n\n", hindi);
printf("Computer\t\t\t %d \n\n", marathi);
printf("Science\t\t\t\t %d \n\n", science);
printf("History\t\t\t\t %d \n\n", history);
printf("Geography\t\t\t %d \n\n", geography);
printf("French/Sanskrit\t\t %d \n\n", fs);
printf("===================================================\n");
printf("Total Marks:\t\t%d\n", maths+english+hindi+marathi+science+geography+history+fs);
printf("===================================================\n");
sum=maths+english+hindi+marathi+science+geography+history+fs;
percentage=sum/8*1;
printf("Total Percentage:\t%d%%\n",percentage);
printf("===================================================\n");
break;
case 9:
case 10:
alg:
printf("Enter marks of Algebra:");
scanf("%d", &algebra);
if(algebra>100)
{
goto alg;
}
ENG:
printf("Enter marks of english:");
scanf("%d", &english);
if(english>=100)
{
goto ENG;
}
HIN:
printf("Enter marks of hindi:");
scanf("%d", &hindi);
if(hindi>=100)
{
goto HIN;
}
MAR:
printf("Enter marks of marathi:");
scanf("%d", &marathi);
if(marathi>100)
{
goto MAR;
}
HIS:
printf("Enter marks of history:");
scanf("%d", &history);
if(history>100)
{
goto HIS;
}
GEO:
printf("Enter marks of geography:");
scanf("%d", &geography);
if(geography>100)
{
goto GEO;
}
sci1:
printf("Enter marks of science1:");
scanf("%d", &science1);
if(science1>100)
{
goto sci1;
}
sci2:
printf("Enter marks of science2:");
scanf("%d", &science2);
if(science2>100)
{
goto sci2;
}
FS:
printf("Enter marks of french/sanskrit:");
scanf("%d", &fs);
if(fs>100)
{
goto FS;
}
geometr:
printf("Enter marks of geometry:");
scanf("%d", &geometry);
if(geometry>100)
{
goto geometr;
}
printf("\n \n \n \n \n \n \n \n \n \n \n");
printf("===================================================\n");
printf("MARKSHEET OF STANDARD:%d \n", std);
printf("===================================================\n");
printf("Student Name: %s\n",name);
printf("===================================================\n");
printf("Roll No.: %d\n",rollno);
printf("===================================================\n");
printf("SUBJECT\t\t\t\tMARKS\n");
printf("===================================================\n");
printf("Maths\t\t\t\t %d \n\n", algebra);
printf("English\t\t\t\t %d \n\n", english);
printf("Hindi\t\t\t\t %d \n\n", hindi);
printf("Computer\t\t\t %d \n\n", marathi);
printf("Science1\t\t\t %d \n\n", science1);
printf("History\t\t\t\t %d \n\n", history);
printf("Geography\t\t\t %d \n\n", geography);
printf("Geometery\t\t\t %d \n\n", geometry);
printf("Science2\t\t\t %d \n\n", science2);
printf("French/Sanskrit\t\t %d \n\n", fs);
printf("===================================================\n");
printf("Total Marks:\t\t%d\n",english+hindi+marathi+science1+science2+geography+history+fs+algebra+geometry);
printf("===================================================\n");
sum=english+hindi+marathi+science1+science2+geography+history+fs+algebra+geometry;
percentage=sum/10*1;
printf("Total Percentage:\t%d%%\n",percentage);
printf("===================================================\n");
break;
default:
printf("Invalid standard");
}
if (percentage>=35)
{
printf("\t\t\t\t\tPASS \n");
}
else
{
printf("\t\t\t\t\tFAIL \n");
}
printf("===================================================\n");
}
