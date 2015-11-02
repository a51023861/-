//
//  ZBItemListModel.h
//  BaseProject
//
//  Created by tarena on 15/11/2.
//  Copyright © 2015年 Tarena. All rights reserved.
//

#import "BaseModel.h"

@class Zbitemlistarraymodel;
@interface ZBItemListModel : BaseModel

@property (nonatomic, strong) NSArray<Zbitemlistarraymodel *> *ZBItemListArrayModel;

@end
@interface Zbitemlistarraymodel : NSObject

@property (nonatomic, assign) NSInteger ID;

@property (nonatomic, copy) NSString *text;

@end

