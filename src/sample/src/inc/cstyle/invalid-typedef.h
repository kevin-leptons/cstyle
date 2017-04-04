// it's invalid
// because struct book_t is same on all of platform
// use: "struct book abook" is more clearly
struct book
{
    char name[16];
    float price;
};
typedef struct book book_t;
