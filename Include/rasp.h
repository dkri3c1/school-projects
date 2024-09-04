#ifndef rasp_H
#define rasp_H 

/* 重複執行 header */

#ifdef __cplusplus
extern "C"{
#endif

/*使用 c 裡面的函數名稱執行*/

const long long  rasp_GetEvalCounter(void);

const long long  rasp_IncEvalCounter(void);

const long long  rasp_DecEvalCounter(void);


/* 變數設定 取得 eval 的數值 增加eval 次數 以及 減少的次數 */

#ifdef __cplusplus
}

#endif

#endif /* rasp_H */