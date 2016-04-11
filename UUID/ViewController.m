//
//  ViewController.m
//  UUID
//
//  Created by 张昭 on 16/4/11.
//  Copyright © 2016年 张昭. All rights reserved.
//

#import "ViewController.h"
#import "UUID.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    // 首先打开 钥匙串 Capabilities -> Keychain Sharing -> ON
    
    NSString * uuid= [UUID getUUID];
    NSLog(@"uuid=%@",uuid);
    
    
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
