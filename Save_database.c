void Save_database(Student_details *pstu)
{
	FILE *fp=fopen("database.txt","wb");
	if(fp==NULL)
	{
		perror("Error saving file\n");
		return;
	}
	fwrite(&cnt,sizeof(cnt),1,fp);
	fwrite(arr,sizeof(arr),1,fp);
	fwrite(pstu,sizeof(Student_details),cnt,fp);
	fclose(fp);

}
