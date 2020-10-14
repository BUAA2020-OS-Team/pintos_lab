//#define f 1<<14
//整型数变定点数
#define int_to_fix(n) ( (n)*(1<<14) )  
//定点数变整型数(舍入到0)
#define fix_to_int_zero(x) ( (x)/(1<<14) )
//定点数变整型数(四舍五入)
#define fix_to_int_near(x) ( (x)>=0 ? ((x)+(1<<14)/2)/(1<<14) : ((x)-(1<<14)/2)/(1<<14) )
//定点数加定点数
#define fix_plus_fix(x,y) ( (x)+(y) )
//定点数减定点数
#define fix_minus_fix(x,y) ( (x)-(y) )
//定点数加整型数
#define fix_plus_int(x,n) ( (x)+(n)*(1<<14) )
//定点数减整型数
#define fix_minus_int(x,n) ( (x)-(n)*(1<<14) )
//定点数乘定点数
#define fix_mult_fix(x,y) ( ((int64_t)(x))*(y)/(1<<14) )
//定点数乘整型数
#define fix_mult_int(x,n) ( (x)*(n) )
//定点数除定点数
#define fix_div_fix(x,y) ( ((int64_t)(x))*(1<<14)/(y) )
//定点数除整型数
#define fix_div_int(x,n) ( (x)/(n) ) 