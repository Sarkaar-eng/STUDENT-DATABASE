void Edit_record(Student_details *pstu)
{
	char sub_choice;
	char s,i,d,g;
	char Id[10];
	printf("Enter the Id to Edit:");
	scanf("%s",Id);
	for(int i=0;i<cnt;i++)
	{
		if(strcmp(pstu[i].Student_Id,Id)==0)
		{
			while(1)
			{
				printf("-----------------------SUB-MENU-----------------------\n");
				printf("1) For name edit 2) For DOB 3) For percentage 4) For contact 5) For email id 6)Exit\n");
				printf("Enter your choice to edit\n");
				scanf(" %c",&sub_choice);
				switch(sub_choice)
				{
					case '1':printf("Enter the name of student to edit:");
						 scanf("%s",pstu[i].Student_Name);
						 break;
					case '2':printf("Enter date of birth in dd-mm-yyyy format:");
						 scanf("%d",&pstu[i].DOB.day);
						 scanf("%d",&pstu[i].DOB.month);
						 scanf("%d",&pstu[i].DOB.year);
						 break;
					case '3':
                                                      p: char ch;
							 printf("Enter the choice s:ssc i:inter d:diploma g:graduation\n");
							 scanf(" %c",&ch);
							 if(ch=='s')
							 {
								 printf("Enter ssc marks:");
								 scanf("%f",&pstu[i].Marks.ssc);
							 }
							 else if(ch=='i')
							 {
								 printf("Enter Intermediate marks:");
								 scanf("%f",&pstu[i].Marks.PLUS_TWO.inter);
							 }
							 else if(ch=='d')
							 {
								 printf("Enter Diploma marks:");
								 scanf("%f",&pstu[i].Marks.PLUS_TWO.diploma);
							 }
							 else if(ch=='g')
							 {
								 printf("Enter graduation percentage:");
								 scanf("%f",&pstu[i].Marks.graduation);
							 }
							 else
							 {
								 printf("Invalid choice,Try again\n");
								 goto p;
							 }
							 break;
					case '4':printf("Enter contact number:");
					 	 scanf("%s",pstu[i].contact_number);
					 	 break;
					case '5':printf("Enter email_id:");
						 scanf("%s",pstu[i].email_id);
						 break;
					case '6':return;
				        default :printf("Invalid choice\n");
						 break;
				}
			}
		}
	}
}
