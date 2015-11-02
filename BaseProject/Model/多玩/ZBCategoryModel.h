//
//  ZBCategoryModel.h
//  BaseProject
//
//  Created by tarena on 15/11/2.
//  Copyright © 2015年 Tarena. All rights reserved.
//

#import "BaseModel.h"

@class Zxcategoryarraymodel;
@interface ZBCategoryModel : BaseModel

@property (nonatomic, strong) NSArray<Zxcategoryarraymodel *> *ZXCategoryArrayModel;

@end
@interface Zxcategoryarraymodel : NSObject

@property (nonatomic, copy) NSString *tag;

@property (nonatomic, copy) NSString *text;

@end

