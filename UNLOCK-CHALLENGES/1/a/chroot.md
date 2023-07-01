``` bash
# Mount Kernel Virtual File Systems
// TARGETDIR - represents the path or directory location "/mnt/chroot".
TARGETDIR="/mnt/chroot"
// mount - is used to mount a filesystem to a specific directory in the directory tree. It enables you to make a storage device or a specific filesystem accessible and usable within the filesystem hierarchy.
// -t - option specifies the type of the filesystem, which in this case is "proc".
// /proc - directory is a virtual filesystem that provides information about running processes and system resources in a Linux system. By mounting the proc filesystem, you can access and interact with this information.
// $TARGETDIR - variable
mount -t proc proc $TARGETDIR/proc
// sysfs - filesystem provides a way to interact with the kernel and retrieve information about devices, drivers, and other system components.
mount -t sysfs sysfs $TARGETDIR/sys
// devtmpfs
mount -t devtmpfs devtmpfs $TARGETDIR/dev
mount -t tmpfs tmpfs $TARGETDIR/dev/shm
mount -t devpts devpts $TARGETDIR/dev/pts

# Copy /etc/hosts
/bin/cp -f /etc/hosts $TARGETDIR/etc/

# Copy /etc/resolv.conf 
/bin/cp -f /etc/resolv.conf $TARGETDIR/etc/resolv.conf

# Link /etc/mtab
chroot $TARGETDIR rm /etc/mtab 2> /dev/null 
chroot $TARGETDIR ln -s /proc/mounts /etc/mtab
```
