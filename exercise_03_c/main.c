#include <stdio.h>
#include <stdint.h>

int main()
{

    typedef struct
    {
        uint32_t OCTP : 8;
        uint32_t MCUEN : 4;
        uint32_t MCUCTL : 4;
        uint32_t PLLCTL : 8;
        uint32_t PLLEN : 8;
    } SYS_CTRL_t;

    volatile SYS_CTRL_t SYS_CTRL;
    SYS_CTRL.MCUCTL = 0x1;
    printf("MCUCTL: %u\n", SYS_CTRL.MCUCTL);

    return 0;
}