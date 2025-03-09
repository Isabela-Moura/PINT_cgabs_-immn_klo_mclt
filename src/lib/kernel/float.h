#ifndef FLOAT_TYPE
#define FLOAT_TYPE

typedef int float_type;
#define Q 14
#define F (1 << Q)

#define CONVERT_FLOAT(n) ((float_type)(n << Q))

#define FLOAT_ADD(x, y) (x + y)

#define FLOAT_SUB(x, y) (x - y)

#define FLOAT_MUL(x, y) ((float_type)((((int64_t) x) * y / F)))

#define FLOAT_DIV(x, y) ((float_type)((((int64_t) x) * F / y)))

#define FLOAT_ADD_INT(x, n) (x + (n << Q))

#define FLOAT_SUB_INT(x, n) (x - (n << Q))

#define FLOAT_MUL_INT(x, n) (x * n)

#define FLOAT_DIV_INT(x, n) (x / n)

#define ROUND(x) (((x) >= 0) ? (((x) + (F / 2)) / F) : (((x) - (F / 2)) / F))


#endif