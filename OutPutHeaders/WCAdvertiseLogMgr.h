/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "MMService.h"
#import "MMKernelExt.h"

@class NSMutableArray, NSString, WCAdvertiseLogDB;

@interface WCAdvertiseLogMgr : MMService <PBMessageObserverDelegate, MMKernelExt, MMService> {
	BOOL adLogReporting;
	BOOL reportTaskRunning;
	WCAdvertiseLogDB* logDB;
	unsigned long reportBeginLocalId;
	unsigned long reportCurrLocalId;
	unsigned long reportEndLocalId;
	BOOL delayInsertDB;
	NSMutableArray* tempLogs;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(unsigned long)getMaxSendSize;
-(unsigned long)getRandomInternalTime;
-(unsigned long)getExceptionMaxTime;
-(void)saveNextReportTime:(unsigned long)time;
-(unsigned long)getNextReportTime;
-(void)onAuthOK;
-(void)didEnterBackground;
-(void)willEnterForeground;
-(void)startReportADLog;
-(id)getReportADLogPackage;
-(void)tryReportADLog;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)insertDBLogsToDb;
-(void)reportADLog:(unsigned long)log logExt:(id)ext;
-(id)getKVLogHead;
-(void)setupLogDB;
-(void)onServiceReloadData;
-(void)dealloc;
-(void)onServiceClearData;
-(void)onServiceInit;
-(id)getPathForLogCache;
@end

