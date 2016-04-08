/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IEmoticonDownloadExt.h"
#import "INetworkStatusReportWithGPSExt.h"
#import "MMService.h"
#import "MessageObserverDelegate.h"
#import "WeChat-Structs.h"
#import "MMKernelExt.h"
#import "IAudioToMessageExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "CNetworkStatusExt.h"

@class NSDate, MMTimer, NSString, CNetworkStatusReportArchive, COOBData, ReportInfo;

@interface CNetworkStatusMgr : MMService <MMService, MessageObserverDelegate, IAudioToMessageExt, CNetworkStatusExt, IEmoticonDownloadExt, MMKernelExt, PBMessageObserverDelegate, INetworkStatusReportWithGPSExt> {
	BOOL m_bConnecting;
	BOOL m_bConnected;
	BOOL m_bReadToGettingData;
	long long m_n64MsgIdForVoiceMsgToDownload;
	BOOL m_bDownloadingEmoticon;
	BOOL m_bReadOnceAgain;
	BOOL m_bDidCheckNewWiFiInterface;
	unsigned long m_uiConnnectType;
	unsigned long m_uiShortChannelFailCount;
	unsigned long m_uiLastReportTime;
	timeval m_tvLastGettingDataTime;
	CNetworkStatusReportArchive* m_reportArchive;
	vector<unsigned long, std::__1::allocator<unsigned long> > m_vecMesssageIdToListen;
	int m_eNetworkStatusType;
	COOBData* m_dtOOB;
	NSDate* m_dtLastReport;
	ReportInfo* m_oReportInfo;
	MMTimer* m_oReportTimer;
	NSString* m_nsLastWifiBssid;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)InternalReportWithGPS:(id)gps inScene:(unsigned)scene;
-(void)InternalReportNetworkInfo:(id)info;
-(id)MakeSafeReportString:(id)string;
-(void)CheckReportNetworkInfo:(unsigned long)info;
-(void)CheckBG2FG;
-(void)onAuthOK;
-(void)OnNetworkStatusReportWithGPS:(id)gps inScene:(unsigned long)scene;
-(void)SaveReportInfo;
-(void)LoadReportInfo;
-(void)ReachabilityChange:(unsigned long)change;
-(id)GetOOBUrl;
-(id)GetOOBData;
-(void)doReportIpxx:(id)ipxx;
-(void)setReadToGettingData;
-(unsigned long)getNetworkStatusType;
-(id)getGpsReportString:(id)string;
-(id)getReportStringWithScene:(unsigned)scene;
-(void)onServiceTerminate;
-(void)onServiceEnterBackground;
-(void)OnEmoticonDownload:(unsigned long)download;
-(void)zeroEmocticonDownloadingStatus;
-(void)OnErrorByReceiver:(id)receiver ErrNo:(int)no;
-(void)OnAddMessageByReceiver:(id)receiver;
-(void)MessageReturn:(unsigned long)aReturn MessageInfo:(id)info Event:(unsigned long)event;
-(void)onServiceReloadData;
-(void)onServiceInit;
-(void)dealloc;
-(id)init;
-(void)unregExt;
-(void)regExt;
-(void)unListenMessageId;
-(void)initMessageIdToListen;
-(void)handleVoiceDowdload:(id)dowdload error:(BOOL)error;
-(void)zeroVoiceMsgToDownload;
-(void)handleSyncEnd;
-(void)handleSyncBegin;
-(void)handleNetworkStatusChange:(unsigned long)change;
-(void)checkCallStatusChangedExt;
-(void)callDisconnectStatusChangedExt;
-(void)translateStatus;
-(void)translateStatusLongUnConnect;
-(void)translateStatusLongConnect;
-(BOOL)isDuringSync;
-(void)handleReport:(int)report;
-(void)handleReportLongUnConnectCount;
-(void)handleReportDisconnected:(int)disconnected;
-(void)realCalDisconnected;
-(void)handleReportGettingData:(int)data;
-(void)doReportNetworkStatus;
-(BOOL)AddOplogInternal;
-(BOOL)isNeedReport;
-(void)loadNetworkStatusReportArchive;
-(timeval)getCurTimeVal;
@end

