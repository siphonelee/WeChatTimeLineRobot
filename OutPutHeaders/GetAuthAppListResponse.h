/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, BaseResponse;

@interface GetAuthAppListResponse : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSMutableArray* authAppList;
@property(assign, nonatomic) unsigned appCount;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

