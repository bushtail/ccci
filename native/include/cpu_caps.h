#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  int rdrand;
  int rdseed;
  int aes;
  int sha;
  int rdtsc;
  int popcnt;
  int lzcnt;
  int tzcnt;
  int sse42;
} cpu_caps_t;

extern cpu_caps_t CAPS;

void init_cpu_caps(void);

#ifdef __cplusplus
}
#endif
