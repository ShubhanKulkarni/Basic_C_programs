#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include <math.h>

void welcome()
{
    int i = 0;
    printf("\t");
    for (i = 0; i < 50; i++)
        printf("* ");

    printf("\n\n\t\t\t\t\t\tBASIC PROGRAMS BY SHUBHAN\n\n\n");
printf("\t");
    for (i = 0; i < 50; i++)
        printf("* ");

    printf("\n\n");
}

int main()
{
    int choice;

    do
    {
        welcome();
        printf("1. Sum of two numbers\n");
        printf("2. Average of two numbers\n");
        printf("3. Printing Odd numbers\n");
        printf("4. Counting the number of digits\n");
        printf("5. Print Sum\n");
        printf("6. Pascal Triangle\n");
        printf("7. Perfect numbers\n");
        printf("8. Armstrong Number check\n");
        printf("9. Consonant and Vowel check \n");
        printf("10.Even or odd check \n");
        printf("11.Searching element in the array\n");
        printf("12.Design using loops 1 \n" );
        printf("13.Design using loops 2 \n" );
        printf("14.Design using loops 3 \n" );
        printf("15.Design using loops 4 \n" );
        printf("16.Fibonacci Series \n" );
        printf("17.Sorting Elements 1(Bubble Sort)\n" );
        printf("18.Sorting Elements 2(Quick SOrt) \n" );
        printf("19.Maze Source to destination \n" );
        printf("20.Towers of Hanoi\n" );
        printf("21. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            sum_of_two_numbers();
            break;

        case 2:
            average();
            break;

        case 3:
            print_odd();
            break;

        case 4:
            print_count();
            break;

        case 5:
            print_sum();
            break;

        case 6:
            pascal_triangle();
            break;


        case 7:
            perfect_numbers();
            break;

        case 8:
            armstrong_number();
            break;

        case 9:
            check_alphabet();
            break;

        case 10:
            check_even_odd();
            break;

        case 11:
            searching_element();
            break;

        case 12:
            design();
            break;

        case 13:
            design2();
            break;

        case 14:
            design3();
            break;

        case 15:
            design4();
            break;

        case 16:
            fibonacci();
            break;

        case 17:
            sorting_element();
            break;

        case 18:
            sorting_element2();
            break;

        case 19:
            maze_path();
            break;

        case 20:
            towers_of_hanoi();
            break;


        case 21:
            printf("Exiting the program. Goodbye!\n");
            exit(0);
            break;

        default:
            printf("Invalid choice. Please choose again.\n");
            break;
        }

        if (choice != 21)
        {
            printf("\nPress enter to continue...");
            getchar();
            getchar();
        }

    }
    while (choice != 21);

   return 0;
}
int sum_of_two_numbers()
{
    int x;
    int b;
    printf("Enter number to be added\n");
    scanf("%d%d",&x,&b);
    int c=x+b;
    printf("Sum of Two numbers=%d\n",c);
    return;
}
void average()
{
    float a,b;
    printf("Enter the two numbers\n");
    scanf("%f%f",&a,&b);
    float avg;
    float sum=a+b;
    avg=sum/2;
    printf("Average= %f\n",avg);
    return;
}
void print_odd()
{
int u;
printf("Enter the number till you want the odd numbers printed\n");
scanf("%d",&u);
int i;
    for(i=1;i<=u;i++)
    {
        if(i%2==1)

        {
            printf("%d ",i);

        }
    }
    printf("\n");
}
int print_count()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    int count=0;
    while(num>0)
    {
        count=count+1;
        num=num/10;
    }
    printf("Number of digits=%d\n",count);
    return count;
}
int print_sum()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    int m=num;
    int ld,fd,digit=0,sum=0,a;
    ld=num%10;
    printf("Last digit=%d\n",ld);
    while(num!=0)
    {
        ld=num%10;
        digit=digit+1;
        num=num/10;
    }
    printf("digit=%d\n",digit);
    a=pow(10,digit-1);
    fd=(m/a);
    printf("first digit=%d\n",fd);
    sum=fd+ld;
    return sum;
}
void pascal_triangle()
{
    int rows, i, j, sum = 0;

    printf("Enter the number of rows for Pascal's triangle: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        int num = 1;
        for (j = 0; j <= i; j++) {
            printf("%d ", num);
            sum += num;
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }
    printf("The sum of all numbers in Pascal's triangle is: %d\n", sum);
}
int perfect_numbers()
{
    int n;
    printf("Enter the number to check whether it is perfect number or not\n");
    scanf("%d",&n);
    int ld,sum=0,j;
    int temp=n;
    for(j=1;j<=print_count;j++)
    {
        ld=n%j;
        if(ld==0)
        {
            sum=sum+j;
        }
    }
    printf("Sum=%d\n",sum);
    if(sum==temp)
    {
        printf("It is a perfect number\n");
    }
    else
    {
        printf("It is not a perfect number\n");
    }
}
void armstrong_number()
{
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
      // remainder contains the last digit
      remainder = originalNum % 10;

    result += remainder * remainder * remainder;

      // removing last digit from the original number
    originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong Number.\n", num);

    return 0;
}
void check_alphabet()
{
    char c;
    scanf("%c", &c);
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        printf("Vowel\n");
    else if((c>='a'&&c<='z') || (c>='A'&&c<='Z'))
        printf("Consonant\n");
    else
        printf("Invalid alphabet\n");
    return 0;
}
void check_even_odd()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
     return 0;
}
void searching_element()
{
    int n,s;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int arr[n];
    readarray(arr,n);
    printarray(arr,n);
    searcharray(arr,n);
}
void readarray(int*a,int n)
{
    int i;
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
}
void printarray(int*a,int n)
{
    int i;
        for(i=0;i<n;i++)
    {
        printf("%d",*(a+i));
    }
    printf("\n");
}
void searcharray(int*a,int n)
{
    int i,item,pos=1;
    printf("Enter the element to be searched for:\n");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(item==*(a+i))
        {
            pos=i;
            break;
        }
    }
    if(pos==1)
        printf("Element not found");
    else
        printf("Element found at %d position",pos+1);
}
void design()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int i,j;
    int k=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}
