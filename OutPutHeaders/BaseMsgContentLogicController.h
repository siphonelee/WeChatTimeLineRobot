/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMNewMultiSelectContactsViewControllerDelegate.h"
#import "ILinkEventExt.h"
#import "WCActionSheetDelegate.h"
#import "MMPickLocationViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "ITrackPresentExt.h"
#import "ITrackRoomMgrExt.h"
#import "contactInfoDelegate.h"
#import "IWXTalkieExt.h"
#import "IMsgRevokeExt.h"
#import "BaseMsgContentInBackgroundThreadDelgate.h"
#import "ImageControllerDelegate.h"
#import "TypingControllerDelgate.h"
#import "UrlControllerDelegate.h"
#import "RecordControllerDelegate.h"
#import "IContactMgrExt.h"
#import "PlayControllerDelegate.h"
#import "BaseMsgContentDelgate.h"
#import "AutoplayController.h"
#import "IMsgExt.h"
#import "ShakeControllerDelegate.h"
#import "ImplicitAnimationControllerDelegate.h"
#import "MMInputToolViewCustomizationDelegate.h"
#import "MultiSelectContollerDelegate.h"
#import "FavForwardLogicDelegate.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "MyFavoritesListViewControllerDelegate.h"
#import "MessageObserverDelegate.h"
#import "MsgDelegate.h"
#import "ShareFriendOnChatDelegate.h"
#import "SessionSelectControllerDelegate.h"
#import "ShareMessageConfirmLogicHelperDelegate.h"
#import "MMObject.h"
#import "WeChat-Structs.h"
#import "IMMNewSessionMgrExt.h"
#import "ViewLocationDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "contactVerifyLogicDelegate.h"
#import "IVOIPUILogicMgrExt.h"
#import "IWXTalkPresentExt.h"
#import "WCCardPackageViewControllerDelegate.h"

@class ImplicitAnimationController, MMPickLocationViewController, ShareMessageConfirmLogicHelper, UrlController, ShareDataToOpenSDKController, CContactVerifyLogic, UINavigationController, BaseMsgContentViewController, NSString, PlayingController, CBaseContact, CContact, NSMutableDictionary, RecordController, ImageController, ShareFriendOnChatLogicController, CMessageWrap, FavForwardLogicController, MultiSelectController, ShakeController, MyFavoritesListViewController, GameController, MMUIViewController, TypingController, AutoplayController;

