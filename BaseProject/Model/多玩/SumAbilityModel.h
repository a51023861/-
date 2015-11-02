//
//  SumAbilityModel.h
//  BaseProject
//
//  Created by tarena on 15/11/2.
//  Copyright © 2015年 Tarena. All rights reserved.
//

#import "BaseModel.h"

@class Sumabilitymodelarray;
@interface SumAbilityModel : BaseModel

@property (nonatomic, strong) NSArray<Sumabilitymodelarray *> *SumAbilityArrayModel;

@end

@interface Sumabilitymodelarray : NSObject

@property (nonatomic, copy) NSString *strong;

@property (nonatomic, copy) NSString *id;

@property (nonatomic, copy) NSString *cooldown;

@property (nonatomic, copy) NSString *level;

@property (nonatomic, copy) NSString *tips;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, copy) NSString *des;

@end

