/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "IContactMgrExt.h"
#import "IMsgExt.h"
#import "MMService.h"

@class NSString, NSMutableDictionary;

@interface WXTalkPresentMgr : MMService <MMService, IMsgExt, IContactMgrExt> {
	NSMutableDictionary* _infoList;
	BOOL _isInfoListLoaded;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableDictionary* infoList;
-(void).cxx_destruct;
-(BOOL)isTrackMode:(id)mode;
-(BOOL)isTalkRoomEmpty:(id)empty;
-(BOOL)loadWXTalkRoomInfoList;
-(void)saveWXTalkRoomInfoList;
-(BOOL)writeToFile:(id)file data:(id)data;
-(id)getRoomMembersByUsername:(id)username;
-(void)handleWXTalkRoomInfoMessage:(id)message withMessageWrap:(id)messageWrap;
-(id)getRoomInfoFromMessageWrap:(id)messageWrap;
-(void)OnMsgNotAddDBNotify:(id)notify MsgWrap:(id)wrap;
-(void)dealloc;
-(id)init;
@end

