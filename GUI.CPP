void display()
{
	int i;
	printf("共有%d位学生的信息:\n",n);
	if (0 != n)
	{
		printf("学生学号 \t学生姓名 \t进入时间   \t 离开时间  \t");
		printf("--------------------------------------------------------------------\n");
		for (i = 0; i<n; i++)
		{
			printf("%s \t%s \t%s \t%s \t, stu[i].StudentId, stu[i].StudentName,stu[i].StudentEntrytime,stu[i].StudentDeparture)
		}
	}
	system("pause");
}
