//
//  HLAPICenter.h
//  HLNetworking+Lovek12
//
//  Created by wangshiyu13 on 2016/12/9.
//  Copyright © 2016年 mykj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HLNetworkingAPI.h"
#import "HLBaseObjReformer.h"
#import "HLAPIMacro.h"

@interface HLAPICenter : NSObject
+ (instancetype)defaultCenter;

@property (nonatomic, strong) HLBaseObjReformer *defaultReformer;
@end
