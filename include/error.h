#ifndef _FACOM_ERROR_H_
#define _FACOM_ERROR_H_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#define SUCCESS                         0
#define ERROR                          -1

#define ERROR_WRONG_PARAMETERS         -2
#define ERROR_MEMORRY_ALLOCATION       -3

#define ERROR_OPEN_PORT               -51
#define ERROR_CLOSE_PORT              -52
#define ERROR_GET_PORT_OPTIONS        -53
#define ERROR_SET_PORT_OPTIONS        -54

#define ERROR_SET_DATA_BITS           -61
#define ERROR_SET_STOP_BITS           -62   
#define ERROR_SET_PARITY              -63
#define ERROR_SET_BAUD_RATE           -64

#define ERROR_SENDING_DATA            -71

#define ERROR_FREE                    -0x50
#define ERROR_ILLEGAL_VALUE           -0x52
#define ERROR_ILLEGAL_FORMAT          -0x54
#define ERROR_RUN_CHECKSUM            -0x55
#define ERROR_RUN_ID                  -0x56
#define ERROR_RUN_SYNTAX              -0x57
#define ERROR_RUN_NOT_SUPPORTED       -0x58
#define ERROR_ILLEGAL_ADDRESS         -0x5A

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _FACOM_ERROR_H_

