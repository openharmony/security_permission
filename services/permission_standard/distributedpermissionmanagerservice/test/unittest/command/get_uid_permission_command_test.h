/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef GET_UID_PERMISSION_COMMAND_TEST_H
#define GET_UID_PERMISSION_COMMAND_TEST_H

#include <gtest/gtest.h>

namespace OHOS {
namespace Security {
namespace Permission {
class GetUidPermissionCommandTest : public testing::Test {
public:
    GetUidPermissionCommandTest();
    ~GetUidPermissionCommandTest();
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
    const std::unique_ptr<GetUidPermissionCommand> GetClass() const;
};
}  // namespace Permission
}  // namespace Security
}  // namespace OHOS
#endif  // PERMISSION_DEFINITION_MANAGER_TEST_H