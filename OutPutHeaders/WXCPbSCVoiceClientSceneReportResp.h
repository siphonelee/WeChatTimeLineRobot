/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class WXCPbVoiceClientScene, NSMutableArray, NSString;

@interface WXCPbSCVoiceClientSceneReportResp : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSMutableArray* clientSceneExtList;
@property(retain, nonatomic) WXCPbVoiceClientScene* clientScene;
@property(assign, nonatomic) int memberId;
@property(assign, nonatomic) long long roomkey;
@property(assign, nonatomic) int roomid;
@property(retain, nonatomic) NSString* groupId;
+(void)initialize;
@end

