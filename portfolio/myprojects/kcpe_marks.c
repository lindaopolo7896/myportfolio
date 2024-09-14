#include <stdio.h>

double compute();
double get_mean(double,double,double,double,double);
char* get_grade(double);
double input();
void show (double mean,const char* grade);



int main()
{
   int count,number;
   printf("Enter the number of students to compute marks:");
   scanf("%d",&number);




for( count=0;count<number;count++)

    compute();
    return 0;
}


double compute()
{
    double math,eng,kisw,science,SST_RE,mean;
    int count;
    const char* grade;


     printf("\t MATHEMATICS:");
     math=input();
    printf("\t ENGLISH:");
    eng=input();
    printf("\t KISWAHILI:");
    kisw=input();
    printf("\t SCIENCE:");
    science=input();
    printf("\t SST/RE:");
    SST_RE=input();




    mean=get_mean(math,eng,kisw,science,SST_RE);
     grade=get_grade(mean);
     show(mean, grade);

}


double input()
{
    double mark;
    scanf("%lf",&mark);
      if(mark<0 || mark>100)
    {
        printf("\nINVALID MARK!! Try again mark between 0-100:");
        scanf("%lf",&mark);
    }
    return mark;
}

double get_mean(double math,double eng,double kisw,double science,double SST_RE)
{
    return (math+eng+kisw+science+SST_RE)/5;


}
 char* get_grade(double mean)
   {

if (mean >= 80)      return "A";
    else if (mean >= 75) return "A-";
    else if (mean >= 70) return "B+";
    else if (mean >= 65) return "B";
    else if (mean >= 60) return "B-";
    else if (mean >= 55) return "C+";
    else if (mean >= 45) return "C";
    else if (mean >= 40) return "C-";
    else if (mean >= 35) return "D+";
    else if (mean >= 30) return "D";
    else if (mean >= 25) return "D-";
    else                 return "E";



   }
void show(double mean,const char* grade){
printf("\tMean:%2f\n",mean);
printf("\tGrade:%s\n",grade);
 printf("\n");

}
