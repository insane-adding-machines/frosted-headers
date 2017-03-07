/* The file frosted.h is auto generated. DO NOT EDIT, CHANGES WILL BE LOST. */
/* If you want to add syscalls, use syscall_table_gen.py  */

#define SYS_SLEEP 			(0)
#define SYS_SUSPEND 			(1)
#define SYS_GETPID 			(2)
#define SYS_GETPPID 			(3)
#define SYS_OPEN 			(4)
#define SYS_CLOSE 			(5)
#define SYS_READ 			(6)
#define SYS_WRITE 			(7)
#define SYS_SEEK 			(8)
#define SYS_MKDIR 			(9)
#define SYS_UNLINK 			(10)
#define SYS_GETTIMEOFDAY 			(11)
#define SYS_MALLOC 			(12)
#define SYS_FREE 			(13)
#define SYS_CALLOC 			(14)
#define SYS_REALLOC 			(15)
#define SYS_OPENDIR 			(16)
#define SYS_READDIR 			(17)
#define SYS_CLOSEDIR 			(18)
#define SYS_STAT 			(19)
#define SYS_POLL 			(20)
#define SYS_IOCTL 			(21)
#define SYS_LINK 			(22)
#define SYS_CHDIR 			(23)
#define SYS_GETCWD 			(24)
#define SYS_SEM_INIT 			(25)
#define SYS_SEM_POST 			(26)
#define SYS_SEM_WAIT 			(27)
#define SYS_SEM_TRYWAIT 			(28)
#define SYS_SEM_DESTROY 			(29)
#define SYS_MUTEX_INIT 			(30)
#define SYS_MUTEX_UNLOCK 			(31)
#define SYS_MUTEX_LOCK 			(32)
#define SYS_MUTEX_DESTROY 			(33)
#define SYS_SOCKET 			(34)
#define SYS_BIND 			(35)
#define SYS_ACCEPT 			(36)
#define SYS_CONNECT 			(37)
#define SYS_LISTEN 			(38)
#define SYS_SENDTO 			(39)
#define SYS_RECVFROM 			(40)
#define SYS_SETSOCKOPT 			(41)
#define SYS_GETSOCKOPT 			(42)
#define SYS_SHUTDOWN 			(43)
#define SYS_DUP 			(44)
#define SYS_DUP2 			(45)
#define SYS_MOUNT 			(46)
#define SYS_UMOUNT 			(47)
#define SYS_KILL 			(48)
#define SYS_ISATTY 			(49)
#define SYS_EXEC 			(50)
#define SYS_TTYNAME_R 			(51)
#define SYS_EXIT 			(52)
#define SYS_TCSETATTR 			(53)
#define SYS_TCGETATTR 			(54)
#define SYS_TCSENDBREAK 			(55)
#define SYS_PIPE2 			(56)
#define SYS_SIGACTION 			(57)
#define SYS_SIGPROCMASK 			(58)
#define SYS_SIGSUSPEND 			(59)
#define SYS_VFORK 			(60)
#define SYS_WAITPID 			(61)
#define SYS_LSTAT 			(62)
#define SYS_UNAME 			(63)
#define SYS_GETADDRINFO 			(64)
#define SYS_FREEADDRINFO 			(65)
#define SYS_FSTAT 			(66)
#define SYS_GETSOCKNAME 			(67)
#define SYS_GETPEERNAME 			(68)
#define SYS_READLINK 			(69)
#define SYS_FCNTL 			(70)
#define SYS_SETSID 			(71)
#define SYS_PTRACE 			(72)
#define SYS_REBOOT 			(73)
#define SYS_GETPRIORITY 			(74)
#define SYS_SETPRIORITY 			(75)
#define SYS_FTRUNCATE 			(76)
#define SYS_TRUNCATE 			(77)
#define SYS_PTHREAD_CREATE 			(78)
#define SYS_PTHREAD_EXIT 			(79)
#define SYS_PTHREAD_JOIN 			(80)
#define SYS_PTHREAD_DETACH 			(81)
#define SYS_PTHREAD_CANCEL 			(82)
#define SYS_PTHREAD_SELF 			(83)
#define SYS_PTHREAD_SETCANCELSTATE 			(84)
#define SYS_SCHED_YIELD 			(85)
#define SYS_PTHREAD_MUTEX_INIT 			(86)
#define SYS_PTHREAD_MUTEX_DESTROY 			(87)
#define SYS_PTHREAD_MUTEX_LOCK 			(88)
#define SYS_PTHREAD_MUTEX_TRYLOCK 			(89)
#define SYS_PTHREAD_MUTEX_UNLOCK 			(90)
#define SYS_PTHREAD_KILL 			(91)
#define SYS_CLOCK_SETTIME 			(92)
#define _SYSCALLS_NR (93) /* We have 93 syscalls! */
