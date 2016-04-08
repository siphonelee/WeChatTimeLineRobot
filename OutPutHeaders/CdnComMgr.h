/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMService.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "CNetworkStatusExt.h"
#import "PBMessageObserverDelegate.h"

@class MMTimer, NSString, NSDate;

@interface CdnComMgr : MMService <MMService, MMKernelExt, PBMessageObserverDelegate, CNetworkStatusExt> {
	CDNTransportComponentRef m_pCdnCom;
	CdnUploadCallback* m_pUploadCallback;
	CdnDownloadCallback* m_pDownloadCallback;
	unsigned long m_uiGetCdnDnsInfoEventID;
	unsigned long m_uiGetCdnCount;
	NSDate* m_tGetCdn;
	MMTimer* m_tmCheckCdnInfo;
	BOOL m_bInitCdnCom;
	BOOL m_bHasGetCdnDns;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSDate* m_tGetCdn;
+(WXConfig)GetWxConfig;
+(id)GetDownloadThumbClientID:(id)anId;
+(id)GetDownloadClientID:(id)anId HD:(BOOL)hd;
+(id)GetCdnRootPath;
-(void).cxx_destruct;
-(void)SetCdnHostIPFromNewDNS;
-(void)onServiceInit;
-(void)onServiceClearData;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)ReachabilityChange:(unsigned long)change;
-(void)onPreQuit;
-(void)onKickQuit;
-(void)onAuthOK;
-(void)OnDownloadEnd:(id)end;
-(void)CallDownloadExtendsion:(id)extendsion;
-(void)OnUploadEnd:(id)end;
-(void)CallUploadExtendsion:(id)extendsion;
-(void)OnDownloadProgress:(id)progress;
-(void)CallDownloadProgressExtendsion:(id)extendsion;
-(void)OnUploadProgress:(id)progress;
-(void)CallUploadProgressExtendsion:(id)extendsion;
-(void)StopDownloadYearLuckyMoneyImage:(id)image;
-(BOOL)StartDownloadYearLuckyMoneyImage:(id)image;
-(void)StopUploadYearLuckyMoneyImage:(id)image;
-(BOOL)StartUploadYearLuckyMoneyImage:(id)image;
-(BOOL)StartUploadDeviceMedia:(id)media;
-(BOOL)StartUploadDeviceRankCover:(id)cover;
-(void)StopUploadTimelineMediaOfSight:(id)sight;
-(BOOL)StartUploadTimelineMediaOfSight:(id)sight;
-(void)StopUploadTimelineMedia:(id)media;
-(BOOL)StartUploadTimelineMedia:(id)media;
-(void)StopDownloadNormalFile:(id)file;
-(BOOL)StartDownloadNormalFile:(id)file;
-(void)StopUploadNormalFile:(id)file;
-(BOOL)StartUploadNormalFile:(id)file;
-(void)StopDownloadRecordMedia:(id)media;
-(BOOL)StartDownloadRecordMedia:(id)media;
-(void)StopUploadRecordMedia:(id)media;
-(BOOL)StartUploadRecordMedia:(id)media;
-(void)StopDownloadFavMedia:(id)media;
-(BOOL)StrartDownloadFavMedia:(id)media;
-(void)StopUploadFavMedia:(id)media;
-(BOOL)StartUploadFavMedia:(id)media;
-(void)StopDownloadComMedia:(id)media;
-(BOOL)StartDownloadComMedia:(id)media;
-(void)StopUploadComMedia:(id)media;
-(BOOL)StartUploadComMedia:(id)media;
-(BOOL)StopDownloadAppAttach:(id)attach CdnDownloadTaskInfo:(id)info;
-(void)StopDownloadAppAttach:(id)attach;
-(BOOL)StartDownloadAppAttach:(id)attach;
-(void)StopUploadAppAttach:(id)attach;
-(BOOL)StartUploadAppAttach:(id)attach;
-(void)StopDownloadThumb:(id)thumb;
-(BOOL)StartDownloadThumb:(id)thumb;
-(BOOL)StopDownloadVideo:(id)video CdnDownloadTaskInfo:(id)info;
-(void)StopDownloadVideo:(id)video;
-(BOOL)StartDownloadVideo:(id)video AutoDownload:(BOOL)download;
-(void)StopUploadShortVideo:(id)video;
-(BOOL)StartUploadShortVideo:(id)video;
-(void)StopUploadVideo:(id)video;
-(BOOL)StartUploadVideo:(id)video;
-(BOOL)StopDownloadImage:(id)image HD:(BOOL)hd CdnDownloadTaskInfo:(id)info;
-(void)StopDownloadImage:(id)image HD:(BOOL)hd;
-(BOOL)StartDownloadImage:(id)image HD:(BOOL)hd AutoDownload:(BOOL)download;
-(void)StopUploadImage:(id)image;
-(BOOL)StartUploadImage:(id)image;
-(id)GetUploadImageBuffer:(id)buffer;
-(BOOL)StopDownloadComMedia:(id)media CdnDownloadTaskInfo:(id)info;
-(void)CheckCdnInfo;
-(void)GetCdnDnsInfo;
-(void)InternalGetCdnDnsInfo;
-(BOOL)IsCdnAvaible;
-(BOOL)IsAppMsgUseCdn;
-(BOOL)IsVideoUseCdn;
-(BOOL)IsImageUseCdn;
-(BOOL)IsUseCdn;
-(BOOL)IsMessageCanUseCdnDownload:(id)download;
-(BOOL)IsMessageCanUseCdnUpload:(id)upload;
-(void)UnInit;
-(void)dealloc;
-(id)init;
@end

