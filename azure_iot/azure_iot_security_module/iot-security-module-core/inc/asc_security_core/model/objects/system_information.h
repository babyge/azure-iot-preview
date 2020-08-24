/**************************************************************************/
/*                                                                        */
/*       Copyright (c) Microsoft Corporation. All rights reserved.        */
/*                                                                        */
/*       This software is licensed under the Microsoft Software License   */
/*       Terms for Microsoft Azure RTOS. Full text of the license can be  */
/*       found in the LICENSE file at https://aka.ms/AzureRTOS_EULA       */
/*       and in the root directory of this software.                      */
/*                                                                        */
/**************************************************************************/

#ifndef OBJECT_SYSTEM_INFORMATION_H
#define OBJECT_SYSTEM_INFORMATION_H

#include <stdint.h>

#include "asc_security_core/utils/collection/collection.h"

typedef struct system_information_t {
    COLLECTION_INTERFACE(struct system_information_t);
    
    char* os_info;
    char* kernel_info;
    char* hw_info;
} system_information_t;


#endif /* OBJECT_SYSTEM_INFORMATION_H */
