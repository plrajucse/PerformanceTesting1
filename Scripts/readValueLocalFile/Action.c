Action()
{
	long fp;
	char buffer[1000];
	fp=fopen("E:\\invalid.text","r+");
	fread(buffer, sizeof(char), 1001, fp);
	lr_output_message(buffer);
	flose(fp);
	return 0;
}
