/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import "ABI46_0_0RCTManagedPointer.h"

@implementation ABI46_0_0RCTManagedPointer {
  std::shared_ptr<void> _pointer;
}

- (instancetype)initWithPointer:(std::shared_ptr<void>)pointer
{
  if (self = [super init]) {
    _pointer = std::move(pointer);
  }
  return self;
}

- (void *)voidPointer
{
  return _pointer.get();
}

@end
