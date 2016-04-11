//
//  KeyChainStore.h
//  UUID
//
//  Created by 张昭 on 16/4/11.
//  Copyright © 2016年 张昭. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KeyChainStore : NSObject

+ (void)save:(NSString *)service data:(id)data;
+ (id)load:(NSString *)service;
+ (void)deleteKeyData:(NSString *)service;

@end
