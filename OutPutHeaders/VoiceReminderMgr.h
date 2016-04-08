/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "IMsgExt.h"
#import "MMService.h"

@class NSString, NSMutableDictionary;

@interface VoiceReminderMgr : MMService <MMService, PBMessageObserverDelegate, IMsgExt> {
	NSMutableDictionary* _dicRemindId;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)OnAddMsg:(id)msg MsgWrap:(id)wrap;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)deleteRemindMsgs:(id)msgs;
-(void)dealloc;
-(id)init;
-(BOOL)shouldNotifyRemindMsg:(id)msg;
-(void)doRemindMsgsOp:(unsigned long)op arrRemindId:(id)anId;
-(void)onRemindMsgsOpReturn:(id)aReturn Event:(unsigned long)event;
@end

