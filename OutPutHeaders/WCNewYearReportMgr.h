/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "LocationRetrieveDelegate.h"
#import "MMService.h"

@class WCNewYearReportDB, LocationRetriever, NSString;

@interface WCNewYearReportMgr : MMService <LocationRetrieveDelegate, MMService> {
	LocationRetriever* _locationRetriever;
	WCNewYearReportDB* _logDB;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)monitorShakeH5JumpWebView;
-(void)monitorShakeH5JumpAppStore;
-(void)monitorShakeH5AttentionBrandFail;
-(void)monitorShakeH5AttentionBrandSucc;
-(void)monitorShakeH5AcceptCardSucc;
-(void)monitorShakeH5ClickAcceptCard;
-(void)monitorShakeTypeNoServer;
-(void)monitorShakeTypeFinish;
-(void)monitorShakeTypeH5;
-(void)monitorShakeTypeBussinessHBWaitNoRestCount;
-(void)monitorShakeTypeBussinessHBEnd;
-(void)monitorShakeTypeBussinessHBWait;
-(void)monitorShakeTypeBussinessHB;
-(void)monitorShakeTypeNotice;
-(void)monitorShakeClickLocalNotification;
-(void)monitorShakeExposureAlert;
-(void)monitorShakeEnterShakeViewFromAlert;
-(void)monitorShakeEnterShakeViewRedDot;
-(void)monitorShakeEnterShakeViewNormal;
-(void)statShakeWebViewSnsAction:(id)action;
-(void)statShakeWebViewClose:(id)close;
-(void)statShakeH5DetailJumpToNewWebView:(id)newWebView currUrl:(id)url subResType:(unsigned long)type sponsorId:(id)anId;
-(void)statShakeH5DetailJumpToAppStore:(id)appStore currUrl:(id)url subResType:(unsigned long)type sponsorId:(id)anId;
-(void)statShakeH5DetailAttentionBrandFail:(id)fail currUrl:(id)url subResType:(unsigned long)type sponsorId:(id)anId;
-(void)statShakeH5DetailAttentionBrandSucc:(id)succ currUrl:(id)url subResType:(unsigned long)type sponsorId:(id)anId;
-(void)statShakeH5DetailAddCardSuccess:(id)success currUrl:(id)url subResType:(unsigned long)type sponsorId:(id)anId;
-(void)statShakeH5DetailClickAddCard:(id)card currUrl:(id)url subResType:(unsigned long)type sponsorId:(id)anId;
-(void)statNoHBDetailClickWebWithSponsorId:(id)sponsorId IsLocalH5:(BOOL)a5 H5ResSubType:(unsigned long)type URLString:(id)string;
-(void)statShakeSvrLimitAdExpourse:(unsigned long)expourse isResExist:(BOOL)exist;
-(void)statShakeEnterpriseHBDetailShakeClose:(id)close sightShowTime:(unsigned long)time money:(unsigned long)money;
-(void)statShakeEnterpriseHBDetailClickClose:(id)close sightShowTime:(unsigned long)time money:(unsigned long)money;
-(void)statShakeEnterpriseHBDetailClickMore:(id)more adUrl:(id)url money:(unsigned long)money subResType:(unsigned long)type;
-(void)statShakeEnterpriseHBCancel:(unsigned long)cancel sponsorName:(id)name;
-(void)statShakeEnterpriseHBOpen:(unsigned long)open sponsorName:(id)name;
-(void)statShakeEnterpriseHBExposure:(unsigned long)exposure sponsorName:(id)name;
-(void)statShakeHBWaitWithIsLogoHBShow:(BOOL)isLogoHBShow ResouceId:(unsigned long)anId sponsorName:(id)name;
-(void)statShakeLogoHBClick:(unsigned long)click sponsorName:(id)name hadLoadResource:(BOOL)resource;
-(void)statShakeLogoHBExposure:(unsigned long)exposure sponsorName:(id)name hadLoadResource:(BOOL)resource;
-(void)onRetrieveLocationError:(int)error;
-(void)onRetrieveLocationTimeOut:(id)anOut;
-(void)onRetrieveLocationOK:(id)ok;
-(void)statShakeGPSInfo:(id)info;
-(void)tryStatShakeGPSInfo;
-(void)statShowFreePassSwitchCloseSuccess;
-(void)statShowFreePassSwitchOpenSuccess;
-(void)statShowFreePassSwitch;
-(void)statShowFreePassAlertAndCancelOpen;
-(void)statShowFreePassAlertAndOpenSuccess;
-(void)statShowFreePassAlert;
-(void)statFriendSendHBSucc:(id)succ randomMoney:(unsigned long)money isFreePass:(BOOL)pass;
-(void)statFriendClickSendHB:(id)hb randomMoney:(unsigned long)money;
-(void)statFriendPayAndSeePhotoFree:(id)free;
-(void)statFriendPayAndSeePhotoFail:(id)fail;
-(void)statFriendPayAndSeePhoto:(id)photo randomMoney:(unsigned long)money;
-(void)statFriendTakeScreenShot:(id)shot;
-(void)statFriendBigImageLoaded:(id)loaded;
-(void)statFriendClickRedEvenlopesFeed:(id)feed;
-(void)statFriendClickInfo:(unsigned long)info dataItem:(id)item randomMoney:(unsigned long)money isFreePass:(BOOL)pass;
-(void)statFriendClickInfo:(unsigned long)info dataItem:(id)item randomMoney:(unsigned long)money;
-(void)statFriendClickInfo:(unsigned long)info snsId:(id)anId hadPayed:(BOOL)payed adId:(id)anId4 resId:(id)anId5 money:(unsigned long)money IsFaceCrop:(BOOL)crop;
-(void)statFriendClickInfo:(unsigned long)info snsId:(id)anId hadPayed:(BOOL)payed adId:(id)anId4 resId:(id)anId5 money:(unsigned long)money IsFaceCrop:(BOOL)crop IsFreePass:(BOOL)pass;
-(void)statPosterClickHBDetail:(id)detail totalMoney:(unsigned long)money totalCount:(unsigned long)count;
-(void)statPosterClickBigImage:(id)image totalMoney:(unsigned long)money totalCount:(unsigned long)count;
-(void)statSendHBPostSucc:(id)succ;
-(void)statSendHBOnPost:(unsigned long)post;
-(void)statSendHBDeleteImage;
-(void)statSendHBPreviewImage;
-(void)statSendHBSelectImageFinish;
-(void)statSendHBSelectImage;
-(void)statSendHBHomePage;
-(void)statSendHB:(unsigned long)hb SnsId:(id)anId visiblityType:(unsigned long)type;
-(void)monitorPostHBImageDenyForClosedBrowseSwitch;
-(void)monitorPostHBImageDenyForObtainUsedRight;
-(void)monitorPostHBImageDenyForHasUsed;
-(void)monitorToggleSnsHBImageSwitch:(BOOL)aSwitch WithCount:(unsigned long)count;
-(void)monitorPayByNotFreePass;
-(void)monitorPayByFreePass;
-(void)monitorShowFreePassSwitchOpenFail;
-(void)monitorShowFreePassSwitchOpenSuccess;
-(void)monitorShowFreePassSwitchCloseFail;
-(void)monitorShowFreePassSwitchCloseSuccess;
-(void)monitorShowFreePassSwitch;
-(void)monitorShowFreePassAlertAndCancelOpen;
-(void)monitorShowFreePassAlertAndOpenFail;
-(void)monitorShowFreePassAlertAndOpenSuccess;
-(void)monitorShowFreePassAlert;
-(void)monitorNotifyHBFreeSucccess;
-(void)monitorNotifyHBFreeFail;
-(void)monitorAmountCheckReturnSvrDownAction;
-(void)monitorAmountCheckReturnUnknownAction;
-(void)monitorAmountCheckReturnUseReturnAmountList;
-(void)monitorAmountCheckReturnUseAmountLevel:(int)level;
-(void)monitorAmountCheckReturnUseAmountLevel;
-(void)monitorAmountCheckReturnFree;
-(void)monitorAmountCheckFail;
-(void)monitorPostTip;
-(void)monitorHongBaoSnsTip;
-(void)monitorHongBaoRedDot;
-(void)monitorReceiveSnsTipsConfigByParseTipsContentFail;
-(void)monitorReceiveSnsTipsConfigByParseRootFail;
-(void)monitorReceiveSnsTipsConfig;
-(void)monitorReceiveSnsAmountLevelConfigByDefaultAmountLevel:(int)level;
-(void)monitorReceiveSnsAmountLevelConfigByParseRootFail;
-(void)monitorReceiveSnsAmountLevelConfig;
-(void)monitorReceiveSnsEntranceByParseAmountLevelSuccess:(int)success;
-(void)monitorReceiveSnsEntranceByParseBeginEndTimeError;
-(void)monitorReceiveSnsEntranceByParseRedDotFail;
-(void)monitorReceiveSnsEntranceByParseRootFail;
-(void)monitorReceiveSnsEntranceConfig;
-(void)monitorSnsAdExposureSuccessForReportID:(unsigned long)reportID reportKey:(unsigned long)key;
-(void)monitorSnsAdMissIDAndKey;
-(void)monitorSnsAdNoExposureAsMissWording;
-(void)monitorSnsAdNoExposureAsMissLogo;
-(void)monitorSnsAdNoExposureAsMissBkgImage;
-(void)monitorSnsAdNoExposureAsMissResource;
-(void)monitorSnsAdNoExposureAsMissResourceID;
-(void)monitorSnsAdExposureSuccess;
-(void)monitorUploadMediaClientLocalErrorBySnsServer;
-(void)monitorUploadMediaServerErrorBySnsServer;
-(void)monitorUploadMediaConnectFailBySnsServer;
-(void)monitorUploadMediaUnknownErrorByCDN;
-(void)monitorUploadMediaClientLocalErrorByCDN;
-(void)monitorUploadMediaServerErrorByCDN;
-(void)monitorUploadMediaConnectFailByCDN;
-(void)monitorSnsPostServerOtherError;
-(void)monitorSnsPostServerFrequency;
-(void)monitorSnsPostServerSystemError;
-(void)monitorSnsPostServerSpam;
-(void)monitorSnsPostConnectFail;
-(void)monitorFriendSendHBFail;
-(void)monitorFriendDownloadBigImageFail:(id)fail;
-(void)monitorFriendDownloadBigImageSuccess:(id)success;
-(void)monitorFriendShowBlurView:(id)view;
-(void)resetDataBase;
-(BOOL)isNeedStatAllLogsFromDataBase;
-(void)tryStatAllLogsFromDataBase;
-(void)onServiceReloadData;
-(void)onServiceInit;
-(void)willEnterForeground:(id)foreground;
-(void)monitor:(unsigned)monitor key:(unsigned)key value:(unsigned)value;
-(void)addLog:(unsigned long)log logExt:(id)ext;
-(void)dealloc;
-(id)init;
@end

