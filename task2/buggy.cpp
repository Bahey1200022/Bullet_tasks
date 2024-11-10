#include <iostream>

#include <fstream>

#include <string>

 

int main() {

    std::ifstream file("sample.txt");

    if (!file.is_open()) {

        std::cerr << "Error: File not found!\n";

        return 1;

    }

 

    std::string line;

    while (std::getline(file, line)) {

        std::cout << line << "\n";

    }

 

    file.close();

    return 0;

}


/*
strace -c ./task
Error: File not found!
% time     seconds  usecs/call     calls    errors syscall
------ ----------- ----------- --------- --------- ----------------
 42.80    0.000883         883         1           execve
 29.04    0.000599          27        22           mmap
  7.37    0.000152          25         6         1 openat
  3.97    0.000082          13         6           mprotect
  2.67    0.000055          11         5           close
  2.62    0.000054          13         4           read
  2.42    0.000050          10         5           fstat
  2.13    0.000044          14         3           brk
  1.55    0.000032          32         1           munmap
  1.02    0.000021          10         2           pread64
  0.87    0.000018          18         1         1 access
  0.73    0.000015          15         1           write
  0.44    0.000009           9         1           arch_prctl
  0.44    0.000009           9         1           set_tid_address
  0.44    0.000009           9         1           set_robust_list
  0.44    0.000009           9         1           rseq
  0.39    0.000008           8         1           prlimit64
  0.39    0.000008           8         1           getrandom
  0.29    0.000006           6         1           futex
------ ----------- ----------- --------- --------- ----------------
100.00    0.002063          32        64         2 total

*/




/*
strace -c ./task
xecve("./task", ["./task"], 0x7ffc675e1620 /* 63 vars =0
/*brk(NULL)                               = 0x6518212e3000
mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7ad554068000
access("/etc/ld.so.preload", R_OK)      = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/etc/ld.so.cache", O_RDONLY|O_CLOEXEC) = 3
fstat(3, {st_mode=S_IFREG|0644, st_size=58739, ...}) = 0
mmap(NULL, 58739, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7ad554059000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libstdc++.so.6", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 832) = 832
fstat(3, {st_mode=S_IFREG|0644, st_size=2592224, ...}) = 0
mmap(NULL, 2609472, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7ad553c00000
mmap(0x7ad553c9d000, 1343488, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x9d000) = 0x7ad553c9d000
mmap(0x7ad553de5000, 552960, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1e5000) = 0x7ad553de5000
mmap(0x7ad553e6c000, 57344, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x26b000) = 0x7ad553e6c000
mmap(0x7ad553e7a000, 12608, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7ad553e7a000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libgcc_s.so.1", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 832) = 832
fstat(3, {st_mode=S_IFREG|0644, st_size=183024, ...}) = 0
mmap(NULL, 185256, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7ad55402b000
mmap(0x7ad55402f000, 147456, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x4000) = 0x7ad55402f000
mmap(0x7ad554053000, 16384, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x28000) = 0x7ad554053000
mmap(0x7ad554057000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x2b000) = 0x7ad554057000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libc.so.6", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\220\243\2\0\0\0\0\0"..., 832) = 832
pread64(3, "\6\0\0\0\4\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 784, 64) = 784
fstat(3, {st_mode=S_IFREG|0755, st_size=2125328, ...}) = 0
pread64(3, "\6\0\0\0\4\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 784, 64) = 784
mmap(NULL, 2170256, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7ad553800000
mmap(0x7ad553828000, 1605632, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x28000) = 0x7ad553828000
mmap(0x7ad5539b0000, 323584, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1b0000) = 0x7ad5539b0000
mmap(0x7ad5539ff000, 24576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1fe000) = 0x7ad5539ff000
mmap(0x7ad553a05000, 52624, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7ad553a05000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libm.so.6", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 832) = 832
fstat(3, {st_mode=S_IFREG|0644, st_size=952616, ...}) = 0
mmap(NULL, 950296, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7ad553f42000
mmap(0x7ad553f52000, 520192, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x10000) = 0x7ad553f52000
mmap(0x7ad553fd1000, 360448, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x8f000) = 0x7ad553fd1000
mmap(0x7ad554029000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0xe7000) = 0x7ad554029000
close(3)                                = 0
mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7ad553f40000
mmap(NULL, 12288, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7ad553f3d000
arch_prctl(ARCH_SET_FS, 0x7ad553f3d740) = 0
set_tid_address(0x7ad553f3da10)         = 6134
set_robust_list(0x7ad553f3da20, 24)     = 0
rseq(0x7ad553f3e060, 0x20, 0, 0x53053053) = 0
mprotect(0x7ad5539ff000, 16384, PROT_READ) = 0
mprotect(0x7ad554029000, 4096, PROT_READ) = 0
mprotect(0x7ad554057000, 4096, PROT_READ) = 0
mprotect(0x7ad553e6c000, 45056, PROT_READ) = 0
mprotect(0x65181f4b4000, 4096, PROT_READ) = 0
mprotect(0x7ad5540a0000, 8192, PROT_READ) = 0
prlimit64(0, RLIMIT_STACK, NULL, {rlim_cur=8192*1024, rlim_max=RLIM64_INFINITY}) = 0
munmap(0x7ad554059000, 58739)           = 0
futex(0x7ad553e7a7bc, FUTEX_WAKE_PRIVATE, 2147483647) = 0
getrandom("\xeb\x29\x36\xa2\x50\x05\x2e\x04", 8, GRND_NONBLOCK) = 8
brk(NULL)                               = 0x6518212e3000
brk(0x651821304000)                     = 0x651821304000
openat(AT_FDCWD, "sample.txt", O_RDONLY) = -1 ENOENT (No such file or directory)
write(2, "Error: File not found!\n", 23Error: File not found!
) = 23
exit_group(1)                           = ?
+++ exited with 1 +++*/




/* error at the openat syscall  

openat(AT_FDCWD, "sample.txt", O_RDONLY) = -1 ENOENT (No such file or directory)

access sys call also

*/