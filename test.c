# include "test.h"

int main()
{
	char buf;
	int fd;
	int ret;

	fd = open("./test.txt", O_RDONLY);
	ret = ft_read(fd, &buf, 1);
	printf("read : %c\n", buf);
	printf("ret_read : %d\n", ret);
	printf("errno : %d\n", errno);
	close(fd);
}
