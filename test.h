#ifndef TEST_H
# define TEST_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <errno.h>
# include <unistd.h>
# include <fcntl.h>

ssize_t ft_read(int fd, void *buff, size_t nbyte);
ssize_t ft_write(int fd, void *buff, size_t nbyte);
size_t	ft_strlen(const char *s);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(const char *dst, const char *src);
char	*ft_strdup(const char *s1);

#endif