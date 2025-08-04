void Reverse_records(Student_details *pstu)
{
	if(cnt==0)
	{
		printf("Database is empty\n");
                return;
        }
	printf("Student details:\n");
	
	for(int i=cnt-1;i>=0;i--)
        {
                printf("%s\t %s\t %d-%d-%d\t %s\t %s\t %.2f\t %.2f\t %.2f\n",pstu[i].Student_Id,pstu[i].Student_Name,pstu[i].DOB.day,pstu[i].DOB.month,pstu[i].DOB.year,pstu[i].contact_number,pstu[i].email_id,pstu[i].Marks.ssc,pstu[i].Marks.PLUS_TWO.inter,pstu[i].Marks.graduation);
        }
}

