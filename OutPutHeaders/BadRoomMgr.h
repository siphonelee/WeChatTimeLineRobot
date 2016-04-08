/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "MessageObserverDelegate.h"
#import "MMService.h"

@class NSString;

@interface BadRoomMgr : MMService <MessageObserverDelegate, MMService> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(id)HandleSysMsg:(id)msg revokeMsgId:(long long*)anId;
-(void)syncWithData:(id)data;
-(void)notifyWithData:(id)data;
-(void)updateSessionByDigest:(id)digest originSession:(id)session;
-(void)parseData:(id)data isSync:(BOOL)sync;
-(void)MessageReturn:(unsigned long)aReturn MessageInfo:(id)info Event:(unsigned long)event;
-(void)dealloc;
-(void)onServiceInit;
@end

