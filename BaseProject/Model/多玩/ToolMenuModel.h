//
//  ToolMenuModel.h
//  BaseProject
//
//  Created by tarena on 15/11/2.
//  Copyright © 2015年 Tarena. All rights reserved.
//

#import "BaseModel.h"

@class Toolmenuarraymodel;
@interface ToolMenuModel : BaseModel

@property (nonatomic, strong) NSArray<Toolmenuarraymodel *> *ToolMenuArrayModel;

@end
@interface Toolmenuarraymodel : NSObject

@property (nonatomic, copy) NSString *icon;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, copy) NSString *type;

@property (nonatomic, copy) NSString *tag;

@end

