#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

int n = 1000000;
pthread_mutex_t lock;

void* print_prime() {
  int prime[n + 1];
  memset(prime, 1, sizeof(prime));
  int p, i; // counters

  prime[0] = prime[1] = 0;

  for (p = 2; p * p <= n; p++) {
    if (prime[p]) {
      for(i = p * p; i <= n; i += p) {
	prime[i] = 0;
      }
    }
  }

  for (p = 2; p <= n; p++) {
    if (prime[p]) {
      pthread_mutex_lock(&lock);
      printf("p: %d\n", p);
      pthread_mutex_unlock(&lock);
    }
  }
}

void* print_fibo() {
  int prelast = 1;
  int last = 1;

  while (prelast + last < n) {
    pthread_mutex_lock(&lock);
    printf("f: %d\n", prelast + last);
    pthread_mutex_unlock(&lock);
    last = prelast + last;
    prelast = last - prelast;
  }
}

int main () {
  pthread_t prime_id;
  pthread_t fibo_id;

  pthread_mutex_init(&lock, NULL);
  pthread_create(&prime_id, NULL,
		 print_prime, NULL);
  pthread_create(&fibo_id, NULL,
		 print_fibo, NULL);
  pthread_join(prime_id, NULL);
  pthread_join(fibo_id, NULL);
  printf("Done");
  return 0;
}
