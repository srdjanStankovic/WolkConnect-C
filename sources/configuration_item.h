/*
 * Copyright 2018 WolkAbout Technology s.r.o.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CONFIGURATION_ITEM_H
#define CONFIGURATION_ITEM_H

#ifdef __cplusplus
extern "C" {
#endif

#include "size_definitions.h"

#include <stdbool.h>
#include <stddef.h>

typedef struct {
    char name[CONFIGURATION_REFERENCE_SIZE];
    char value[CONFIGURATION_VALUE_SIZE];
} configuration_item_t;

void configuration_item_init(configuration_item_t* configuration_item, char* name, char* value);

char* configuration_item_get_name(configuration_item_t* configuration_item);

char* configuration_item_get_value(configuration_item_t* configuration_item);
void configuration_item_set_value(configuration_item_t* configuration_item, char* buffer);

#ifdef __cplusplus
}
#endif

#endif
