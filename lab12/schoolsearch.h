/* CPE 101, Section 09
 * Dr. Campbell
 * Seong Chang
 * The header file for schoolsearch
 * March 12, 2014
 * */

#include <stdio.h>
#include <string.h>
#define MAXSTUDENTS 200
#define MAXTEACHERS 50
#define MAXLENGTH 30
#define MAXGRADE 6
#define MAXROOM 699

 typedef struct{
   char slastName[MAXLENGTH];
   char sfirstName[MAXLENGTH];
   int grade;
   int sclassroom;
 }studentType;

 typedef struct{
   char tlastName[MAXLENGTH];
   char tfirstName[MAXLENGTH];
   int tclassroom;
 }teacherType;

 studentType sArray[MAXSTUDENTS];
 teacherType tArray[MAXTEACHERS];

// S <Name>
 void getStudentInfo(studentType studentList[], teacherType teacherList[],
   char name[], int nStudents, int nTeachers);
// T <Name>
 void findStudents(studentType studentList[], teacherType teacherList[],
   char name[], int nStudents, int nTeachers);
// G <Number>
 void getGradeList(studentType studentlist[], int grade, int nStudents);
// GT <Number>
 void findGradeTeachers(studentType studentList[], teacherType teacherList[],
   int grade, int nStudents, int nTeachers);

 void getStudentInfo(studentType studentList[], teacherType teacherList[],
   char name[], int nStudents, int nTeachers){
   int i, j;
   for(i=0; i<nStudents; i++){
     if(strcmp(sArray[i].slastName, name) == 0){
      printf("%s %s %d %d", sArray[i].slastName,
        sArray[i].sfirstName, sArray[i].grade,
        sArray[i].sclassroom);
      for(j=0; j<nTeachers; j++){
       if(sArray[i].sclassroom == tArray[j].tclassroom){
        printf(" %s %s\n", tArray[j].tlastName, tArray[j].tfirstName);
        return;
      }
    }
  }
}
return;
}

void findStudents(studentType studentList[], teacherType teacherList[],
 char name[], int nStudents, int nTeachers){
 int i;
 int classRoom;
 //char lastName[MAXLENGTH];
 for(i=0; i<nTeachers; i++){
   if(strcmp(tArray[i].tlastName, name) == 0){
    classRoom = tArray[i].tclassroom;
  }
}
for(i=0; i<nStudents;i++){
 if(classRoom == sArray[i].sclassroom){
  printf("%s %s\n", sArray[i].slastName, sArray[i].sfirstName);
  }
}
return;
}

void getGradeList(studentType studentlist[], int grade, int nStudents){
 int i;
 for(i=0; i<nStudents; i++){
   if(sArray[i].grade == grade){
    printf("%s %s\n", sArray[i].slastName, sArray[i].sfirstName);
  }
}
return;
}

void findGradeTeachers(studentType studentList[], teacherType teacherList[],
   int grade, int nStudents, int nTeachers){
 int i, j, x;
 int tTruth[nTeachers];
 for(x=0; x<nTeachers; x++){
   tTruth[x] = 0;
 }
 for(i=0; i<nStudents; i++){
   if(sArray[i].grade == grade){
    for(j=0; j<nTeachers; j++){
     if(tArray[j].tclassroom == sArray[i].sclassroom){
      if(tTruth[j] == 0){
       printf("%s %s\n", tArray[j].tlastName, tArray[j].tfirstName);
       tTruth[j] = 1;
     }
     else{break;}
   }
 }
}
}

return;
}