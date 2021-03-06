/*  8.11
*   答案： 4
*   由于循环体执行了两次，因此fork函数总共生成了2^2=4个进程，每个进程在循环体结束之后都打印了一行“hello”
*   因此一共4行
*/

/*  8.15
*   答案： 5
*   在doit函数模块之中，主程序fork出一个子进程，并且子进程调用了一次fork，得到的两个进程都打印一行"hello"
*   而doit函数返回后的三个进程都打印了一行"hello",因此一共5行
*/

/*  8.19
*   答案： 2^n
*   循环体执行了n次，总共得到2^n个进程，每个打印一行"hello",总共得到2^n行
*/

/*  8.23
*   答案：我们追踪函数的运行，发现在安装好信号处理函数之后，第一个信号可以顺利被其捕获
*   并且将counter变量加1,之后handler执行sleep函数进行休眠，此时第二个信号已经到来
*   但handler还在运行中无法捕获信号，因此其被加入待处理信号表，由于待处理信号表上SIGUSR2
*   信号的位置被第二个信号占据，因此，对于到达的第3,4,5个信号，程序直接简单的丢弃，在
*   handler完成第一次信号处理的时候，会检查发现待处理信号表不为空，因此会随机选择一个
*   进行强制接收（本题中结束handler结束运行时还未被处理的信号就只有第次循环发来的SIGUSR2
*   信号）完成此次接受后，counter共计被累加了两次，因此最终结果为2。
*/
