/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString, BaseRequest;

@interface GameCenterSearchRecommendRequest : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* country;
@property(retain, nonatomic) NSString* lang;
@property(retain, nonatomic) NSMutableArray* installedApps;
@property(retain, nonatomic) NSString* keyword;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

