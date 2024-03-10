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
        printf("21.Print 1 to n\n" );
        printf("22.Factorial of a number\n" );
        printf("23.Sum of 1 to n\n" );
        printf("24.calculate a^b\n" );
        printf("25.Stair Steps\n" );
        printf("26.Merge two sorted arrays\n" );
        printf("27.Add Two Matrices\n" );
        printf("28.Multiply two matrices\n" );
        printf("29.Subtract two matrices\n" );
        printf("30.Transpose of matrix\n" );
        printf("31.Rotate an Array\n" );
        printf("32.Spiral of an Array\n" );
        printf("33.Wave printing Array\n" );
        printf("34.Wave printing Array 2\n" );
        printf("35.Size of a string\n" );
        printf("36.Reverse a string\n" );
        printf("37.Print the day from input number\n" );
        printf("38.Simple Calculator to perform basic operation\n" );
        printf("39.Largest Element in an array\n" );
        printf("40.Second Largest Element in an array\n" );
        printf("41. Exit\n");

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


        case 41:
            printf("Exiting the program. Goodbye!\n");
            exit(0);
            break;

        case 21:
            print_1_to_n();
            break;

        case 22:
            factorial();
            break;

        case 23:
            summmm_1_to_n();
            break;

        case 24:
            power_a_b();
            break;

        case 25:
            stair_path();
            break;

        case 26:
            merge_two_sorted_arrays();
            break;

        case 27:
            add_two_matrices();
            break;

        case 28:
            multiply_matrices();
            break;

        case 29:
            subtract_matrices();
            break;

        case 30:
            transpose_matrix();
            break;

        case 31:
            rotate_array();
            break;

        case 32:
            spiral_array();
            break;

        case 33:
            wave_printing_array();
            break;

         case 34:
            wave_printing_array2();
            break;

         case 35:
            size_of_string();
            break;

         case 36:
            reverse_string();
            break;

         case 37:
            print_day_from_number();
            break;

         case 38:
            simple_calculator();
            break;

         case 39:
            largest_element();
            break;

         case 40:
            second_largest_element();
            break;





        default:
            printf("Invalid choice. Please choose again.\n");
            break;
        }

        if (choice != 41)
        {
            printf("\nPress enter to continue...");
            getchar();
            getchar();
        }

    }
    while (choice != 41);

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
    int limitor=print_count();
    for(j=1;j<=limitor;j++)
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
    printf("Enter number\n");
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
        printf("Move disk from %c to %c\n",from,to);
        return;
    }
    // Move top n-1 disks from A to B using C as auxiliary
    towers(n-1, from, to, aux);
    // Move remaining disk from A to C
    printf("Move disk %d from %c to %c\n", n, from, to);
    // Move n-1 disks from B to C using A as auxiliary
    towers(n-1, aux, from, to);
}
void print_1_to_n()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}
void decreasing(int a)
{
    if(a==0) return;
    printf("%d ",a);
    decreasing(a-1);
    return 0;
}
void factorial()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int f=fact(n);
    printf("Factorial=%d",f);
    return 0;
}
int fact(int a)
{
    if(a==1) return 1;
    return a*fact(a-1);
}
void summmm_1_to_n()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    summmm(n,0);
    return;
}
void summmm(int a,int s)
{
    if(a==0)
    {
        printf("Sum=%d",s);
        return;
    }
    summmm(a-1,s+a);
    return;
}
void power_a_b()
{
    int a;
    printf("Enter the base of the number\n");
    scanf("%d",&a);
    int b;
    printf("Enter the power of the number\n");
    scanf("%d",&b);
    int p=power(a,b);
    printf("a^b=%d",p);
    return 0;
}
int power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    return a*power(a,b-1);
}


//number of single step or double step allowed to reach the nth step
void stair_path()
{
   int n;
   printf("Enter the total numbers of steps\n");
   scanf("%d",&n);
   int ways=stair(n);
   printf("Total Ways=%d",ways);
   return 0;
}
int stair(int n)
{
    if(n==1 || n==2) return n;
    int totalways;
    return totalways=stair(n-1) + stair(n-2);
}

