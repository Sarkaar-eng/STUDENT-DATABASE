
int cnt=0;
int arr[26]={0};
void Generate_ID(Student_details *pstu)
{
        char prefix[]="v24he7";
	char firstchar=tolower(pstu[cnt].Student_Name[0]);
        int index=firstchar-'a';
        /*if(index<0 || index>25)
        {
                index=0;
        }*/
        arr[index]++;
        sprintf(pstu[cnt].Student_Id,"%s%c%d",prefix,firstchar,arr[index]);
}
void *Add_record(Student_details *pstu)
{
	int optional;
	pstu=(Student_details *)realloc(pstu,(cnt+1)*sizeof(Student_details));
	if(pstu==NULL)
	{
		printf("Memory allocation failed\n");
		exit(1);
	}
       	printf("Enter the name of student:");
	scanf("%s",pstu[cnt].Student_Name);
	Generate_ID(pstu);
       	printf("Enter date of birth in dd-mm-yyyy format:");
	scanf("%d",&pstu[cnt].DOB.day);
	scanf("%d",&pstu[cnt].DOB.month);
	scanf("%d",&pstu[cnt].DOB.year);
	printf("Enter ssc marks:");
	scanf("%f",&pstu[cnt].Marks.ssc);
    l:  printf("Enter Intermediate/Diploma Marks:");
        printf("choose 1.Intermediate 2.Diploma:");
        scanf("%d",&optional);
        if(optional==1)
        {
	 	printf("Enter plus_two marks:");
		scanf("%f",&pstu[cnt].Marks.PLUS_TWO.inter);
        }
        else if(optional==2)
        {
		printf("Enter Diploma marks:");
                scanf("%f",&pstu[cnt].Marks.PLUS_TWO.diploma);
        }
        else
        {
		printf("Invalid choice,please re-enter\n");
		goto l;
        }
        printf("Enter graduation percentage:");
        scanf("%f",&pstu[cnt].Marks.graduation);
        printf("Enter contact number:");
        scanf("%s",pstu[cnt].contact_number);
        printf("Enter email_id:");
        scanf("%s",pstu[cnt].email_id);
        cnt++;
        return pstu;
}
