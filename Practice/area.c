# include<stdio.h>
int main()
{
  float Area_of_circle;
  float Area_of_triangle;
  float Area_of_trapezoid;
  float Area_of_rectangle;
  float Area_of_square;
  float Area_of_ellipse;
  float Area_of_parallelogram;
  float Area_of_sector;
  float Area_of_rhombus;
  int base;
  int height;
  int a;
  int side;
  int radius;
  int length;
  int breadth;
  int angle;
  int semimajor_axis;
  int diagonal_1;
  int diagonal_2;
  int semiminor_axis;
  float pi = 3.14;

 
   Area_of_circle = pi * radius * radius  ;
   Area_of_triangle = 1 * base * height / 2 ;
   Area_of_trapezoid = (1/2)*(a+base)*height ;
   Area_of_rectangle = length * breadth ;
   Area_of_square = side * side ;
   Area_of_ellipse = pi * semimajor_axis * semiminor_axis ;
   Area_of_parallelogram = base * height ;
   Area_of_sector = (1/2) * angle * radius * radius ;
   Area_of_rhombus = (1/2) * diagonal_1 * diagonal_2 ;
   

   printf("For area of circle : \n");
    printf("Enter the value of radius : ");
    scanf("%d",&radius);
    Area_of_circle = pi * radius * radius  ;
    printf("Area of circle will be : %f\n\n",Area_of_circle);

    printf("For area of triangle : \n");
    printf("Enter the value of base : ");
    scanf("%d",&base);
    printf("Enter the value of height : ");
    scanf("%d",&height);
   Area_of_triangle = 1 * base * height / 2 ;
    printf("Area of triangle will be : %f\n\n",Area_of_triangle);


    printf("For area of trapezoid : \n");
    printf("Enter the value of base : ");
    scanf("%d",&base);
    printf("Enter the value of height : ");
    scanf("%d",&height);
     printf("Enter the value of a: ");
    scanf("%d",&a);
    Area_of_trapezoid = 1 *(a+base)*height / 2;
    printf("Area of trapezoid will be : %f\n\n",Area_of_trapezoid);


     printf("For area of rectangle : \n");
     printf("Enter the value of length : ");
    scanf("%d",&length);
    printf("Enter the value of breadth : ");
    scanf("%d",&breadth);
     Area_of_rectangle = length * breadth ;
    printf("Area of rectangle will be : %f\n\n",Area_of_rectangle);


    printf("For area of square : \n");
    printf("Enter the value of side : ");
    scanf("%d",&side);
     Area_of_square = side * side ;
    printf("Area of square will be : %f\n\n",Area_of_square);


      printf("For area of ellipse : \n");
    printf("Enter the value of semimajor_axis : ");
    scanf("%d",&semimajor_axis);
    printf("Enter the value of semiminor_axis : ");
    scanf("%d",&semiminor_axis );
   Area_of_ellipse = pi * semimajor_axis * semiminor_axis ;
    printf("Area of triangle will be : %f\n\n",Area_of_ellipse);


    printf("For area of parallelogram : \n");
    printf("Enter the value of base : ");
    scanf("%d",&base);
    printf("Enter the value of height : ");
    scanf("%d",&height);
   Area_of_parallelogram = base * height ;
    printf("Area of parallelogram will be : %f\n\n",Area_of_rectangle);


  printf("For area of sector : \n");
  printf("Enter the value of angle : ");
  scanf("%d", &angle);
  printf("Enter the value of radius : ");
  scanf("%d", &radius);
  Area_of_sector = 1 * angle * radius * radius / 2;
  printf("Area of sector will be : %f\n\n", Area_of_sector);
  

        printf("For area of rhombus : \n");
      printf("Enter the value of diagonal_1 : ");
      scanf("%d",&diagonal_1);
      printf("Enter the value of diagonal_2 : ");
      scanf("%d",&diagonal_2);
     Area_of_rhombus = 1 * diagonal_1 * diagonal_2 / 2;
      printf("Area of rhombus will be : %f\n\n",Area_of_rhombus);
  
  return 0;
}
