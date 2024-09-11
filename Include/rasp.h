#ifndef rasp_H
#define rasp_H 


#ifdef __cplusplus
extern "C"{
#endif

/*使用 c 裡面的函數名稱執行*/

const long long  rasp_GetExecCounter(void);

const long long  rasp_IncExecCounter(void);

const long long  rasp_DecExecCounter(void);

/* exec Counter  */

#ifdef __cplusplus
}

#endif

#endif /* rasp_H */