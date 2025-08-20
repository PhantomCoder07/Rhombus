// Standard
#include <stdio.h>
int main()
{
    float dia1,dia2,a,area,peri;
    printf("Enter rhombus's two diagonal values: ");
    scanf("%f %f",&dia1,&dia2);
    printf("Enter rhombus's side value: ");
    scanf("%f",&a);
    area=(dia1*dia2)/2;
    peri=4*a;
    printf("The area of rhombus: %.2f\n",area);
    printf("The perimeter of rhombus: %.2f\n",peri);
    return 0;
}
// Function
#include <stdio.h>
float area (float d1, float d2)
{
    return (d1*d2)/2;
}
float peri (float a)
{
    return 4*a;
}
int main()
{
    float dia1,dia2,a;
    printf("Enter rhombus's two diagonal values: ");
    scanf("%f %f",&dia1,&dia2);
    printf("Enter rhombus's side value: ");
    scanf("%f",&a);
    printf("The area of rhombus: %.2f\n",area(dia1,dia2));
    printf("The perimeter of rhombus: %.2f\n",peri(a));
    return 0;
}
// Structure 
#include <stdio.h>
struct rhombus
{
    float dia1,dia2,a,area,peri;
};
int main()
{
    struct rhombus rh;
    printf("Enter rhombus's two diagonal values: ");
    scanf("%f %f",&rh.dia1,&rh.dia2);
    printf("Enter rhombus's side value: ");
    scanf("%f",&rh.a);
    rh.area=(rh.dia1*rh.dia2)/2;
    rh.peri=4*rh.a;
    printf("The area of rhombus: %.2f\n",rh.area);
    printf("The perimeter of rhombus: %.2f\n",rh.peri);
    return 0;
}
// File 
#include <stdio.h>
int main()
{
    FILE *file1,*file2;
    float dia1,dia2,a,area,peri;
    char ch;
    file1 = fopen ("Square.txt","w");
    file2 = fopen ("Square.txt","r");
    if (file1==NULL)
        printf ("The file does not exist");
    else
    {
        printf("Enter rhombus's two diagonal values: ");
        scanf("%f %f",&dia1,&dia2);
        printf("Enter rhombus's side value: ");
        scanf("%f",&a);
        area=(dia1*dia2)/2;
        peri=4*a;
        fprintf(file1,"The area of rhombus: %.2f\nThe perimeter of rhombus: %.2f\n",area,peri);
        fclose (file1);
    }
    if (file2==NULL)
        printf ("The file does not exist");
    else
    {
        while (!feof(file2))
        {
            ch=fgetc(file2);
            printf ("%c",ch);
        }
        fclose (file2);
    }
    return 0;
}
