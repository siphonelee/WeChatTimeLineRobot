/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "MMService.h"

@class NSString, NSRecursiveLock;

@interface JSSpeedyMgr : MMService <MMService> {
	NSString* _url;
	NSRecursiveLock* _lock;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)notifyOnMainThreadFinished;
-(void)webviewDownloadFinished;
-(id)getCurMainDocUrl;
-(void)setCurMainDocUrl:(id)url;
-(id)init;
@end