void merge_two_sorted_arrays()
{
    int arr[4];
    printf("Enter the values for array 1\n");
    for(int i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    int brr[5];
    printf("Enter the values for array 2\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&brr[i]);
    }
    int res[9];
    merge_array(arr,brr,4,5,res);
    return 0;

}
void merge_array(int arr[],int brr[],int n,int m,int res[])
{
    int i=0;
    int j=0;
    int k=0;
    while(i<=n-1 && j<=m-1)
    {
        if(arr[i]<brr[j])
        {
            res[k]=arr[i];
            i++;
        }
        else{
            res[k]=brr[j];
            j++;
        }
        k++;
    }
    if(i==n)
    {
        while(j<=m-1)
        {
            res[k]=brr[j];
            k++;
            j++;
        }
    }
    else if(j==m)
    {
        while(i<=n-1)
        {
            res[k]=arr[i];
            k++;
            i++;
        }
    }
    for(int i=0;i<9;i++)
    {
        printf("%d ",res[i]);
    }
    return;
}

void add_two_matrices()
{
    int a[2][2];
    printf("Enter the elements for array 1\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int b[2][2];
    printf("Enter the elements for array 2\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int c[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
void multiply_matrices()
{
    int a[2][2];
    printf("Enter the elements for array 1\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int b[2][2];
    printf("Enter the elements for array 2\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int c[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c[i][j]=a[i][j]*b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
void subtract_matrices()
{
    int a[2][2];
    printf("Enter the elements for array 1\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int b[2][2];
    printf("Enter the elements for array 2\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int c[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}

//123
//456
//789
void transpose_matrix()
{
    int a[3][3];
    printf("Enter the elements of the array 1\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    int c[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        c[i][j]=a[j][i];
        printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}

void rotate_array()
{
    int a[3][3];
    printf("Enter the elements of the array 1\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    int c[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        c[i][j]=a[j][i];
        printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<3;i++)
    {
        int j=0;
        int k=2;
        while(j<k)
        {
            int temp=c[i][j];
            c[i][j]=c[i][k];
            c[i][k]=temp;
            j++;
            k--;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
void spiral_array()
{
    int n;
    printf("Enter the rows of the matrix\n");
    scanf("%d",&n);
    int m;
    printf("Enter the columns of the matrix\n");
    scanf("%d",&m);
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        if(n%2==0)
        {
           for(int j=0;j<n;j++)
              {
                 printf("%d ",a[i][j]);
              }
              printf("\n");
        }
        else
        {
            for(int j=n-1;j>=0;j--)
               {
                  printf("%d ",a[i][j]);
               }
               printf("\n");
        }
    }
}

void wave_printing_array()
{
    int n;
    printf("Enter the rows of the matrix\n");
    scanf("%d",&n);
    int m;
    printf("Enter the columns of the matrix\n");
    scanf("%d",&m);
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        if(i%2==0)
        {
           for(int j=0;j<n;j++)
             {
                printf("%d ",a[i][j]);
             }
           printf("\n");
        }
        else
        {
            for(int j=n-1;j>=0;j--)
              {
                printf("%d ",a[i][j]);
              }
              printf("\n");
        }
    }
}
void wave_printing_array2()
{
    int n;
    printf("Enter the rows of the matrix\n");
    scanf("%d",&n);
    int m;
    printf("Enter the columns of the matrix\n");
    scanf("%d",&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    int minr=0;
    int maxr=n-1;
    int minc=0;
    int maxc=m-1;
    int tne=m*n;
    int count=0;
    while(count<tne)
    {
        for(int j=minc;j<=maxc;j++)
        {
            printf("%d ",a[minr][j]);
            count++;
        }
        minr++;
        if(count>=tne) break;
        for(int i=minr;i<=maxr;i++)
        {
            printf("%d ",a[i][maxc]);
            count++;
        }
        maxc--;
        if(count>=tne) break;
        for(int j=maxc;j>=minc;j--)
        {
            printf("%d ",a[maxr][j]);
            count++;
        }
        maxr--;
        if(count>=tne) break;
        for(int i=maxr;i>=minr;i--)
        {
            printf("%d ",a[i][minc]);
            count++;
        }
        minc++;
        if(count>=tne) break;
    }
}
void size_of_string()
{
    char str[40];
    puts("Enter a string");
    scanf("%s",str);
    puts("The size of string is:");
    int size=0;
    int i=0;
    while(str[i]!='\0')
    {
        size++;
        i++;
    }
    printf("%d",size);
    return 0;
}
void reverse_string()
{
    char str[40];
    puts("Enter a string");
    scanf("%s",str);
    int size=0;
    int i=0,s;
    while(str[i]!='\0')
    {
        size++;
        i++;
    }
    for(int k=0,s=size-1;k<=s;k++,s--)
    {
        char temp =str[k];
        str[k]=str[s];
        str[s]=temp;
    }
    puts("The reverse string is:");
    puts(str);
    return 0;
}

void print_day_from_number()
{
    int n;
    printf("Enter the day number(1-7)\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
            printf("Invalid Input");
    }
}

void simple_calculator()
{
    float a;
    printf("Enter the first number\n");
    scanf("%f",&a);
    float b;
    printf("Enter the second number\n");
    scanf("%f",&b);
    char ch;
    printf("Enter the type of operation to be performed\n");
    scanf("%s",&ch);
    switch(ch)
    {
         case '+':
         printf("%f",a+b);
         break;

         case '-':
         printf("%f",a-b);
         break;

         case '*':
         printf("%f",a*b);
         break;

         case '/':
         printf("%f",a/b);
    }
}
void largest_element()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=1;i<=n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("Max element=%d",max);
    return 0;
}

void second_largest_element()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    for(int i=0;i<=n;i++)
    {
        if(arr[i]!=max && smax<arr[i])
        {
            smax=arr[i];
        }
    }
    printf("Second max=%d",smax);
}



