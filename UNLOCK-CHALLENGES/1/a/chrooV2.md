1.
```bash
  sudo mkdir /chrootjail
```
2.
```bash
sudo mkdir /chrootjail/{etc,bin}
```
3.
```bash
sudo ldd /bin/bash /bin/ls /bin/grep
```
4.
```bash
sudo mkdir -p /chrootjail{lib/x86_64-linux-gnu, lib64}
```
6.
```bash
sudo cp /bin/bash /chrootjail/bin && sudo cp /bin/ls /chrootjail/bin && sudo cp /bin/grep /chrootjail/bin
```
8.
```bash
ldd bash
```
10.
```bash
for lib in \
for> /lib/x86_64-linux-gnu/libc.so.6 /lib/x86_64-linux-gnu/libtinfo.so.6 /lib64/ld-linux-x86-64.so.2; do \
for> sudo cp $lib /chrootjail/lib/x86_64-linux-gnu/; done
```




