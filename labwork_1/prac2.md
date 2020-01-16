Here are the commands and output for practical work 2:

```
> ls -la | grep list
(no file containing "list", so no output here)
> wc /etc/passwd | awk '{print $1}' 
41
> free | head -2 | awk '{print $1, $2, $3, $5, $6, $7}'
total used free buff/cache available 
Mem: 4002220 1153888 2672 883720 2596552
> cat /proc/cpuinfo | grep core
core id		: 0
cpu cores	: 2
core id		: 1
cpu cores	: 2
> find ~/Pictures/ *.jpg | wc | awk '{print $1}'
0
```
