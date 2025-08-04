typedef struct{
	char Student_Id[10];
	char Student_Name[30];
	struct dob{
		int day;
		int month;
		int year;
	}DOB;

	struct marks{
		float ssc;
		union plus_two{
			float inter;
			float diploma;
		}PLUS_TWO;
		float graduation;
	}Marks;
	char contact_number[15];
	char email_id[30];
}Student_details;

