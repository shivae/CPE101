#define MAXSIZE 10
#define EPSILON 0.00001

void sumArray(double array1[], double array2[], double array3[]);
int inSquare(double x, double y, double areaMAX);
double sum(double x, double y);
double product(double x, double y);

void sumArray(double array1[], double array2[], double array3[]){
   int i = 0;
   while (i < MAXSIZE){
      array3[i] = array1[i] + array2[i];
   }
}

int inSquare(double x, double y, double areaMAX){
   double area;
   area = x*y;
   if (area > (areaMAX + EPSILON)){
      return -1;
   }
   if (area < (areaMAX - EPSILON)){
      return 1;
   }
   if (((areaMAX - EPSILON) <= area) && (area <=(areaMAX + EPSILON))){
      return 0;
   }
   return -2;
}
   
double sum(double x, double y){
   x = (x + y);
   return x;
}

double product(double x, double y){
   x = (x*y);
   return x;
}
