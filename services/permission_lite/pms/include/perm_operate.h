/*
 * Copyright (c) 2020~2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PERM_OPERATE_H
#define PERM_OPERATE_H

#include "perm_define.h"

int PermissionIsGranted(const TList *list, int uid, const char *permission);

int ModifyPermission(TNode *node, const char *permission, const PermissionSaved *perms);

void AddTask(TList *list, TNode *node);

void DeleteTask(TList *list, int uid);

TNode *GetTaskWithUid(TList *list, int uid);

TNode *GetTaskWithPkgName(TList *list, const char *pkgName);

#endif // PERM_OPERATE_H