/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SPXAudioPlayerDelegate.h"
#import "SilkAudioPlayerDelegate.h"
#import "DownloadVoiceDelegate.h"
#import "MMService.h"
#import "MessageObserverDelegate.h"
#import "MMService.h"
#import "AMRAudioPlayerDelegate.h"

@class CMainControll, SPXAudioPlayer, AMRAudioPlayer, NSString, SilkAudioPlayer, CDownloadVoiceMgr;

@interface AudioReceiver : MMService <AMRAudioPlayerDelegate, SPXAudioPlayerDelegate, SilkAudioPlayerDelegate, DownloadVoiceDelegate, MessageObserverDelegate, MMService> {
	AMRAudioPlayer* m_amrplayer;
	SPXAudioPlayer* m_spxplayer;
	SilkAudioPlayer* m_silkPlayer;
	CMainControll* m_mainController;
	CDownloadVoiceMgr* m_download;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)downloadVoiceMessage:(id)message;
-(BOOL)isPlaying;
-(BOOL)StopPlayTmpAudio:(unsigned long)audio;
-(BOOL)StartPlayTmpAudioWithAutoMode:(unsigned long)autoMode;
-(BOOL)StartPlayTmpAudioWithEarpieceMode:(unsigned long)earpieceMode;
-(BOOL)StartPlayTmpAudio:(unsigned long)audio;
-(BOOL)StartPlayTmpAudio:(unsigned long)audio forceEarpieceMode:(BOOL)mode forceAutoMode:(BOOL)mode3;
-(BOOL)StopPlay:(id)play MesLocalID:(unsigned long)anId;
-(BOOL)StartPlayWithAutoMode:(id)autoMode MesLocalID:(unsigned long)anId;
-(BOOL)StartPlayWithEarpieceMode:(id)earpieceMode MesLocalID:(unsigned long)anId;
-(BOOL)StartPlay:(id)play MesLocalID:(unsigned long)anId Path:(id)path;
-(BOOL)StartPlay:(id)play MesLocalID:(unsigned long)anId;
-(BOOL)StartPlay:(id)play MesLocalID:(unsigned long)anId Path:(id)path forceEarpieceMode:(BOOL)mode forceAutoMode:(BOOL)mode5;
-(void)dealloc;
-(BOOL)initFacade:(id)facade;
-(id)init;
-(BOOL)updateMessageToDB:(id)db;
-(BOOL)getMessageFromDB:(id)db;
-(id)getAudioFileName:(id)name LocalID:(unsigned long)anId;
-(id)getChatName:(id)name;
-(BOOL)OnAMREndDontNotifyOtherApp;
-(void)OnAMREarTip;
-(void)OnAMREndPlaying:(id)playing isForceStop:(BOOL)stop;
-(void)OnAMRBeginPlaying:(id)playing ErrNo:(int)no;
-(void)OnAMRLevelMeter:(id)meter Peak:(float)peak;
-(BOOL)OnSPXEndDontNotifyOtherApp;
-(void)OnSPXEarTip;
-(void)OnSPXEndPlaying:(id)playing isForceStop:(BOOL)stop;
-(void)OnSPXLevelMeter:(id)meter Peak:(float)peak;
-(BOOL)onSilkEndDontNotifyOtherApp;
-(void)onSilkEarTip;
-(void)onSilkEndPlaying:(id)playing isForceStop:(BOOL)stop;
-(void)onSilkBeginPlaying:(id)playing ErrNo:(int)no;
-(void)onSilkLevelMeter:(id)meter Peak:(float)peak;
-(void)OnRecvData:(id)data MesLocalID:(unsigned long)anId n64MesSvrID:(long long)anId3 CreateTime:(unsigned long)time VoiceTime:(unsigned long)time5 Offset:(unsigned long)offset Len:(unsigned long)len Data:(id)data8 EndFlag:(unsigned long)flag ErrNo:(unsigned long)no;
-(void)MessageReturn:(unsigned long)aReturn MessageInfo:(id)info Event:(unsigned long)event;
@end

