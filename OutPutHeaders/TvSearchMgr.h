/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "AQAudioRecorderDelegate.h"
#import "UploadTvFPMgrDelegate.h"
#import "MMService.h"

@class AQAudioRecorder, NSString, UploadTvFPMgr;

@interface TvSearchMgr : MMService <MMService, AQAudioRecorderDelegate, UploadTvFPMgrDelegate> {
	unsigned long _curSessionId;
	AQAudioRecorder* _recoder;
	UploadTvFPMgr* _uploadMgr;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)OnNetworkError:(unsigned long)error;
-(void)OnGetTvItem:(id)item;
-(void)OnAQPart:(id)part Duration:(float)duration EndFlag:(unsigned long)flag ForceDelete:(BOOL)aDelete;
-(void)OnAQEndRecording:(id)recording;
-(void)OnAQBeginRecording:(id)recording ErrNo:(int)no;
-(void)SetCurLocation:(id)location;
-(BOOL)StopSearch:(unsigned long)search;
-(BOOL)StopRecord:(unsigned long)record;
-(int)StartSearch;
-(void)dealloc;
-(id)init;
@end

