//
//  HeroDetail.m
//  BaseProject
//
//  Created by tarena on 15/11/2.
//  Copyright © 2015年 Tarena. All rights reserved.
//

#import "HeroDetail.h"

@implementation HeroDetail


+ (NSDictionary *)objectClassInArray{
    return @{@"like" : [HeroDetailLikeModel class], @"hate" : [HeroDetailHateModel class]};
}
+(NSDictionary *)replacedKeyFromPropertyName
{
    return @{@"desc":@"description",@"ID":@"id"};
}
@end
@implementation HeroDetailBraum_QModel
+(NSDictionary *)replacedKeyFromPropertyName
{
    return @{@"desc":@"description",@"ID":@"id"};
}
@end


@implementation HeroDetailBraum_RModel
+(NSDictionary *)replacedKeyFromPropertyName
{
    return @{@"desc":@"description",@"ID":@"id"};
}
@end


@implementation HeroDetailBraum_WModel
+(NSDictionary *)replacedKeyFromPropertyName
{
    return @{@"desc":@"description",@"ID":@"id"};
}
@end


@implementation HeroDetailBraum_BModel
+(NSDictionary *)replacedKeyFromPropertyName
{
    return @{@"desc":@"description",@"ID":@"id"};
}
@end


@implementation HeroDetailBraum_EModel
+(NSDictionary *)replacedKeyFromPropertyName
{
    return @{@"desc":@"description",@"ID":@"id"};
}
@end


@implementation HeroDetailLikeModel

@end


@implementation HeroDetailHateModel

@end


