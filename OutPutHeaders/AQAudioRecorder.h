/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BaseAudioRecorder.h"
#import "WeChat-Structs.h"


@interface AQAudioRecorder : BaseAudioRecorder {
	BOOL mIsNeedRestartMusic;
	BOOL mIsNeedRestartAudioTalk;
	BOOL mIsShakeTv;
	BOOL mDisableWritingToFile;
	float _pcmSampleRate;
	unsigned long long _firstTimeStamp;
}
@property(assign, nonatomic) BOOL disableWritingToFile;
@property(assign, nonatomic) float pcmSampleRate;
@property(assign, nonatomic) unsigned long long firstTimeStamp;
@property(assign, nonatomic) BOOL isShakeTv;
@property(assign, nonatomic) BOOL needRestartAudioTalk;
@property(assign, nonatomic) BOOL needRestartMusic;
-(void)autostop;
-(void)stop;
-(void)record;
-(BOOL)prepareRecordWithiLBCFile:(id)file;
-(BOOL)prepareRecordWithPCMFile:(id)pcmfile;
-(void)getAudioFingerPrintData:(char*)data Length:(int*)length UserData:(id*)data3;
-(void)extractAudioFingerPrintData:(char*)data Length:(int)length;
-(void)createQAFPFile:(id)file;
-(void)createWaveFile:(id)file;
-(BOOL)prepareRecordForQAFP_Impl;
-(BOOL)prepareRecordForQAFP;
-(BOOL)prepareRecordForQAFP_HD;
-(void)setDelegate:(id)delegate;
-(BOOL)canAutoRestart;
-(BOOL)shouldAutoRestartWith:(int)with;
-(void)setMagicCookieToAudioFile:(OpaqueAudioFileID*)audioFile;
-(void)prepareBuffers;
-(void)setDataFormat_PCM;
-(void)createAudioFile_WAVE:(id)wave Fd:(OpaqueAudioFileID**)fd;
-(void)setDataFormat_iLBC;
-(void)createAudioFile_CAF:(id)caf;
@end

