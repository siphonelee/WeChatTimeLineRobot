/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "MMConfigMgrExt.h"
#import "MMService.h"

@class NSString, NSMutableDictionary;

@interface TemplateMsgRecvMgr : MMService <MMService, PBMessageObserverDelegate, MMConfigMgrExt> {
	NSMutableDictionary* _dictTemplateMsgRecvState;
	NSMutableDictionary* _dictIdListOfUser;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(id)getRecvStateArrayByUsername:(id)username;
-(void)onSetRecvState:(id)state;
-(void)onGetRecvState:(id)state;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)getRecvState:(id)state;
-(BOOL)shouldShowEntryForUser:(id)user;
-(BOOL)shouldShowBlockButtonForMsg:(id)msg;
-(void)setRecvState:(unsigned long)state toUser:(id)user withTemplateId:(id)templateId;
-(void)setRecvState:(id)state toUser:(id)user;
-(void)getRecvStateByUsername:(id)username;
-(void)dealloc;
-(id)init;
@end

