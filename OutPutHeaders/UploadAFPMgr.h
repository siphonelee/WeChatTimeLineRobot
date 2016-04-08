/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PBMessageObserverDelegate.h"
#import "MMObject.h"

@class NSMutableArray, MMTimer;
@protocol UploadAFPMgrDelegate;

@interface UploadAFPMgr : MMObject <PBMessageObserverDelegate> {
	unsigned long _curFPId;
	BOOL _isUploading;
	BOOL _isEnd;
	NSMutableArray* _uploadQueue;
	int _eventType;
	id<UploadAFPMgrDelegate> _delegate;
	MMTimer* checkUploadQueueTimer;
}
@property(retain, nonatomic) MMTimer* checkUploadQueueTimer;
@property(assign, nonatomic) __weak id<UploadAFPMgrDelegate> delegate;
-(void).cxx_destruct;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(BOOL)isNeedUploadForDuration:(float)duration;
-(void)checkUploadQueue;
-(void)stopUploadTaskWithErr:(int)err;
-(void)stopUploadTask;
-(void)SendFPData:(id)data FPId:(unsigned long)anId Duration:(float)duration EndFlag:(unsigned long)flag;
-(void)AddNewPart:(unsigned long)part Duration:(float)duration EndFlag:(unsigned long)flag;
-(void)MainUpdateQueue:(id)queue;
-(void)Stop;
-(void)Start:(unsigned long)start;
-(void)dealloc;
-(id)init;
-(void)doUpload:(unsigned long)upload Duration:(float)duration EndFlag:(unsigned long)flag;
@end

