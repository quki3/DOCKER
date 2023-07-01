``` bash
// Mount Kernel Virtual File Systems
// TARGETDIR - represents the path or directory location "/mnt/chroot".
TARGETDIR="/mnt/chroot"
// mount - is used to mount a filesystem to a specific directory in the directory tree. It enables you to make a storage device or a specific filesystem accessible and usable within the filesystem hierarchy.
// -t - option specifies the type of the filesystem, which in this case is "proc".
// /proc - directory is a virtual filesystem that provides information about running processes and system resources in a Linux system. By mounting the proc filesystem, you can access and interact with this information.
// $TARGETDIR - variable
mount -t proc proc $TARGETDIR/proc
// sysfs - filesystem provides a way to interact with the kernel and retrieve information about devices, drivers, and other system components.
mount -t sysfs sysfs $TARGETDIR/sys
// devtmpfs - filesystem is a temporary filesystem that provides a device directory containing device nodes for devices detected and configured by the kernel at runtime. It is commonly used for dynamic device node management.
mount -t devtmpfs devtmpfs $TARGETDIR/dev
// tmpfs - filesystem is a temporary filesystem that resides in memory. It provides a way to create and use a filesystem that is stored in RAM rather than on a physical storage device. This can be useful for temporary files, inter-process communication, and other situations where fast and volatile storage is required.
mount -t tmpfs tmpfs $TARGETDIR/dev/shm
// devpts - filesystem is used for managing pseudo-terminal devices. Pseudo-terminals are virtual devices that emulate traditional terminals, allowing interactive terminal sessions and terminal-based applications to run. The devpts filesystem provides the necessary device nodes for these pseudo-terminals.
mount -t devpts devpts $TARGETDIR/dev/pts

// Copy /etc/hosts
// /bin/cp - is the command to copy files in Linux.
// -f - force
// /etc/hosts - source file that will be copied
/bin/cp -f /etc/hosts $TARGETDIR/etc/

// Copy /etc/resolv.conf
// etc/resolv.conf - file contains configuration information for the system's DNS (Domain Name System) resolver. It specifies the DNS servers to be used for domain name resolution and other related settings.
/bin/cp -f /etc/resolv.conf $TARGETDIR/etc/resolv.conf

// Link /etc/mtab
chroot $TARGETDIR rm /etc/mtab 2> /dev/null 
chroot $TARGETDIR ln -s /proc/mounts /etc/mtab
```
