struct comic
{
	char num[20];
	char name[20];
	char writer[20];
	......
}
struct science_fiction
{
	char num[20];
	char name[20];
	char writer[20];
	......
}
struct prose
{
	char num[20];
	char name[20];
	char writer[20];
	......
}
struct discipline
{
	char num[20];
	char name[20];
	char writer[20];
	......
}
struct book
{
	struct comic *comic;
	struct science_fiction *science_fiction;
	struct prose *prose;
	struct discipline *discipline;
}