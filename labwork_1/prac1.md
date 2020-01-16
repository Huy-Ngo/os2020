Here are the commands and outputs for practical work 1:

```
> echo hello world
hello world
> passwd
Current password:
New password:
Retype new password:
passwd: password updated successfully
> date
Thu 16 Jan 2020 08:47:32 AM +07
> hostname
pop-os
> arch
x86_64
> uname -a
Linux pop-os 5.3.0-7625-generic #27~1576774560~19.10~f432cd8-Ubuntu SMP Thu Dec 19 20:35:37 UTC  x86_64 x86_64 x86_64 GNU/Linux
> dmesg | tail -10
[   75.898339] pci 0000:00:01.0: PCI bridge to [bus 01]
[   76.508113] e1000: ens33 NIC Link is Up 1000 Mbps Full Duplex, Flow Control: None
[   76.512278] IPv6: ADDRCONF(NETDEV_CHANGE): ens33: link becomes ready
[   80.654652] sched: RT throttling activated
[   85.343670] rfkill: input handler disabled
[   92.568026] rfkill: input handler enabled
[   96.018017] Bluetooth: RFCOMM TTY layer initialized
[   96.018022] Bluetooth: RFCOMM socket layer initialized
[   96.018026] Bluetooth: RFCOMM ver 1.11
[  102.492597] ISO 9660 Extensions: RRIP_1991A
[  102.900973] rfkill: input handler disabled
> uptime
 09:01:51 up 26 min,  1 user,  load average: 0.08, 0.13, 0.17
> who am i
> who
huyngo   :1           2020-01-16 08:37 (:1)
> whoami
huyngo
> id
uid=1000(huyngo) gid=1000(huyngo) groups=1000(huyngo),4(adm),27(sudo)
> last | tail -10
huyngo   :1           :1               Tue Jan  7 15:02 - down   (00:00)
reboot   system boot  5.3.0-7625-gener Tue Jan  7 15:02 - 15:03  (00:01)
huyngo   :1           :1               Tue Jan  7 14:37 - down   (00:22)
reboot   system boot  5.3.0-7625-gener Tue Jan  7 14:37 - 15:00  (00:22)
huyngo   :1           :1               Mon Jan  6 23:08 - down   (00:00)
reboot   system boot  5.3.0-7625-gener Mon Jan  6 23:07 - 23:09  (00:01)
huyngo   :0           :0               Mon Jan  6 22:59 - down   (00:00)
reboot   system boot  5.3.0-7625-gener Mon Jan  6 22:57 - 23:00  (00:02)

wtmp begins Mon Jan  6 22:57:30 2020
> finger
Command 'finger' not found, but can be installed with:

sudo apt install finger

(after install finger)
> finger

Login     Name       Tty      Idle  Login Time   Office     Office Phone
huyngo    Huy Ngo   *:1             Jan 16 08:37 (:1)
> w
 09:06:20 up 30 min,  1 user,  load average: 0.19, 0.17, 0.18
USER     TTY      FROM             LOGIN@   IDLE   JCPU   PCPU WHAT
huyngo   :1       :1               08:37   ?xdm?   3:47   0.03s /usr/lib/gdm3/gdm-x-session --run-script env GNOME_SHELL_SESSION_MODE=pop /usr/bin/gnome-session --systemd --session=pop
```
