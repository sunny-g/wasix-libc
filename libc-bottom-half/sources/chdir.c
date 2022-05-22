#include <errno.h>
#include <fcntl.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <wasix/libc.h>

int chdir(const char *path)
{
    // Perform system call.
    __wasi_errno_t error = __wasi_chdir(path);
    if (error != 0) {
      errno = error;
      return -1;
    }
    return 0;
}