void design2()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int i,j;
    int a=n;
    for(i=1;i<=n;i++)
    {
        for(j=a;j>0;j--)
        {
            printf("$");
        }
        a--;
        printf("\n");
    }
}
void design3()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int nst=1;
    int nsp=n-1;
    for(int i=1;i<=2*n-1;i++)
    {
        for(int j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        if(i<n-1)
            nsp--;
        else nsp++;

        for(int k=1;k<=nst;k++)
        {
            printf("$");
        }
        if(i<n-1)
            nst+=2;
        else nst-=2;
        printf("\n");
    }
}
void design4()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int nst=1;
    int nsp=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        nsp--;
        for(int k=1;k<=nst;k++)
        {
            printf("&");
        }
        nst+=2;
        printf("\n");
    }
}
void fibonacci()
{
    int n;
    int f;
    printf("Enter n\n");
    scanf("%d",&n);
    int a=-1,b=1,c;
    for(int i=1;i<=n;i++)
    {
    c=a+b;
    printf("%d",c);
    printf(" ");
    a=b;
    b=c;
    }
}
void sorting_element()
{
    int n;
    printf("Enter the total number of elements\n");
    scanf("%d",&n);
    int arr[n];
    readarray(arr,n);
    printarray(arr,n);
    bubblesort(arr,n);
    printarray(arr,n);
}
void bubblesort(int *arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
{
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }

}
}
void sorting_element2()
{
    int n;
    printf("Enter the total number of elements\n");
    scanf("%d",&n);
    int arr[n];
    readarray(arr,n);
    printarray(arr,n);
    quicksort(arr,0,n-1);
    printarray(arr,n);
}
void quicksort(int *arr,int low,int high)
{
    if(low<high)
    {
        int partitionIndex= partition(arr,low,high);
        quicksort(arr,low,partitionIndex-1);
        quicksort(arr,partitionIndex+1,high);
    }

}
int partition(int *arr,int low,int high)
{
    int pivot=arr[low];
    int i=low;//i = start
    int j=high;// j= end
    while(i<j)
    {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j)
        {
//            swap(&arr[i], &arr[j]);
              int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
        }
    }
//    swap(arr[i], arr[j]);
    int tem = arr[low];
        arr[low] = arr[j];
        arr[j] = tem;
    return j;
}

// Either you can go down or right to reach a point in a square matrix
// for example if we are at 0,0 position and we intend to go to 2,2
//valid answers for above are d(down),d,right(right),r
//d,r,d,r
//r.d.r.d
//r,r,d,d
//r,d,d,r
//d,r,r,d
void maze_path()
{
    int n;
    printf("Enter the rows of the matrix\n");
    scanf("%d",&n);
    int m;
    printf("Enter the columns of the matrix\n");
    scanf("%d",&m);
    int total_ways=maze(1,1,n,m);
    printf("Total Number of ways to reach destination=%d\n",total_ways);
}
int maze(int current_row,int current_column,int end_row,int end_column)
{
    int rightways=0;
    int downways=0;
    if(current_row==end_row && current_column==end_column)//reached destination
    {
        return 1;
    }
    if(current_row==end_row)//we are at the end of rows so we can only go right now
    {
    rightways+=maze(current_row,current_column+1,end_row,end_column);
    }
    else if(current_column==end_column)//we are at end of columns now so we can only go down now
    {
    downways+=maze(current_row+1,current_column,end_row,end_column);
    }
    else if(current_row<end_row && current_column<end_column)// we can go both down and right
    {
    rightways=maze(current_row,current_column+1,end_row,end_column);
    downways=maze(current_row+1,current_column,end_row,end_column);
    }
    int totalways= rightways+downways;
    return totalways;
}
void towers_of_hanoi()
{
    int n;
    printf("Enter the number of disks to be moved\n");
    scanf("%d",&n);
    towers(n,'A','B','C');
    return 0;
}
void towers(int n,char from,char aux,char to)
{
    if(n==1)
    {
        printf("Move disk form %c to %c\n",from,to);
        return;
    }
    // Move top n-1 disks from A to B using C as auxiliary
    towers(n-1, from, to, aux);
    // Move remaining disk from A to C
    printf("Move disk %d from %c to %c\n", n, from, to);
    // Move n-1 disks from B to C using A as auxiliary
    towers(n-1, aux, from, to);
}




