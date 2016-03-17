//
//  locale_android.h
//  CUPS
//
//  Created by 姜雷 on 16/2/21.
//  Copyright © 2016年 Apple Inc. All rights reserved.
//

#include <pthread.h>



struct lconv {
  char* decimal_point;
  char* thousands_sep;
};

#ifdef __cplusplus
extern "C" {  
#endif


struct lconv* localeconv(void);

#ifdef __cplusplus
}
#endif