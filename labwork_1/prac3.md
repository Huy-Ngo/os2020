Here are the commands and outputs for the labwork 3:

```
> ps -e | tail -10
  3860 ?        00:00:00 kworker/0:5-events
  4258 pts/1    00:00:00 bash
  4289 ?        00:00:12 firefox
  4335 ?        00:00:03 Web Content
  4375 ?        00:00:01 WebExtensions
  4420 ?        00:00:00 Web Content
  4464 ?        00:00:00 kworker/u257:1-kcryptd/253:0
  4494 ?        00:00:00 kworker/u256:1-events_unbound
  4534 pts/1    00:00:00 ps
  4535 pts/1    00:00:00 tail
> firefox
> ps -e | grep firefox | awk '{print $1}' 
4638
> kill -STOP 4638 
> kill -PAUSE 4638 
> kill -KILL 4638 
```
