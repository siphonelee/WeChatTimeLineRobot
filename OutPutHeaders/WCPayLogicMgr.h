/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMPackageDownloadMgrExt.h"
#import "WeChat-Structs.h"
#import "MMService.h"
#import "IAutoVerifySMSExt.h"
#import "MMService.h"
#import "IMsgExt.h"
#import "WCPayNetworkHelperDelegate.h"

@class NSDate, NSDictionary, WCPayAvalibleBankCardBinInfo, WCPayBindInfo, WCPayBindInfoSMS, WCPayResetPasswordInfo, NSString, WCRedEnvelopesCdnManager, TenpayCertificate, WCPayNetworkHelper, NSMutableDictionary, WCPayLocalCachedData, WCPayAuthenticationPay, WCPayAuthenticationPayVerifySMSStruct, WCPayBindCardInfo, NSMutableArray;

@interface WCPayLogicMgr : MMService <MMService, WCPayNetworkHelperDelegate, MMPackageDownloadMgrExt, IMsgExt, IAutoVerifySMSExt> {
	WCPayLocalCachedData* m_oWCPayLocalCachedData;
	WCPayNetworkHelper* m_oWCPayNetworkHelper;
	unsigned long m_uWCPayLogicQuitCount;
	WCPayAuthenticationPay* m_oWCPayAuthenticationPay;
	WCPayAuthenticationPayVerifySMSStruct* m_oWCPayAuthenticationPayVerifySMSStruct;
	WCPayBindInfo* m_oWCPayBindInfo;
	WCPayBindInfoSMS* m_oWCPayBindInfoSMS;
	WCPayBindCardInfo* m_owcPayUnbindCardInfo;
	WCPayResetPasswordInfo* m_oWCPayResetPasswordInfo;
	WCPayAvalibleBankCardBinInfo* m_oWCPayAvalibleBankCardBinInfo;
	NSString* m_orderListExtBuffer;
	NSString* m_bizOrderListExtBuffer;
	NSDictionary* m_dicCFTNeedPayRequestInfo;
	NSString* m_oOldPassword;
	NSString* m_oNewPassword;
	NSDictionary* m_bufferAvailableCard;
	NSDate* m_oGetDate;
	NSString* m_nsBufferStamp;
	NSDate* m_oGetBankLogoDate;
	NSMutableArray* m_aReceivedStatusChangedOrderList;
	NSMutableArray* m_aOrderList;
	unsigned long m_uiOrderListSum;
	unsigned long m_uiLimit;
	BOOL m_bGetTenpaySecureCtrlSalt;
	BOOL m_needRetryDownloadPackageList;
	TenpayCertificate* m_oTenpayCertificate;
	NSString* m_oTenpayCertificateToken;
	NSDate* m_ndOfflinePayTokenValidDate;
	NSString* certId;
	unsigned getTokenScene;
	BOOL m_hasLoadCreditCardViewDic;
	NSMutableDictionary* m_dicCreditCardHadView;
	unsigned long m_lastQueryCreditPayTime;
	NSString* m_nsCurrentScene;
	NSMutableArray* m_handledMsgSvrIds;
	WCRedEnvelopesCdnManager* _m_oCdnManager;
	NSMutableDictionary* m_sceneBuffer;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) WCRedEnvelopesCdnManager* m_oCdnManager;
