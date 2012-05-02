/* Hardware delay; takes input as the number of seconds to wait; implements sleep */
void time_sleep(unsigned int);

void timer_init(void);
/* Software delay; takes the input as the number of seconds to wait*/

#define TIME(x)		time = x
extern volatile unsigned int time;
