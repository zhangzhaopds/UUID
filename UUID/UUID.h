//
//  UUID.h
//  UUID
//
//  Created by 张昭 on 16/4/11.
//  Copyright © 2016年 张昭. All rights reserved.
//

#import <Foundation/Foundation.h>
#define  KEY_USERNAME_PASSWORD @"com.company.app.usernamepassword"
//#define  KEY_USERNAME @"com.company.app.username"
//#define  KEY_PASSWORD @"com.company.app.password"

@interface UUID : NSObject

+(NSString *)getUUID;

@end