-(void).cxx_destruct;
-(void)OnHandleOpenAutoVerifySMS:(id)sms;
-(void)onPackageListUpdated:(id)updated;
-(void)setBanners:(id)banners;
-(id)getBanners;
-(void)GetBankPackage;
-(void)QuitWCPay;
-(void)StartWCPay;
-(void)GetTenpaySecureCtrlSalt;
-(void)VerifyPayPassword:(id)password Scene:(unsigned long)scene;
-(void)setCurrentSceneValue:(id)value;
-(void)setCFTNeedPayRequestExtraInfo:(id)info;
-(void)OnWCToTenpayCommonResponse:(id)tenpayCommonResponse Request:(id)request;
-(void)OnWCToTenpayCommonSystemErrorResponse:(id)tenpayCommonSystemErrorResponse Request:(id)request;
-(void)OnWCToTenpayCommonErrorResponse:(id)tenpayCommonErrorResponse Request:(id)request;
-(void)OnSetMainBankCardErrorResponse:(id)response Request:(id)request;
-(void)OnSetMainBankCardResponse:(id)response Request:(id)request;
-(void)OnWCPayConfirmOfflinePayErrorResponse:(id)response Request:(id)request;
-(void)OnWCPayConfirmOfflinePayResponse:(id)response Request:(id)request;
-(void)OnGetOfflinePayInfoErrorResponse:(id)response Request:(id)request;
-(void)OnGetOfflinePayInfoResponse:(id)response Request:(id)request;
-(void)OnRemoveVirtualCardErrorResponse:(id)response Request:(id)request;
-(void)OnRemoveVirtualCardResponse:(id)response Request:(id)request;
-(void)OnEvaluateOrderErrorResponse:(id)response Request:(id)request;
-(void)OnEvaluateOrderResponse:(id)response Request:(id)request;
-(void)OnCheckWCPayJsApiErrorResponse:(id)response Request:(id)request;
-(void)OnCheckWCPayJsApiResponse:(id)response Request:(id)request;
-(void)OnWCPaySubscribeServiceAppErrorResponse:(id)response Request:(id)request;
-(void)OnWCPaySubscribeServiceAppResponse:(id)response Request:(id)request;
-(void)OnWCPayQuitQRScanPayErrorResponse:(id)response Request:(id)request;
-(void)OnWCPayQuitQRScanPayResponse:(id)response Request:(id)request;
-(void)OnWCBizIapOrderDetailErrorResponse:(id)response Request:(id)request;
-(void)OnWCBizIapOrderDetailResponse:(id)response Request:(id)request;
-(void)OnGetA8KeyLogicErrorResponse:(id)response Request:(id)request;
-(void)OnGetA8KeyLogicResponse:(id)response Request:(id)request;
-(void)OnWCPaySubmitMallPrepayErrorResponse:(id)response Request:(id)request;
-(void)OnWCPaySubmitMallPrepayResponse:(id)response Request:(id)request;
-(void)OnWCPayGenPrepayErrorResponse:(id)response Request:(id)request;
-(void)OnWCPayGenPrepayResponse:(id)response Request:(id)request;
-(void)OnWCPayGetAppAuthUrlErrorResponse:(id)response Request:(id)request;
-(void)OnWCPayGetAppAuthUrlResponse:(id)response Request:(id)request;
-(void)OnWCPayDelOrderHistoryErrorResponse:(id)response Request:(id)request;
-(void)OnWCPayDelOrderHistoryResponse:(id)response Request:(id)request;
-(void)OnWCPayGetOrderHistoryErrorResponse:(id)response Request:(id)request;
-(void)OnWCPayGetOrderHistoryResponse:(id)response Request:(id)request;
-(void)insideCallBackGetHtml5WalletUrl:(id)url request:(id)request;
-(void)saveCacheWalletUrl:(id)url;
-(id)readCacheWalletUrl;
-(void)getHtml5WalletUrl;
-(BOOL)isNeedShowRedCodeInMoreView;
-(void)removeRedDotForTransferNowAndForever;
-(BOOL)needToShowRedDotForTransfer;
-(void)updateBrightness;
-(void)setBrightness:(float)brightness;
-(void)insideGetTenpaySecureCtrlSalt:(id)salt OnRequest:(id)request;
-(void)insideCallBackVerifyPayPassword:(id)password OnRequest:(id)request;
-(void)onServiceClearData;
-(BOOL)onServiceMemoryWarning;
-(void)onServiceTerminate;
-(void)onServiceEnterBackground;
-(void)onServiceReloadData;
-(void)onServiceInit;
-(void)dealloc;
-(void)clearData;
-(void)enterForeground;
-(void)initLocalCachedData;
-(id)init;
-(void)UpdateTenpaySecureCtrlSalt;
-(void)GetWCPayBusinessRequest:(id)request WXInnerUseDic:(id)dic CMDID:(unsigned long)cmdid OutputType:(unsigned long)type;
-(void)safeSaveLocalData;
-(unsigned long)GetStatusChangedOrderListCount;
-(id)GetStatusChangedOrderList;
-(void)RemoveAllStatusChangedOrder;
-(void)RemoveStatusChangedOrderDetail:(id)detail;
-(void)AddStatusChangedOrderDetail:(id)detail;
-(void)SetEvaluateOrder:(id)order;
-(void)GetIAPHistoryOrderDetailInfo:(id)info;
-(void)GetHistoryOrderDetailInfo:(id)info PayType:(int)type;
-(void)GetWebPayOrderDetailInfoAndBindQueryNew:(id)aNew;
-(void)GetOrderDetailInfoAndBindQueryNew:(id)aNew ProductsID:(id)anId UsedBalance:(int)balance Scene:(int)scene payScene:(int)scene5;
-(void)GetOrderDetailInfoAndBindQueryNew:(id)aNew ProductsID:(id)anId UsedBalance:(int)balance Scene:(int)scene;
-(void)GetOrderDetailInfo:(id)info ProductsID:(id)anId UsedBalance:(int)balance;
-(void)DeleteAllOrder;
-(void)DeleteOrder:(id)order PayType:(unsigned long)type;
-(void)GetOrderList:(unsigned long)list Limit:(unsigned long)limit;
-(void)clearOrderListCache;
-(void)insideCallBackEvaluateOrderErrorResponse:(id)response Request:(id)request;
-(void)insideCallBackEvaluateOrderResponse:(id)response Request:(id)request;
-(void)insideCallBackWCPayGetOrderHistoryResponse:(id)response Request:(id)request;
-(void)insideCallBackWCPayGetOrderHistoryErrorResponse:(id)response Request:(id)request;
-(void)insideCallBackWCPayDelOrderHistoryResponse:(id)response Request:(id)request;
-(void)insideCallBackWCPayDelOrderHistoryErrorResponse:(id)response Request:(id)request;
-(void)insideCallBackWCBizIapOrderDetailErrorResponse:(id)response Request:(id)request;
-(void)insideCallBackWCBizIapOrderDetailResponse:(id)response Request:(id)request;
-(void)insideCallBackGetHistoryOrderDetailInfo:(id)info OnRequest:(id)request;
-(void)insideCallBackGetOrderDetailInfo:(id)info OnRequest:(id)request;
-(void)insideCallBackGetWebPayOrderDetailInfoAndBindQueryNew:(id)aNew OnRequest:(id)request;
-(void)insideCallBackGetOrderDetailInfoAndBindQueryNew:(id)aNew OnRequest:(id)request;
-(id)GetAllOrderCanPayBank:(id)bank;
-(void)insideCallBackRealnameReg:(id)reg OnRequest:(id)request;
-(void)insideCallBackRealnameAuthen:(id)authen OnRequest:(id)request;
-(void)SetWCPayPasswordInBind:(id)bind RepeatPassword:(id)password PayKey:(id)key VerifySMS:(id)sms UserInfo:(id)info isOverseasBankCard:(BOOL)card BindCard:(BOOL)card7;
-(void)SetWCPayPasswordInBind:(id)bind RepeatPassword:(id)password PayKey:(id)key VerifySMS:(id)sms UserInfo:(id)info isOverseasBankCard:(BOOL)card;
-(void)BindCardVerifySMS:(id)sms UserInfo:(id)info;
-(void)BindCardVerifyCard:(id)card UserInfo:(id)info;
-(void)BindCardVerifyCard:(id)card UserInfo:(id)info Retry:(BOOL)retry;
-(void)GetTenpayImportBindQuery:(id)query;
-(void)insideCallBackSetWCPayPasswordInReset:(id)reset OnRequest:(id)request;
-(void)insideCallBackSetWCPayPasswordInBind:(id)bind OnRequest:(id)request;
-(void)insideCallBackBindCardVerifyCardSMS:(id)sms OnRequest:(id)request;
-(void)insideCallBackBindCardVerifyCard:(id)card OnRequest:(id)request;
-(void)insideCallBackTenpayImportBindQuery:(id)query OnRequest:(id)request;
-(id)getLocalBalanceInfo;
-(BOOL)updateBalanceWithInfo:(id)info partical:(BOOL)partical;
-(void)SetShowedChangeWalletTips:(BOOL)tips;
-(BOOL)IsShowedChangeWalletTips;
-(void)insideCallBackSetUserWallet:(id)wallet OnRequest:(id)request;
-(void)insideCallBackQueryUserWallet:(id)wallet OnRequest:(id)request;
-(void)SetUserWallet:(id)wallet;
-(void)QueryUserWallet;
-(void)RealnameReg:(id)reg password:(id)password;
-(void)RealnameAuthen:(id)authen idCard:(id)card;
-(void)setVisitActivity:(unsigned long)activity;
-(BOOL)isVisitActivity:(unsigned long)activity;
-(void)setLocalBadgetIndex:(unsigned long)index;
-(unsigned long)getLocalBadgetIndex;
-(void)SetShowedRedCodeForWXBorrowMoneyItem:(id)wxborrowMoneyItem WithRedCodeIndex:(unsigned long)redCodeIndex;
-(BOOL)IsShowedRedCodeForWXBorrowMoneyItem:(id)wxborrowMoneyItem WithRedCodeIndex:(unsigned long)redCodeIndex;
-(void)SetShowedFaceToFaceReceiveMoneyTips:(BOOL)faceReceiveMoneyTips;
-(BOOL)IsShowedFaceToFaceReceiveMoneyTips;
-(void)SetShowedFaceToFaceTransferViewTips:(BOOL)faceTransferViewTips;
-(BOOL)IsShowedFaceToFaceTransferViewTips;
-(void)SetShowedBalanceDescription:(BOOL)description;
-(BOOL)IsShowedBalanceDescription;
-(id)GetLastBankCard:(int)card;
-(id)GetLastBankCard;
-(id)GetMainBankCard;
-(void)SetMainBankCard:(id)card;
-(void)GetAvailableBank;
-(void)UnBindCard:(id)card WCPayPassword:(id)password;
-(void)GetCardBinAndAvailableBankWithoutOrderID:(id)anId scene:(int)scene;
-(void)GetCardBinAndAvailableBank:(id)bank scene:(int)scene;
-(void)GetBindingCardBin:(id)bin;
-(void)addParametersForBalance:(id)balance;
-(void)addParametersForTouchID:(id)touchID;
-(void)GetPayCardListAndUsrVerifiedInfo:(BOOL)info ToMainServiceSearch:(BOOL)mainServiceSearch UsedMemoryCacheCard:(BOOL)card UsedLocalCacheCard:(BOOL)card4 Scene:(int)scene;
-(void)GetPayCardListAndUsrVerifiedInfo:(BOOL)info ToMainServiceSearch:(BOOL)mainServiceSearch UsedMemoryCacheCard:(BOOL)card UsedLocalCacheCard:(BOOL)card4;
-(void)GetPayCardListAndUsrVerifiedInfo:(BOOL)info ToMainServiceSearch:(BOOL)mainServiceSearch;
-(void)GetPayCardListAndUsrVerifiedInfo:(BOOL)info ToMainServiceSearch:(BOOL)mainServiceSearch UsedMemoryCacheCard:(BOOL)card;
-(void)callBackBufferGetPayCardListAndUsrVerifiedInfo:(id)info;
-(void)insideCallBackSetMainBankCardErrorResponse:(id)response Request:(id)request;
-(void)insideCallBackSetMainBankCardResponse:(id)response Request:(id)request;
-(void)insideCallBackUnBindCard:(id)card OnRequest:(id)request;
-(void)insideCallBackGetCardBinAndAvailableBank:(id)bank OnRequest:(id)request;
-(void)insideCallBackGetAvailableBank:(id)bank OnRequest:(id)request;
-(void)insideCallBackGetCardBin:(id)bin OnRequest:(id)request;
-(void)insideCallBackGetPayCardListAndUsrVerifiedInfo:(id)info OnRequest:(id)request NewInfo:(BOOL)info3;
-(void)saveCreditCardHadViewDic;
-(void)loadCreditCardHadViewDic;
-(BOOL)hadCreditCardView:(id)view;
-(void)setCreditCardView:(id)view;
-(void)ShowedCreditCardNew:(unsigned long)aNew;
-(BOOL)IsCreditCardShowedNew:(unsigned long)aNew;
-(void)RemoveVirtualCard:(unsigned long)card cardBankType:(id)type;
-(void)UnBindCreditPay:(id)pay SerialNo:(id)no passwd:(id)passwd;
-(void)VerifyCreditPayAndCreateCard:(id)card password:(id)password sessionKey:(id)key bindSessionKey:(id)key4 bankType:(id)type;
-(void)VerifyCreditPaySmsVerifyCode:(id)code sessionKey:(id)key;
-(void)VerifyCreditPayPassword:(id)password bankType:(id)type;
-(void)AuthenticationCreditPayIdentifier:(id)identifier idNum:(id)num sessionKey:(id)key retry:(BOOL)retry bankType:(id)type;
-(void)CommitWXCreditAnswer:(id)answer questionAry:(id)ary;
-(void)QueryWXCreditQuestion:(id)question;
-(void)QueryWXCreditCardDetail:(id)detail password:(id)password;
-(void)QueryWXCreditCardInfo:(id)info bankType:(id)type goToBank:(BOOL)bank forceQuery:(BOOL)query;
-(void)insideCallBackRemoveVirtualCardErrorResponse:(id)response Request:(id)request;
-(void)insideCallBackRemoveVirtualCardResponse:(id)response Request:(id)request;
-(void)insideCallBackUnbindCreditPay:(id)pay OnRequest:(id)request;
-(void)insideCallBackVerifyCreditPayAndCreateCard:(id)card OnRequest:(id)request;
-(void)insideCallBackVerifyCreditPaySmsVerifyCode:(id)code OnRequest:(id)request;
-(void)insideCallBackVerifyCreditPayPassword:(id)password OnRequest:(id)request;
-(void)insideCallBackAuthenticationCreditPayIdentifier:(id)identifier OnRequest:(id)request;
-(void)insideCallBackCommitWXCreditCardAnswer:(id)answer OnRequest:(id)request;
-(void)insideCallBackQueryWXCreditCardQuestion:(id)question OnRequest:(id)request;
-(void)insideCallBackQueryWXCreditCardDetail:(id)detail OnRequest:(id)request;
-(void)insideCallBackQueryWXCreditCardInfo:(id)info OnRequest:(id)request;
-(void)handleSetWalletTypeMsg:(id)msg;
-(void)handleEnableWalletMsg:(id)msg;
-(BOOL)checkShouldHandleId:(long long)check;
-(void)AddNewTransferMsgRecord:(id)record;
-(BOOL)IsExistTransferMsgRecord:(id)record;
-(void)AddNewHBMsgRecord:(id)record;
-(BOOL)IsExistHBMsgRecord:(id)record;
-(void)handleWCPayBalanceDetail:(id)detail;
-(void)handleYearHB:(id)hb;
-(void)OnAddMsg:(id)msg MsgWrap:(id)wrap;
-(void)OnGetNewXmlMsg:(id)msg Type:(id)type MsgWrap:(id)wrap;
-(void)handleWCPayMakeTransferMoneySuccessMsg:(id)msg;
-(void)handleWCPayMakeHBSuccessMsg:(id)msg;
-(void)handleWCPayFacingReceiveMoneyMsg:(id)msg;
-(void)handleWCPayOrderNotifyMsg:(id)msg;
-(void)handleWCPayFreezeOfflinePayMsg:(id)msg;
-(void)handleWCPayOfflinePayRefreshTokenMsg:(id)msg;
-(void)handleWCPayFreshPayCardListMsg:(id)msg;
-(void)handleWCPayOfflinePayConfirmMsg:(id)msg;
-(void)handleWCPayOfflinePaySuccessMsg:(id)msg;
-(id)getDateTimeStringFromTimeStamp:(double)timeStamp;
-(id)readChildText:(const char*)text inNode:(XmlReaderNode_t*)node;
-(void)handlePaySuccessMsg:(id)msg;
-(void)handleWCPayOfflinePayNotifyMsg:(id)msg;
-(void)HandleWCPayOrderListStatusUpdate:(id)update;
-(id)GetOfflinepayLastSelectedBankCard;
-(void)SetOfflinePayLastSelctedBankCard:(id)card;
-(unsigned long long)getPrefix;
-(id)getCardIdList;
-(void)saveTokenInfoFromDictionary:(id)dictionary;
-(BOOL)updateOfflinePayTokenIfNeed;
-(id)currentCardInfoShouldUseFromData:(id)currentCardInfo;
-(unsigned)remainOfflineTokenCount;
-(BOOL)couldGetOfflinePayCodeWithBindSerial:(id)bindSerial;
-(id)GetWCPayOfflinePayCodeStringWithBindSerial:(id)bindSerial;
-(id)getCertIdIfExist;
-(void)updateTokenAfterSeconds:(double)seconds;
-(void)ScheduleUpdateTokenWhenShitHappened;
-(void)reportRemainNum:(int)num;
-(void)GetBarCodeFromQRCode:(id)qrcode;
-(void)ConfirmOfflinePayRequest:(id)request;
-(id)GetWCPayOfflonePayQRCode:(id)code MainCardBindSerial:(id)serial Balance:(BOOL)balance;
-(id)GetWCPayOfflonePayQRCode:(id)code MainCardBindSerial:(id)serial;
-(void)_updateOfflinePayToken;
-(void)UpdateOfflinePayTokenFromScene:(unsigned)scene;
-(id)getDeviceIDStr;
-(void)CleanTokenForCurrentUser;
-(void)DeleteOfflinePayCertifcation;
-(void)UnfreezeOfflinePay:(id)pay;
-(void)ChangeOfflinePayLimitFee:(id)fee;
-(void)QueryOfflinePayUserInfo;
-(void)ClearOfflinePay;
-(void)CloseOfflinePay:(id)pay;
-(void)CreateOfflinePay:(id)pay;
-(id)getFreezeOfflinePayInfo;
-(BOOL)IsCreateOfflinePay;
-(void)ShowedOfflinePayNew;
-(BOOL)IsOfflinePayShowedNew;
-(void)QueryOfflinePayInfo:(id)info;
-(void)QueryLocalCachedOfflinePayInfo;
-(void)insideCallBarCodeFromQRCode:(id)qrcode OnRequest:(id)request;
-(void)insideCallBackOnWCPayConfirmOfflinePayResponse:(id)response Request:(id)request;
-(void)insideCallBackOnWCPayConfirmOfflinePayErrorResponse:(id)response Request:(id)request;
-(void)insideCallBackOnGetOfflinePayInfoErrorResponse:(id)response Request:(id)request;
-(void)insideCallBackOnGetOfflinePayInfoResponse:(id)response Request:(id)request;
-(void)insideCallBackGetOfflinePayToken:(id)token OnRequest:(id)request;
-(void)insideCallBackUnfreezeOfflinePay:(id)pay OnRequest:(id)request;
-(void)insideCallBackChangeOfflineLimit:(id)limit OnRequest:(id)request;
-(void)insideCallBackQueryOfflinePayUserInfo:(id)info OnRequest:(id)request;
-(void)insideCallBackCloseOfflinePay:(id)pay OnRequest:(id)request;
-(void)insideCallBackCreateOfflinePay:(id)pay OnRequest:(id)request;
-(void)GetTransferPrepayRequest:(id)request;
-(void)GetFetchPrepayRequest:(unsigned long long)request BindCardInfo:(id)info FetchAll:(BOOL)all;
-(void)GetSavePrepayRequest:(unsigned long long)request BindCardInfo:(id)info;
-(void)GetA8Key:(id)key;
-(void)GetMallPaypreRequest:(id)request;
-(void)GetCheckPayPwdVerifyCodeByToken:(id)token;
-(void)GetCheckPayPwdByToken:(id)token;
-(void)GetCheckWCPayAuthorityRequest:(id)request;
-(void)GetGenPaypreRequest:(id)request;
-(void)GetAppAuthVerifyRequest:(id)request;
-(void)insideCallBackOnVerifyPayPwdVerifyCodeResponse:(id)response OnRequest:(id)request;
-(void)insideCallBackOnVerifyPayPwdResponse:(id)response OnRequest:(id)request;
-(void)insideCallBackGetTransferPrepayResponse:(id)response OnRequest:(id)request;
-(void)insideCallBackCheckWCPayJsApiErrorResponse:(id)response Request:(id)request;
-(void)insideCallBackCheckWCPayJsApiResponse:(id)response Request:(id)request;
-(void)insideCallBackWCPaySubmitMallPrepayErrorResponse:(id)response Request:(id)request;
-(void)insideCallBackWCPaySubmitMallPrepayResponse:(id)response Request:(id)request;
-(void)insideCallBackGetA8KeyLogicErrorResponse:(id)response Request:(id)request;
-(void)insideCallBackOnGetBalanceFetchResponse:(id)response OnRequest:(id)request;
-(void)insideCallBackOnGetBalanceSaveResponse:(id)response OnRequest:(id)request;
-(void)insideCallBackGetA8KeyLogicResponse:(id)response Request:(id)request;
-(void)insideCallBackWCPayGetAppAuthUrlResponse:(id)response Request:(id)request;
-(void)insideCallBackWCPayGetAppAuthUrlErrorResponse:(id)response Request:(id)request;
-(void)insideCallBackWCPayGenPrepayResponse:(id)response Request:(id)request;
-(void)insideCallBackWCPayGenPrepayErrorResponse:(id)response Request:(id)request;
-(void)tryToUpdateWCSnsPayFreeInfo:(id)updateWCSnsPayFreeInfo;
-(unsigned long)getPayScene:(id)scene;
-(void)AuthenticationResetBalancePayVerifySMS:(id)sms;
-(void)AuthenticationResetBalanceTelPay:(id)pay;
-(void)GetWCPayQuitQRPay:(id)pay UUID:(id)uuid;
-(void)PaySubscribeServiceApp:(id)app;
-(void)AuthenticationPayVerifyBind:(id)bind;
-(void)GetOrderDetailInfoAfterPaidError:(id)error PayScene:(unsigned long)scene;
-(void)SetWCPayPasswordInPay:(id)pay;
-(void)AuthenticationPayVerifySMS:(id)sms;
-(void)AuthenticationPay:(id)pay CMDID:(unsigned long)cmdid;
-(void)AuthenticationPay:(id)pay;
-(void)insideCallBackAuthenticationResetBalanceTelPayVerifySMS:(id)sms OnRequest:(id)request;
-(void)insideCallBackAuthenticationResetBalanceTelPay:(id)pay OnRequest:(id)request;
-(void)insideCallBackGetOrderDetailInfoAfterPaidError:(id)error OnRequest:(id)request;
-(void)insideCallBackOnAuthenticationPayVerifyBind:(id)bind OnRequest:(id)request;
-(void)insideCallBackSetWCPayPasswordInPay:(id)pay OnRequest:(id)request;
-(void)insideCallBackAuthenticationPayVerifySMS:(id)sms OnRequest:(id)request;
-(void)insideCallBackAuthenticationPay:(id)pay OnRequest:(id)request;
-(void)SetWCPayPasswordInReset:(id)reset RepeatPassword:(id)password PayKey:(id)key VerifySMS:(id)sms isOverseasBankCard:(BOOL)card;
-(void)ResetWCPayPasswordVerifySMS:(id)sms RetKey:(id)key;
-(void)ResetWCPayPasswordVerifyCard:(id)card;
-(void)ModifyWCPayPassword:(id)password NewWCPayPassword:(id)password2 RepeatWCPayPassword:(id)password3;
-(void)insideCallBackResetWCPayPasswordVerifySMS:(id)sms OnRequest:(id)request;
-(void)insideCallBackResetWCPayPasswordVerifyCard:(id)card OnRequest:(id)request;
-(void)insideCallBackModifyWCPayPassword:(id)password OnRequest:(id)request;
-(BOOL)SendC2CMessageForSecure:(id)secure TemplateID:(id)anId SenderTitle:(id)title ReceiverTitle:(id)title4 Description:(id)description SenderDesc:(id)desc ReceiverDesc:(id)desc7 JumpUrl:(id)url SceneID:(unsigned long)anId9;
-(void)insideCallBackOnSendC2CSecureMessageResponse:(id)response OnRequest:(id)request;
-(void)CancelTransferQRPay:(id)pay ReceiverUserName:(id)name;
-(void)GetFixedAmountQRCode:(id)code;
-(void)GetTransferUserName:(id)name;
-(void)DeleteTransferUser:(id)user;
-(void)SetTransferedUser:(id)user;
-(id)GetTransferedUserList;
-(void)RetrySendTransferMessage:(id)message;
-(void)RefuseTransferMoney:(id)money;
-(void)ConfirmTransferMoney:(id)money;
-(void)CheckTransferMoneyStatus:(id)status;
-(void)insideCallBackOnGetFixedAmountQRCodeResponse:(id)response OnRequest:(id)request;
-(void)insideCallBackOnGetTransferUserNameResponse:(id)response OnRequest:(id)request;
-(void)insideCallBackOnRetrySendTransferMessageResponse:(id)response OnRequest:(id)request;
-(void)insideCallBackOnRefuseTransferMoneyResponse:(id)response OnRequest:(id)request;
-(void)insideCallBackOnConfirmTransferMoneyResponse:(id)response OnRequest:(id)request;
-(void)insideCallBackOnCheckTransferMoneyStatusResponse:(id)response OnRequest:(id)request;
-(void)tryToUpdateWCSnsPayFreeInfo:(id)updateWCSnsPayFreeInfo;
-(unsigned long)getPayScene:(id)scene;
-(void)SnsAuthenticationPay:(id)pay CMDID:(unsigned long)cmdid;
-(void)SnsAuthenticationPay:(id)pay;
-(void)GetSnsWCPayBusinessRequest:(id)request WXInnerUseDic:(id)dic CMDID:(unsigned long)cmdid OutputType:(unsigned long)type;
-(void)insideCallBackSnsFreePasswdAuthen:(id)authen OnRequest:(id)request;
@end

