void Sync_database(Student_details **pstu)
{
	FILE *fp=fopen("database.txt","rb");
	if(fp==NULL)
	{
		perror("Error to open the file, unable to sync");
		return;
	}
	fread(&cnt,sizeof(cnt),1,fp);
	fread(arr,sizeof(arr),1,fp);
	*pstu=malloc(cnt * sizeof(Student_details));
	fread(*pstu,sizeof(Student_details),cnt,fp);
	fclose(fp);
}
