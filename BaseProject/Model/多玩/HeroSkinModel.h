//
//  HeroSkinModel.h
//  BaseProject
//
//  Created by tarena on 15/11/2.
//  Copyright © 2015年 Tarena. All rights reserved.
//

#import "BaseModel.h"

@class Hreoskinarraymodel;
@interface HeroSkinModel : BaseModel

@property (nonatomic, strong) NSArray<Hreoskinarraymodel *> *HreoSkinArrayModel;

@end
@interface Hreoskinarraymodel : NSObject

@property (nonatomic, copy) NSString *id;

@property (nonatomic, copy) NSString *bigImg;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, copy) NSString *price;

@property (nonatomic, copy) NSString *smallImg;

@end

