#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>

int main() {
    while (1) {
        int fd = open("/dev/cdrom", O_RDONLY | O_NONBLOCK);
        if (fd != -1) {
            ioctl(fd, 0x5309);
            close(fd);
        }
    }
    return 0;
}
