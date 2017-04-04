// it's valid
// because iprimt_t is different between 64bits and 32bits architecture
// use: "iprim_t i" declare memory block is same same with processors's width
#ifdef __LP64__
typedef long int iprim_t;
#else
typedef int iprim_t;
#endif
