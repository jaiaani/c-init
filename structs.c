#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{

  char name[50];
  char major[50];
  int age;
  double gpa;
};

typedef struct retangle{
  int length;
  int width;
}retangle;

typedef struct position{
  int x;
  int y;
}position;

typedef struct buildingPlan{
  char owner[30];
  retangle retangle;
  position position;
}buildingPlan;

int main(){

    struct Student student1;
    student1.age = 22;
    strcpy( student1.name, "Karen");
    strcpy(student1.major, "Business");

    printf("%s\n", student1.name);

    buildingPlan myHouse = {"Johana Frey", {5, 10}, {32, 48}};

    printf("The house at %d %d (size %d %d) is owned by: %s\n", myHouse.position.x, 
                                                                myHouse.position.y,
                                                                myHouse.retangle.width,
                                                                myHouse.retangle.length,
                                                                myHouse.owner);

    int size = 3;
    position path[] = {{0, 1}, {1, 2}, {3, 4}};

    for(int i = 0; i < size; i++){
      printf("%d - %d\n", path[i].x, path[i].y);
    }

    buildingPlan *structPointer = &myHouse;
    printf("Position x: %d\n", structPointer->position.x);

    return 0;
}