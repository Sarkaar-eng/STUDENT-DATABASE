void Find_student(Student_details *pstu)
{
	char Id[10];
        printf("Enter the Id to Find:");
        scanf("%s",Id);
        for(int i=0;i<cnt;i++)
        {
                if(strcmp(pstu[i].Student_Id,Id)==0)
                {
			printf("Found at index: %d\t %s\t %s\t %d-%d-%d\t %s\t %s\t %.2f\t %.2f\t %.2f\n",i,pstu[i].Student_Id,pstu[i].Student_Name,pstu[i].DOB.day,pstu[i].DOB.month,pstu[i].DOB.year,pstu[i].contact_number,pstu[i].email_id,pstu[i].Marks.ssc,pstu[i].Marks.PLUS_TWO.inter,pstu[i].Marks.graduation);
		}
		else
		{
			printf("Id not found\n");
		}
	}

}
