#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include "structure.c"
#include "Add_record.c" 
#include "Print_record.c"
#include "Delete_record.c"
#include "Edit_record.c"
#include "Find_student.c"
#include "Reverse_records.c"
#include "Sort_record.c"
#include "Save_database.c"
#include "Sync_database.c"

int main()
{
	Student_details *pstu=NULL;
	char choice;
	int sub_choice;
	while(1)
	{
	       printf("-------------------------------MENU-------------------------------\n");
               printf("a/A : Add a new student record\n");
               printf("p/P : Print the records from database\n");
	       printf("s/S : Sort the student records\n");
               printf("c/C : Save the database in a file\n");
	       printf("y/Y : Sync the database from a file\n");
               printf("d/D : Delete a record\n");
               printf("e/E : Edit a record\n");
               printf("f/F : Find a student\n");
               printf("r/R : reverse the records of current display\n");
               printf("q/Q : Quit from app\n");
               printf("Enter your choice:");
	       scanf(" %c",&choice);
	       switch(choice)
	       {
		      case 'a':
		      case 'A': pstu=Add_record(pstu);
				 break;

	              case 'p':
		      case 'P': Print_record(pstu);
			        break;

		      case 's': 
		      case 'S': Sort_record(pstu);
				break;

		      case 'c':
		      case 'C': Save_database(pstu);
				break;

		      case 'y':
		      case 'Y': Sync_database(&pstu);
				break;

		      case 'd':
		      case 'D': pstu=Delete_record(pstu);
		                break;

                      case 'e':
		      case 'E': Edit_record(pstu);
				break;

		      case 'f':
		      case 'F': Find_student(pstu);
			        break;

		      case 'r':
		      case 'R': Reverse_records(pstu);
			     	break;

		      case 'q':
		      case 'Q': return 0;

		      default : printf("Invalid choice\n");
			        return 0;
	       }
	}
}
