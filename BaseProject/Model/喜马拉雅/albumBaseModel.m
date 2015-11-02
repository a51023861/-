//
//  albumBaseModel.m
//  BaseProject
//
//  Created by tarena on 15/11/2.
//  Copyright © 2015年 Tarena. All rights reserved.
//

#import "albumBaseModel.h"

@implementation albumBaseModel

@end



@implementation albumAlbumModel

@end


@implementation albumTracksModel

+ (NSDictionary *)objectClassInArray{
    return @{@"list" : [albumTracksListModel class]};
}

@end


@implementation albumTracksListModel

@end


