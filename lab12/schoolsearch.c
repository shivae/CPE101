/* CPE 101, Section 09
 * Dr. Campbell
 * Shiva Empranthiri, Seong Chang
 * Program for schoolsearch
 * March 11, 2014                */

#include "schoolsearch.h"

int
main(int argc, char *argv[]){
    FILE *studentIn, *teacherIn;
    int g, room, i, j;
    char fName[MAXLENGTH], lName[MAXLENGTH];
    char ftName[MAXLENGTH], ltName[MAXLENGTH];
    studentIn = fopen("list.txt", "r");
    for(i=0; i<MAXSTUDENTS; i++){
        fscanf(studentIn, "%s %s %d %d", lName, fName, &g, &room);
        strcpy(sArray[i].slastName, lName);
        strcpy(sArray[i].sfirstName, fName);
        sArray[i].grade = g;
        sArray[i].sclassroom = room;
    }
    teacherIn = fopen("teachers.txt", "r");
    for(j=0; j<MAXTEACHERS; j++){
        fscanf(teacherIn, "%s %s %d", ltName, ftName, &room);
        strcpy(tArray[j].tlastName, ltName);
        strcpy(tArray[j].tfirstName, ftName);
        tArray[j].tclassroom = room;
    }
    char entryTypeS[2];
    char lastName[MAXLENGTH];
    int grade;
    printf("Elementary School Database\n\n");
    sscanf(argv[1], "%s", entryTypeS);
    if(strcmp(entryTypeS, "S") == 0){
        sscanf(argv[2], "%s", lastName);
        getStudentInfo(sArray, tArray, lastName, MAXSTUDENTS, MAXTEACHERS);
    }
    if(strcmp(entryTypeS, "T") == 0){
        sscanf(argv[2], "%s", lastName);
        findStudents(sArray, tArray, lastName, MAXSTUDENTS, MAXTEACHERS);
    }
    if(strcmp(entryTypeS, "G") == 0){
        sscanf(argv[2], "%d", &grade);
        getGradeList(sArray, grade, MAXSTUDENTS);
    }
    if(strcmp(entryTypeS, "GT") == 0){
        sscanf(argv[2], "%d", &grade);
        findGradeTeachers(sArray, tArray, grade, MAXSTUDENTS, MAXTEACHERS);
    }
    if(strcmp(entryTypeS, "Q") == 0){
        fclose(studentIn);
        fclose(teacherIn);
        return 0;
    }
    fclose(studentIn);
    fclose(teacherIn);
    return 0;
}