@interface BaseMsgContentLogicController : MMObject <MMNewMultiSelectContactsViewControllerDelegate, BaseMsgContentDelgate, BaseMsgContentInBackgroundThreadDelgate, WCActionSheetDelegate, ImageControllerDelegate, contactInfoDelegate, UINavigationControllerDelegate, MessageObserverDelegate, TypingControllerDelgate, MsgDelegate, IMsgExt, ILinkEventExt, contactVerifyLogicDelegate, UrlControllerDelegate, IContactMgrExt, IMMNewSessionMgrExt, RecordControllerDelegate, PlayControllerDelegate, AutoplayController, ShakeControllerDelegate, WCActionSheetDelegate, ShareFriendOnChatDelegate, MFMailComposeViewControllerDelegate, MMPickLocationViewControllerDelegate, ImplicitAnimationControllerDelegate, IVOIPUILogicMgrExt, MMInputToolViewCustomizationDelegate, IWXTalkPresentExt, IWXTalkieExt, ITrackPresentExt, ITrackRoomMgrExt, UIAlertViewDelegate, MultiSelectContollerDelegate, ViewLocationDelegate, MyFavoritesListViewControllerDelegate, IMsgRevokeExt, FavForwardLogicDelegate, WCCardPackageViewControllerDelegate, ShareMessageConfirmLogicHelperDelegate, SessionSelectControllerDelegate> {
	BaseMsgContentViewController* m_viewController;
	CBaseContact* m_contact;
	ImageController* m_imageController;
	UrlController* m_urlController;
	RecordController* m_recordController;
	PlayingController* m_playingController;
	AutoplayController* m_autoplayController;
	TypingController* m_typingController;
	GameController* m_GameController;
	ShakeController* m_shakeController;
	ShareFriendOnChatLogicController* m_shareCardController;
	MMPickLocationViewController* m_pickLocationController;
	ImplicitAnimationController* m_implicitAnimationController;
	CContactVerifyLogic* m_contactVerifyLogic;
	MultiSelectController* m_multiSelectController;
	MyFavoritesListViewController* m_myFavListController;
	MMUIViewController* m_cardPkgViewController;
	ShareDataToOpenSDKController* m_shareOpenSDKController;
	unsigned long m_uiDownLeftCount;
	unsigned long m_uiSearchedResultNodeLocalID;
	unsigned m_uiDownLastCreateTime;
	unsigned long m_uiLastCreateTime;
	unsigned long m_uiLastSequence;
	unsigned long m_uiLeftCount;
	unsigned long m_uiLeftUnreadCount;
	BOOL m_bInContacts;
	BOOL m_bAddUsr;
	CMessageWrap* m_msgResend;
	UINavigationController* m_navigationController;
	long m_pushTime;
	unsigned long m_uiSubviewShowStatus;
	int m_eViewDisshowStatus;
	BOOL m_bIsEditing;
	FavForwardLogicController* m_favForwardLogic;
	NSString* m_redirectToEmoticonPid;
	id multiMsgCompleteHandler;
	NSMutableDictionary* m_dicExtraInfo;
	CContact* m_selectContact;
	BOOL m_hasUserInteract;
	NSMutableDictionary* m_userInteractInfo;
	ShareMessageConfirmLogicHelper* m_shareMessageHelper;
	BOOL m_bIsInContentView;
	int m_uiFromScene;
	BOOL m_bHasUnreadMsg;
	int m_searchScene;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int m_searchScene;
@property(retain, nonatomic) NSMutableDictionary* m_dicExtraInfo;
@property(assign, nonatomic) long m_pushTime;
@property(retain, nonatomic) MMPickLocationViewController* m_pickLocationController;
@property(assign, nonatomic) __weak UINavigationController* navigationController;
@property(retain, nonatomic) CMessageWrap* m_msgResend;
@property(retain, nonatomic) CBaseContact* m_contact;
@property(retain, nonatomic) NSString* m_redirectToEmoticonPid;
@property(assign, nonatomic) BOOL isPeekPreview;
-(void).cxx_destruct;
-(void)markRecentUseContactForSearch;
-(void)markInteractionLogic:(id)logic;
-(void)OnSelectSession:(id)session SessionSelectController:(id)controller;
-(void)showAlert:(id)alert;
-(void)typingStatusSent;
-(void)typingStatusReceived;
-(void)OnSelectSessionCancel:(id)cancel;
-(id)getFavForawrdViewController;
-(void)modMsgWithoutNotify:(id)notify;
-(void)UnRegister;
-(void)Register;
-(void)WillBePushedLogicController;
-(void)onWillPushFromNavigationController;
-(void)onWillPopFromNavigationController;
-(void)onWillEnterRoom;
-(void)onPopFromNavigationController;
-(void)unsetSession;
-(void)OnAddFriend:(id)aFriend MsgWrap:(id)wrap OpCode:(unsigned long)code;
-(id)getBackgroundView;
-(void)dealloc;
-(void)onVideoVoipViewDisappear;
-(void)onVideoVoipViewDidAppear:(id)onVideoVoipView;
-(void)setExtraInfo:(id)info;
-(id)getExtraInfo;
-(void)OnOpenTrackRoom:(id)room;
-(void)OnTrackRoomMemberChange:(id)change withNewMemberList:(id)newMemberList;
-(void)ViewWillDisappear;
-(void)ViewWillAppear;
-(void)ViewDidAppear;
-(void)onSessionTotalUnreadCountChange:(unsigned long)change;
-(void)CameraControllerDidTakeVideo:(id)cameraController;
-(void)onModifyContact:(id)contact;
-(void)MessageReturn:(unsigned long)aReturn MessageInfo:(id)info Event:(unsigned long)event;
-(void)contactInfoReturn;
-(void)newMessageFromContactInfo:(id)contactInfo;
-(void)addToContactsFromContactInfo:(id)contactInfo;
-(void)onFinishedShareMyFriend:(BOOL)aFriend;
-(id)getMyFriendContact;
-(id)getShareMyFriendParentViewController;
-(void)onAddToContacts:(id)contacts;
-(void)sendAddContactRequestTo:(id)to;
-(void)onEditMessage:(id)message;
-(void)updateTypingTitle:(id)title;
-(BOOL)CanSendMultiImage;
-(BOOL)CanSendOriginalImage;
-(void)processImageControllerDidCancel:(unsigned)processImageController;
-(void)processInsertedAsset:(id)asset;
-(void)processInsertedImage:(id)image withData:(id)data ImageInfo:(id)info;
-(void)processInsertedImage:(id)image ImageInfo:(id)info;
-(void)DidEnterBackground:(id);
-(BOOL)isShowHeadImage:(id)image;
-(BOOL)CanRemoteRecord;
-(id)GetContactName;
-(CGPoint)CheckVoiceBtnPressLocation;
-(unsigned long)CheckVoiceBtnState;
-(void)SetButtonHighlighted:(BOOL)highlighted;
-(void)SetPeakPower:(float)power;
-(void)ShowCountingTips:(int)tips;
-(void)ShowTooLongTips;
-(void)ShowTooShortTips;
-(void)SetVoiceEnabled:(BOOL)enabled;
-(void)HideRecordTips;
-(void)ShowPreparing;
-(void)ShowRecording;
-(void)onRecordModMsg:(id)msg;
-(void)onRecordAddMsg:(id)msg;
-(void)onForwardMessageOK;
-(id)getCurrentViewController;
-(void)onMultiOprationComplete;
-(void)setMultiSelectModeOnComplete:(id)complete;
-(void)onMultiMsgSelected:(id)selected Username:(id)username;
-(void)onMultiMsgDelete:(id)aDelete;
-(void)sendMultiMsgBySystemMail:(id)mail;
-(void)sendMultiMsgToBrandContact:(id)brandContact To:(id)to;
-(void)sendMultiMsgByMail:(id)mail;
-(void)sendMultiMsgToFriend:(id)aFriend;
-(void)addMultiMsgToMyFav:(id)myFav;
-(void)toBeEditing:(BOOL)beEditing;
-(id)GetRightBarBtn;
-(BOOL)hasDownMoreMsg;
-(BOOL)hasMoreMsg;
-(void)addGameNode:(id)node;
-(void)StartPlayVideo:(id)video;
-(void)StartDownloadShortVideo:(id)video;
-(void)StartDownloadVideo:(id)video;
-(void)StartUploadVideo:(id)video;
-(void)StopDownloadVideo:(id)video;
-(void)StopUploadVideo:(id)video;
-(BOOL)canShowChatRoomInfo;
-(void)resetWithMessageWrap:(id)messageWrap;
-(void)didSelectSearchResultForMessageWrap:(id)messageWrap;
-(id)QueryMsgText:(id)text FromID:(unsigned long)anId FromCreateTime:(unsigned long)createTime Limit:(unsigned long)limit LeftCount:(unsigned*)count;
-(unsigned long)getSearchedMsgLocalID;
-(BOOL)shouldSearchedMsgHightlight;
-(BOOL)ShouldShowSearchedAnyMsg;
-(BOOL)ShouldShowSearchResultMessageArray;
-(BOOL)ShouldShowSearchCompleteRightBarButton;
-(BOOL)ShouldShowSearchBar;
-(id)GetRightBarButtonTitle;
-(id)GetRightBarButtonImageName;
-(void)StateChanged;
-(void)StopPlaying:(id)playing;
-(void)StartPlaying:(id)playing FromTouch:(BOOL)touch;
-(void)SetMsgPlayed:(id)played;
-(void)StartPlayMessage:(id)message;
-(BOOL)IsRecording;
-(void)CancelRecording;
-(void)StopRecording;
-(void)StartRecording;
-(id)genMsgSource;
-(id)GetContact;
-(void)onTextChange:(id)change selectedRange:(NSRange)range;
-(id)GetTitleImage;
-(void)onSaveDraft;
-(void)onBackFromNavigationController;
-(void)QuicklySaveDraft:(id)draft;
-(void)SaveContentAndState;
-(void)ResendMessage:(id)message;
-(BOOL)EnabledOfHeaderButtonAtIndex:(unsigned long)index;
-(id)ImageOfHeaderButtonAtIndex:(unsigned long)index;
-(id)TitleOfHeaderButtonsAtIndex:(unsigned long)index;
-(unsigned long)NumberOfHeaderButtons;
-(void)VoiceModeClicked;
-(void)ViewDidInit;
-(void)ViewWillInit;
-(id)GetUsrTitleCPKey;
-(BOOL)isUsrTitleUnsafe;
-(id)GetUsrTitleTail;
-(id)GetUsrTitleFront;
-(id)GetUsrTitle;
-(void)HasCustomInputToolViewAndDontNeedShowToolView:(BOOL*)view;
-(void)OpenEmoticonToolView:(id)view;
-(void)CustomToolViewEX:(id)ex;
-(BOOL)shouldPreventViewcontrollerAutorotate;
-(id)nameForHeadImageLongPressed:(id)headImageLongPressed;
-(BOOL)canReloadViewIfMemoryWarning;
-(BOOL)onLoadDownMoreMessage;
-(id)onLoadMoreMessage;
-(void)onVideoOperation;
-(void)selectVideo;
-(void)onSendCaptrueImage:(id)image;
-(void)onOpenCameraController;
-(void)onOpenMediaBrowser;
-(void)DelMsgWithMsgList:(id)msgList DelAll:(BOOL)all;
-(id)GetDownMessageArray;
-(void)clearDownLeftCount;
-(void)clearLastCreateTime;
-(void)setLastCreateTime:(unsigned)time;
-(id)GetMessageArray;
-(id)GetSearchedResultContentMessageArray;
-(id)GetDownMsgByOneIndex:(id)index FromID:(unsigned long)anId Limit:(unsigned long)limit LeftCount:(unsigned*)count LeftUnreadCount:(unsigned*)count5;
-(id)GetDownMsgByDoubleIndex:(id)index FromID:(unsigned long)anId Limit:(unsigned long)limit LeftCount:(unsigned*)count LeftUnreadCount:(unsigned*)count5;
-(unsigned long)getMsgCountToLoad;
-(void)ShowReader:(id)reader;
-(void)ViewLocation:(id)location;
-(void)onShareLocationMsgToOpenSDK:(id)openSDK ViewController:(id)controller;
-(void)onSendLocationToFriend:(id)aFriend ViewController:(id)controller;
-(id)onGetRightBarButton;
-(void)onCancelSeletctedLocation;
-(void)onFinishSelectedLocation;
-(void)OnSendMessageFail:(id)fail WithError:(int)error;
-(void)OnSendMessageOK:(id)ok;
-(void)onCardPackageViewSelectCardItem:(id)item;
-(void)onCardPackageViewCancelSelectCard;
-(void)onSelectedFavoritesItem:(id)item;
-(void)exitTracking;
-(void)openTrackRoom:(id)room;
-(void)onOpenServiceApp:(id)app;
-(void)onOpenServiceAppListController;
-(void)onRedEnvelopesControlLogic;
-(void)onTransferMoneyControlLogic;
-(void)onOpenMyFavoritesListController;
-(void)onOpenMyCardPkgViewController;
-(void)SelectLocation:(BOOL)location;
-(void)AddLocationMessageWithLocation:(id)location;
-(void)DeleteAtUserList;
-(void)AddAtUser:(id)user;
-(void)RecommenWego;
-(void)OpenNativeUrl:(id)url;
-(void)OpenUrl:(id)url;
-(id)getPreviewForLink:(id)link;
-(void)OnTagLink:(id)link messageWrap:(id)wrap;
-(void)onVideoVoipInvite;
-(void)onVoipInvite;
-(void)ShareCard;
-(void)onMultiTalkButtonClick;
-(void)SendEmoticonMessage:(id)message;
-(void)SendEmojiArtMessage:(id)message;
-(void)SendTextMessage:(id)message;
-(void)SendImageMessage:(id)message withData:(id)data ImageInfo:(id)info;
-(void)SendImageMessageByMMAsset:(id)asset;
-(void)SendMessageWrap:(id)wrap;
-(id)GetMessageFromImage:(id)image;
-(void)SendImageMessage:(id)message ImageInfo:(id)info;
-(void)mailComposeController:(id)controller didFinishWithResult:(int)result error:(id)error;
-(void)onShareAppMsg:(id)msg;
-(void)setNeedUpdateTitle:(BOOL*)title;
-(BOOL)ShouldShowMultiSelectMode;
-(BOOL)CanShowSight;
-(BOOL)CanShowBanner;
-(BOOL)CanOpenServiceAppList;
-(BOOL)CanSelectMyFavoritesItemForSendingMsg;
-(BOOL)CanRotateOrientation;
-(BOOL)CanWXTalk;
-(BOOL)CanSendEmoticonMessage;
-(BOOL)CanAddApp;
-(BOOL)CanOpenCamera;
-(BOOL)CanLongPressHeadImage;
-(BOOL)CanSend3rdMsg;
-(BOOL)CanSendVoipMsg;
-(BOOL)CanOpenTrackRoom;
-(BOOL)CanSendLocationMsg;
-(BOOL)CanSendVideoMsg;
-(BOOL)CanSendVoiceMsg;
-(BOOL)CanSendImageMsg:(id)msg;
-(BOOL)CanSendTextMsg:(id)msg;
-(void)OpenChatView:(id)view;
-(void)OpenContactInfo:(id)info;
-(void)OpenDetailInfo;
-(BOOL)HasCustomToolBar;
-(void)contactVerifyOk:(id)ok opCode:(unsigned long)code;
-(void)verifyContactByUsrNameWithOpCode:(unsigned long)opCode userName:(id)name;
-(void)OnVideoPlayEnd:(id)end isForceStop:(BOOL)stop;
-(void)onEndPlay:(unsigned long)play isForceStop:(BOOL)stop;
-(void)onForceEarpieceModeChanged;
-(BOOL)isShakeEnabled;
-(void)PlayNodeAtId:(unsigned long)anId;
-(id)GetMessagesNodeArray;
-(BOOL)canAutoplayWhenMessageDownloaded;
-(id)formImageMsgByMMAsset:(id)asset toUserName:(id)userName;
-(id)FormImageMsg:(id)msg withImage:(id)image withData:(id)data withImageInfo:(id)imageInfo;
-(id)FormImageMsg:(id)msg withImage:(id)image withData:(id)data;
-(id)FormImageMsg:(id)msg withImage:(id)image;
-(id)FormTextMsg:(id)msg withText:(id)text;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)OnMsgRevoked:(id)revoked n64MsgId:(long long)anId SysMsg:(id)msg;
-(void)OnRevokeMsg:(id)msg MsgWrap:(id)wrap ResultCode:(unsigned long)code ResultMsg:(id)msg4 EducationMsg:(id)msg5;
-(void)viewDidRotateToOrientation:(int)view;
-(void)viewWillRotateToOrientation:(int)view;
-(void)shareDataToOpenSDK:(id)openSDK;
-(void)RevokeMsg:(id)msg;
-(void)SetReadWithMessageWrap:(id)messageWrap isNotifyModMsg:(BOOL)msg;
-(void)OnDelMsg:(id)msg DelAll:(BOOL)all;
-(void)performDeleteMsg:(id)msg;
-(void)OnDelMsg:(id)msg MsgWrap:(id)wrap;
-(void)OnUpdateVideoStatus:(id)status MsgWrap:(id)wrap;
-(void)OnModMsg:(id)msg MsgWrap:(id)wrap;
-(void)OnAddMsg:(id)msg MsgWrap:(id)wrap;
-(void)DidAddMsg:(id);
-(void)AddEmoticonMsg:(id)msg MsgWrap:(id)wrap;
-(void)ResendMsg:(id)msg MsgWrap:(id)wrap;
-(void)ModMsg:(id)msg MsgWrap:(id)wrap;
-(void)AddMsg:(id)msg MsgWrap:(id)wrap;
-(void)DelMsg:(id)msg MsgList:(id)list DelAll:(BOOL)all;
-(void)ClearUnRead:(id)read FromID:(unsigned long)anId ToID:(unsigned long)anId3;
-(id)GetDownMsg:(id)msg FromID:(unsigned long)anId Limit:(unsigned long)limit LeftCount:(unsigned*)count LeftUnreadCount:(unsigned*)count5;
-(id)GetMsg:(id)msg FromID:(unsigned long)anId Limit:(unsigned long)limit LeftCount:(unsigned*)count LeftUnreadCount:(unsigned*)count5;
-(void)onMultiSelectContactsEndWithReportSelectedCount:(unsigned)reportSelectedCount hasReachLimit:(BOOL)limit clickCount:(unsigned)count;
-(void)onMultiSelectContactsDidFinishSelect:(id)onMultiSelectContacts tmpDisplayView:(id)view;
-(void)onMultiSelectContactsDidFinishSelect:(id)onMultiSelectContacts;
-(void)Reset;
-(id)init;
-(id)initWithLocalID:(unsigned long)localID CreateTime:(unsigned long)time ContentViewDisshowStatus:(int)status;
-(id)initWithLocalID:(unsigned long)localID CreateTime:(unsigned long)time ContentViewDisshowStatus:(int)status fromScene:(int)scene;
-(id)getNavigationController;
-(id)getViewController;
-(id)getMsgContentViewController;
-(id)GetMessageArrayFrom:(unsigned long)from createTime:(unsigned)time;
-(void)didShowFirstUnReadMessage;
-(id)GetFirstUnReadMessage;
-(unsigned long)GetFirstLocalID;
-(unsigned long)GetLastLocalID;
-(void)initViewController;
-(void)initProperties;
-(void)initPropertiesWithLocalID:(unsigned long)localID CreateTime:(unsigned long)time;
-(void)resetController;
-(void)initControllers;
-(id)previewActionItems;
-(void)OnMyselfCloseMode:(id)mode;
-(void)OnRoomMemberChange:(id)change withNewMemberList:(id)newMemberList;
-(BOOL)isNeedCached;
-(void)RestoreStatusAndRegisterFromCacheStatus;
-(void)ClearStatusAndUnRegisterForCacheStatus;
-(void)cancelNodeViewPerformSelectors;
@end

