//9.11
/**
 * A.   00001001111100
 * B.   参数        值
 *      VPN         0x9
 *      TLB索引     0x1
 *      TLB标记     0x2
 *      TLB命中     否
 *      是否缺页     否
 *      PPN         0x17
 * C.   010111111100
 * D.   参数        值
 *      字节偏移     0x0
 *      缓存索引     0xf
 *      缓存标记     0x17
 *      缓存命中     否
 *      返回字节     -
 */

//9.13
/**
 * A.   00000001000000
 * B.   参数        值
 *      VPN        0x1
 *      TLB索引     0x1
 *      TLB标记     0x0
 *      TLB命中     否
 *      是否缺页     是
 *      PPN         -
 */

//9.15
/**
 * 块大小           块头部
 * 8               0x9
 * 16               0x11
 * 24               0x19
 * 32               0x21
 */

//9.19
/**
 * 1 A
 * 2 D
 * 3 B
 */