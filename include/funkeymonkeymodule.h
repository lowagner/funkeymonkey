#ifndef FUNKEYMONKEY_MODULE_H
#define FUNKEYMONKEY_MODULE_H

#include <linux/input.h>

#ifdef __cplusplus
extern "C" {
#endif

void init(char const** argv, unsigned int argc);
void handle(input_event const& e, unsigned int role);
void destroy();

void user1();
void user2();

#ifdef __cplusplus
}
#endif

#endif

