/*
uclean - The useless box but with your optical disk drive
Copyright (C) 2025 Connor Thomson

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or 
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

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
