void Sort_record(Student_details *pstu)
{
	Student_details temp;
	for(int i=cnt-1;i>=0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(strcmp(pstu[j].Student_Id,pstu[j+1].Student_Id)>0)
			{
				temp=pstu[j];
				pstu[j]=pstu[j+1];
				pstu[j+1]=temp;
			}
		}
	}
}	
