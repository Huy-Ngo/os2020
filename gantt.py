from argparse import ArgumentParser
"""This is a script used for generating Gantt chart"""


def gen_gantt(duration, process):
    """Parameter
    duration: List[int] len n (in 0.1 ms)
    status: List[int] len n
    1 = proc 1
    2 = proc 2
    3 = proc 3
    4 = proc 4
    """
    chart = [''] * 4
    for i in range(len(process)):
        for j in range(4):
            if j != process[i] - 1:
                chart[j] += ' ' * duration[i]
            else:
                chart[j] += '-' * duration[i]
    for i in range(4):
        print(f'P_{i + 1}:', chart[i])

def gantt_rr():
    """Specifically used for case
    burst_time = [8, 4, 1, 5]
    start = [0.0, 0.4, 1.0, 1.3]
    s = 1
    not reusable anywhere
    """
    burst = [80, 40, 10, 50]
    start = [0, 4, 10, 13]
    current = 1
    wait = [0] * 4
    chart = [''] * 4
    for time in range(sum(burst)):
        for i in range(4):
            if i == current - 1:
                chart[i] += '-'
            else:
                chart[i] += ' '
                if time > start[i]:
                    wait[i] += 1
        nxt = (current % 4) + 1
        if time + 1 >= start[nxt - 1]:
            current = nxt
        else:
            current = 1
    for i in range(4):
        print(f'P_{i + 1}:', chart[i])
    print(wait)

parser = ArgumentParser()
parser.add_argument('--rr', type=bool, nargs='?', const=True, default=False)
parser.add_argument('--duration', '-d', nargs='+')
parser.add_argument('--status', '-s', nargs='+')

args = parser.parse_args()
duration = args.duration
status = args.status
rr = args.rr
if not rr:
    duration = [int(n) for n in duration]
    status = [int(n) for n in status]
    gen_gantt(duration, status)
else:
    gantt_rr()

