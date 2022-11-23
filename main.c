#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/*int main()                                                  //Question 1
{
    int n;
    printf("Enter month number");
    scanf("%d",&n);

    switch(n)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Number of days is 31");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Number of days is 30");
        break;
    case 2:
        printf("number of days is 28 or 29");
        break;

    default:
        printf("enter invalid number");




    }

    return 0;
}*/


/*int main()                                                  //Question 2
{

    int k;
    int m=9;
    int n=3;
    printf("Enter operator choice\n 'a' for addition\n  'b' for subtion\n  'c' for multiplication\n  'd' for division\n 'a' for addition\n 'e' for exit\n");
    scanf("%c",&k);

    switch(k)
    {
    case 'a':
        printf("addition is %d",(m+n));
        break;
    case 'b':
        printf("subtraction is %d",(m-n));
        break;
    case 'c':
        printf("multiplication is %d",(m*n));
        break;

    case 'd':
        printf("division is %d",(m/n));
        break;

    case 'e':
        break;
    }


}*/

/*int main()                                                  //Question 3
{
    int n;
    printf("Enter week number");
    scanf("%d",&n);

    switch(n)
    {
    case 1: printf("it's Monday");
    break;
    case 2: printf("it's Tuesday");
    break;
    case 3: printf("it's Wednesday");
    break;
    case 4: printf("it's Thursday");
    break;
    case 5: printf("it's Friday");
    break;
    case 7: printf("it's Holiday");
    break;
    case 6: printf("it's day before the holiday");
    break;
        default:
        printf("enter invalid number");
}
    return 0;
}*/

/*int main()                                            //Question 4
{

    int n;
    printf("enter choice:\n a. check isoceles\n b.check right angle \n c. check equilateral \n d. exit\n");
    scanf("%c",&n);

    int x,y,z;
        printf("enter dimensions of triangle\n");
        scanf("%d%d%d",&x,&y,&z);

    switch(n)
    {
    case 'a':
        if((x==y && x!=z)||(y==z && y!=x) ||(z==x && z!=y))
        printf("triangle is isoceles\n\n");
        else
            printf("triangle is not isoceles\n\n");
       break;

    case 'b':
        if((x*x==y*y+z*z)||(y*y==x*x+z*z)||(z*z==x*x+y*y))
        printf("triangle is right angle triangle\n\n");
        else
            printf("triangle is not right angle tringle\n\n");
       break;

    case 'c':
        if(x==y && x==z)
        printf("triangle is equilateral triangle\n\n");
        else
            printf("triangle is not equilateral triangle\n\n");
       break;

case 'd':
    exit(1);

    }
  return 0;
}*/



/*int main()                                                    //Question 5
{
    int ch;
    printf("enter choice from 1 to 3\n");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        printf("GOOD");
        break;
    case 2:
        printf("BETTER");
        break;
    case 3:
        printf("BEST");
        break;
    default:
        printf("invalid entry");
    }
}*/

/*int main()                                                      //Question 7
{
    int yr,y;
    printf("enter year \n");
    scanf("%d",&yr);

    switch(yr%100==0)
    {
      case 1:
        switch(yr%400==0)
      {
        case 1:
        printf("leap year");break;
        case 0:
        printf("it is ordinary year");
        break;
      }break;

      case 0:
       switch(yr%4==0)
       {
        case 1:
        printf("leap  year");break;
       case 0:
        printf("ordinary year");
        break;
       }break;

      default:
        printf("invalid entry");

    }
}*/


/*int main()                                          //Question 8
{
    int n;
    float amt=0,tot_amt=0;
    printf("enter total number of consumption\n");
    scanf("%d",&n);

    switch(n<=50)
    {
    case 1:
        amt=amt+(n)*0.50;
        break;
    case 0:
        switch(n<=100)
        {
        case 1:
            amt=amt+50*0.50+(n-50)*0.75;
            break;
        case 0:
            switch(n<=250)
            {
            case 1:
                amt=amt+50*0.50+50*0.75+(n-100)*1.20;
                break;
                case 0:
                amt=amt+50*0.50+50*0.75+150*1.20+(n-250)*1.5;
            }

        }
    }
    tot_amt=tot_amt+amt*1.20;
    printf("%f",tot_amt);
}*/

/*int main()                          //Question 8
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);

    switch(n>0)
    {
    case 1:
        printf("converted number is %d",(n*-1));
        break;
    case 0:
        printf("converted number is %d",(n*-1));
        break;

    }
}*/

/*int main()                                          //Question 9
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);

    switch(n%2==0)
    {
    case 1:
        printf("nearest upper odd number is %d",(n+1));break;

    case 0:
        printf("it is already odd number");break;
    }
}*/


/*int main()                          //Question 10
{
    int a,b,c,d=0;
    float root1,root2,imaginary;
    printf("enter the value of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;

    switch(d>0)
    {
    case 1:
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("two dinstict root %f,%f ",root1,root2);break;
    case 0:
        switch(d<0)
        {
            case 1:
        root1=root2=-b/(2*a);
        imaginary=sqrt(-d)/(2*a);
        printf("two dinstict complex root %f+i%f and %f-i%f ",root1,imaginary,root2,imaginary);break;

            case 0:
                root1=root2=-b/(2*a);
                printf("two equal roots exist %f and %f",root1,root2);break;
        }
    }
}
*/










