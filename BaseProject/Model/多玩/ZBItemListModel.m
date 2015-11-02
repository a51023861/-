//
//  ZBItemListModel.m
//  BaseProject
//
//  Created by tarena on 15/11/2.
//  Copyright © 2015年 Tarena. All rights reserved.
//

#import "ZBItemListModel.h"

@implementation ZBItemListModel


+ (NSDictionary *)objectClassInArray{
    return @{@"ZBItemListArrayModel" : [Zbitemlistarraymodel class]};
}
@end
@implementation Zbitemlistarraymodel
+(NSDictionary *)replacedKeyFromPropertyName
{
    return @{@"ID":@"id"};
}
@end


