# include "test.h"

void test_ft_read()
{
	char buf;
	int fd;
	int ret;

    printf("\n");
	printf("read test.txt\n");
	printf("------------------------------------------\n");
	printf("*                  read                  *\n");
	printf("------------------------------------------\n");
	fd = open("./test.txt", O_RDONLY);
	while ((ret = read(fd, &buf, 1) > 0))
		printf("%c", buf);
	printf("\n");
	close(fd);
	if (ret < 0)
	{
		printf("ret : %d\n", ret);
		printf("errno : %d\n", errno);
	}
	printf("------------------------------------------\n");
	printf("*              	  ft_read                *\n");
	printf("------------------------------------------\n");
	fd = open("./test.txt", O_RDONLY);
	while ((ret = ft_read(fd, &buf, 1) > 0))
		printf("%c", buf);
	printf("\n");
	close(fd);
	if (ret < 0)
	{
		printf("ret : %d\n", ret);
		printf("errno : %d\n", errno);
	}
	close(fd);
}

void test_ft_write()
{
	int ret;

	printf("------------------------------------------\n");
    printf("*                   write                *\n");
    printf("------------------------------------------\n");
	printf("test string : abcdefg12345\n");
	ret = write(1, "abcdefg12345\n", 13);
	printf("ret : %d\n", ret);
	printf("errno : %d\n", errno);
	printf("------------------------------------------\n");
    printf("*                  ft_write              *\n");
    printf("------------------------------------------\n");
	printf("test string : abcdefg12345\n");
	ret = ft_write(1, "abcdefg12345\n", 13);
	printf("ret : %d\n", ret);
	printf("errno : %d\n", errno);
}

void test_ft_strlen()
{
	int ret_ori;
	int ret;

    printf("------------------------------------------\n");
    printf("*                test_strlen             *\n");
    printf("------------------------------------------\n");
	ret_ori = strlen("abcde");
	ret = ft_strlen("abcde");
	printf("test 1) abcde\n");
	printf("strlen : %d\n", ret_ori);
	printf("ft_strlen : %d\n\n", ret);
	ret_ori = strlen("abcde12345");
	ret = ft_strlen("abcde12345");
	printf("test 2) abcde12345\n");
	printf("strlen : %d\n", ret_ori);
	printf("ft_strlen : %d\n\n", ret);
	ret_ori = strlen("");
	ret = ft_strlen("");
	printf("test 3) \"\"\n");
	printf("strlen : %d\n", ret_ori);
	printf("ft_strlen : %d\n", ret);
}

void test_ft_strcmp()
{
	int ret;

    printf("------------------------------------------\n");
    printf("*                test_strcmp             *\n");
    printf("------------------------------------------\n");
	ret = ft_strcmp("abcde", "abcdf");
	printf("abcde , abcdf : %d\n", ret);
	ret = ft_strcmp("123", "121");
	printf("123 , 121 : %d\n", ret);
	ret = ft_strcmp("123", "123");
	printf("123 , 123 : %d\n", ret);
}

void test_ft_strcpy()
{
	char *ret;
	char *dest = malloc(sizeof(char) * 10);

    printf("------------------------------------------\n");
    printf("*                test_strcpy             *\n");
    printf("------------------------------------------\n");
	ret = ft_strcpy(dest, "abcdf");
	printf("src : abcdf\n");
	printf("dest : %s\n", dest);
	printf("ret : %s\n", ret);
	ret = ft_strcpy(dest, "123");
	printf("src : 123\n");
	printf("dest : %s\n", dest);
	printf("ret : %s\n", ret);
	ret = ft_strcpy(dest, "1234567");
	printf("src : 1234567\n");
	printf("dest : %s\n", dest);
	printf("ret : %s\n", ret);
}

int main()
{
	test_ft_read();
	test_ft_write();
	test_ft_strlen();
	test_ft_strcmp();
	test_ft_strcpy();
}
