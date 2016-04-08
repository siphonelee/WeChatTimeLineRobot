/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "MMService.h"

@class NSString;

@interface QQAccountMgr : MMService <MMService, PBMessageObserverDelegate> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)handleBindQQ:(id)qq Event:(unsigned long)event;
-(void)handleUnBindQQ:(id)qq Event:(unsigned long)event;
-(void)localUnBindQQ;
-(void)unBindQQclearQQ;
-(BOOL)unBindQQ:(id)qq;
-(BOOL)bindQQ:(id)qq;
-(void)clearQQFlags;
-(void)uninstallQQPluginWithoutCGI;
-(void)clearQQData;
-(void)clearWBReader;
-(void)clearQQInvite;
-(void)clearQQFriend;
-(void)clearQQMsg;
-(void)clearWBSX;
-(void)clearQQMail;
-(void)dealloc;
@end

