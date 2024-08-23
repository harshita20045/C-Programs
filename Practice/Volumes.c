#include <stdio.h>

int main()
{
  /* Volumes*/
  float Volume_of_sphere;
  float Volume_of_hemisphere;
  float Volume_of_cylinder;
  float Volume_of_cone;
  int Volume_of_cuboid;
  int Volume_of_cube;
  float pi;
  int radius;
  int height;
  int length;
  int breadth;
  int a;
  int slant_height;

  //  Volume_of_sphere  =  4 * pi * r * r * r  / 3 ;
  // Volume_of_hemisphere = ( 2 * pi * r * r * r ) / 3 ;
  //  Volume_of_cylinder = pi * r * r * height;
  //  Volume_of_cone = ( 1 * pi * r * r * height ) / 3 ;
  //  Volume_of_cuboid = length * breadth * height;
  // Volume_of_cube = a * a * a;
  pi = 3.14;

  printf(" For Volume of sphere :\n");
  printf(" Enter the value of radius : ");
  scanf("%d", &radius);
  Volume_of_sphere = 4 * pi * radius * radius * radius / 3;
  printf("Volume of sphere will be : %f \n\n", Volume_of_sphere);

  printf(" For Volume of hemisphere :\n");
  printf(" Enter the value of radius:");
  scanf("%d", &radius);
  Volume_of_hemisphere = (2 * pi * radius * radius * radius) / 3;
  printf("Volume of hemisphere will be : %f\n\n", Volume_of_hemisphere);

  printf(" For Volume of cylinder :\n");
  printf(" Enter the value of radius : ");
  scanf("%d", &radius);
  printf(" Enter the value of height : ");
  scanf("%d", &height);
  Volume_of_cylinder = pi * radius * radius * height;
  printf("Volume of cylinder will be : %f\n\n", Volume_of_cylinder);

  printf(" For Volume of cone :\n");
  printf(" Enter the value of radius : ");
  scanf("%d", &radius);
  printf(" Enter the value of height : ");
  scanf("%d", &height);
  Volume_of_cone = (1 * pi * radius * radius * height) / 3;
  printf("Volume of cone will be : %f\n\n", Volume_of_cone);

  printf(" For Volume of cuboid :\n");
  printf(" Enter the value of length : ");
  scanf("%d", &length);
  printf(" Enter the value of breadth : ");
  scanf("%d", &breadth);
  printf(" Enter the value of height : ");
  scanf("%d", &height);
  Volume_of_cuboid = length * breadth * height;
  printf("Volume of cuboid will be : ");
  printf("%d\n\n", Volume_of_cuboid);

  printf(" For Volume of cube :\n");
  printf(" Enter the value of a :");
  scanf("%d", &a);
  Volume_of_cube = a * a * a;
  printf("Volume of cone will be :");
  printf("%d", Volume_of_cube);

  return 0;
}
