void *Delete_record(Student_details *pstu)
{
	char Id[10];
	printf("Enter the Id to delete:");
	scanf("%s",Id);
	for(int i=0;i<cnt;i++)
	{
		if(strcmp(pstu[i].Student_Id,Id)==0)
                {
                        memmove(pstu+i,pstu+i+1,(cnt-i-1)*sizeof(*pstu));
                        cnt--;
			pstu=(Student_details *)realloc(pstu,cnt * sizeof(Student_details));
                }
	}
	return pstu;

}
