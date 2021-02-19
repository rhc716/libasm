# include "test.h"

void test_ft_read()
{
	char buf;
	int fd;
	int ret;

	fd = open("./test.txt", O_RDONLY);
	ret = ft_read(fd, &buf, 1);
    printf("\n");
    printf("------------------------------------------\n");
    printf("*                test_read               *\n");
    printf("------------------------------------------\n");
	printf("read : %c\n", buf);
	printf("ret_read : %d\n", ret);
	printf("errno : %d\n", errno);
	printf("\n");
	close(fd);
}

void test_ft_write()
{
	int ret;

    printf("\n");
    printf("------------------------------------------\n");
    printf("*                test_write              *\n");
    printf("------------------------------------------\n");
	ret = ft_write(1, "test string\n", 12);
	printf("ret_write : %d\n", ret);
	printf("errno : %d\n", errno);
	printf("\n");
}

void test_ft_strlen()
{
	int ret;

    printf("\n");
    printf("------------------------------------------\n");
    printf("*                test_strlen             *\n");
    printf("------------------------------------------\n");
	ret = ft_strlen("abcde");
	printf("test 1) abcde : %d\n", ret);
	ret = ft_strlen("abcdefghij");
	printf("test 2) abcdefghij : %d\n", ret);
	ret = ft_strlen("");
	printf("test 2) NULL : %d\n", ret);
	printf("\n");
}

void test_ft_strcmp()
{
	int ret;

    printf("\n");
    printf("------------------------------------------\n");
    printf("*                test_strcmp             *\n");
    printf("------------------------------------------\n");
	ret = ft_strcmp("abcde", "abcdf");
	printf("abcde , abcdf : %d\n", ret);
	ret = ft_strcmp("123", "121");
	printf("123 , 121 : %d\n", ret);
	ret = ft_strcmp("123", "123");
	printf("123 , 123 : %d\n", ret);
	printf("\n");
}

void test_ft_strcpy()
{
	char *ret;
	char *dest = malloc(sizeof(char) * 10);

    printf("\n");
    printf("------------------------------------------\n");
    printf("*                test_strcpy             *\n");
    printf("------------------------------------------\n");
	ret = ft_strcpy(dest, "abcdf");
	printf("src : abcdf dest : %s\n", dest);
	printf("ret : %s\n", ret);
	ret = ft_strcpy(dest, "123");
	printf("src : 123 dest : %s\n", dest);
	printf("ret : %s\n", ret);
	ret = ft_strcpy(dest, "1234567");
	printf("src : 1234567 dest : %s\n", dest);
	printf("ret : %s\n", ret);
	printf("\n");
}

int main()
{
	test_ft_read();
	test_ft_write();
	test_ft_strlen();
	test_ft_strcmp();
	test_ft_strcpy();
}
