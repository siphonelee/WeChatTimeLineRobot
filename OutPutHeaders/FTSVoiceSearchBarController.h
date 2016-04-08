/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IFTSMessageMgrExt.h"
#import "MMUIViewControllerDelegate.h"
#import "IFTSFavMgrExt.h"
#import "IFTSOnlineSearchMgr.h"
#import "IFTSMemorySearchMgrExt.h"
#import "FTSWebSearchViewDelegate.h"
#import "WCCommentDetailViewControllerFBDelegate.h"
#import "FTSContactCellDelegate.h"
#import "IFTSContactMgrExt.h"
#import "FTSAddressBookFriendCellDelegate.h"
#import "contactVerifyLogicDelegate.h"
#import "FTSResultViewDelegate.h"
#import "MFMessageComposeViewControllerDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "WeChat-Structs.h"
#import "MMPatternLockLogicDelegate.h"
#import "MMVoiceSearchBar.h"
#import "ContactInfoViewControllerDelegate.h"
#import "WCActionSheetDelegate.h"
#import "contactInfoDelegate.h"

@class AttributeLabel, NSString, AddressBookFriend, CContactVerifyLogic, WCTimeLineFooterView, ContactInfoViewController, UIView, FTSWebSearchController, NSMutableArray, CContact;

@interface FTSVoiceSearchBarController : MMVoiceSearchBar <FTSWebSearchViewDelegate, FTSContactCellDelegate, FTSAddressBookFriendCellDelegate, contactInfoDelegate, ContactInfoViewControllerDelegate, PBMessageObserverDelegate, contactVerifyLogicDelegate, FTSResultViewDelegate, IFTSContactMgrExt, IFTSMessageMgrExt, IFTSOnlineSearchMgr, IFTSFavMgrExt, IFTSMemorySearchMgrExt, WCCommentDetailViewControllerFBDelegate, MFMessageComposeViewControllerDelegate, WCActionSheetDelegate, MMUIViewControllerDelegate, MMPatternLockLogicDelegate> {
	map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > > _mapSearchSectionType;
	AddressBookFriend* _curAddressBookFriend;
	ContactInfoViewController* _curAddressBookFriendView;
	CContact* _curContact;
	CContactVerifyLogic* _contactVerifyLogic;
	int _findType;
	UIView* _grayBlurView;
	int _searchScene;
	AttributeLabel* _emptyTipLabel;
	UIView* _emptyFooterView;
	WCTimeLineFooterView* _loadingFooterView;
	NSString* _newestSearchText;
	NSMutableArray* _arrSnsCellInfo;
	NSString* _snsCellInfoTag;
	UIView* _weakFTSWebSearchViewCell;
	CGRect _currentKeyboardRect;
	BOOL _hasShowWebSearchCellDuringOneSearch;
	BOOL _hasClickAnyResultDuringOneSearch;
	FTSWebSearchController* _webSearchController;
	int _currentFeatureId;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int currentFeatureId;
@property(readonly, assign, nonatomic) NSString* newestSearchText;
@property(retain, nonatomic) UIView* grayBlurView;
@property(assign, nonatomic) int searchScene;
-(id).cxx_construct;
-(void).cxx_destruct;
-(unsigned long)searchFavCount:(id)count;
-(BOOL)searchMatchFavItems:(id)items;
-(BOOL)searchMatchMemoryMsg:(id)msg;
-(BOOL)searchMatchIndexMsg:(id)msg;
-(unsigned long)searchMsgCount:(id)count;
-(BOOL)searchMatchMsg:(id)msg;
-(unsigned long)searchGameCount:(id)count;
-(BOOL)searchMatchGame:(id)game;
-(unsigned long)searchFeatureCount:(id)count;
-(BOOL)searchMatchFeature:(id)feature;
-(unsigned long)searchBrandContactCount:(id)count;
-(BOOL)searchMatchBrandContact:(id)contact;
-(unsigned long)searchAddressBookCount:(id)count;
-(BOOL)searchMatchAddressBookContact:(id)contact;
-(unsigned long)searchGroupCount:(id)count;
-(BOOL)searchMatchGroupContact:(id)contact;
-(unsigned long)searchNormalContactCount:(id)count;
-(BOOL)searchMatchNormalContact:(id)contact;
-(unsigned long)searchTopHitCount:(id)count;
-(BOOL)searchMatchTopHit:(id)hit;
-(BOOL)searchFavDone:(id)done;
-(BOOL)searchMessageDone:(id)done;
-(void)doMonitorReport:(id)report;
-(void)tryDoMonitorReport:(id)report;
-(id)getEnteranceViewContoller;
-(void)onPatternLockLogicOperateSuccess;
-(id)getViewController;
-(void)onDeleteData;
-(void)onRestartUpload;
-(id)getSnsCellInfo:(unsigned long)info;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(id)mainTableView;
-(void)onWebSearchViewDidShow;
-(void)onWebSearchViewDidPop;
-(void)onWebSearchViewWillPop;
-(void)onWebSearchViewReturn:(BOOL)aReturn;
-(void)onFTSDetailViewReturn:(BOOL)aReturn;
-(void)asyncCancelSearchDelay:(double)delay;
-(void)asyncCancelSearch;
-(void)newMessageFromContactInfo:(id)contactInfo;
-(void)addToContactsFromContactInfo:(id)contactInfo;
-(void)onUpdateContact:(id)contact;
-(void)onRemoveContact;
-(void)onAddContact;
-(void)onFTSSelectAddressBookFriend:(id)aFriend;
-(void)selectAddressBookFriend:(id)aFriend;
-(void)operateAddressBookFriend:(id)aFriend;
-(id)getBottomTableView:(id)view;
-(void)startVerticalWebSearch:(unsigned long long)search;
-(void)startWebSearch:(id)search;
-(void)openTimeline:(id)timeline;
-(void)openPOI:(id)poi;
-(void)openBrandFeeds:(id)feeds;
-(void)onlineSearch:(unsigned long long)search;
-(void)openBrandContactInfo:(id)info;
-(void)searchFavItems;
-(void)selectFavSearchItem:(id)item;
-(void)searchMessage;
-(void)selectMsgItems:(id)items;
-(void)selectMsgItem:(id)item;
-(void)addContact:(id)contact;
-(void)verifyContact:(id)contact opCode:(unsigned long)code;
-(void)contactVerifyOk:(id)ok opCode:(unsigned long)code;
-(void)addContactInternal;
-(void)sendSMS:(id)sms arrMobile:(id)mobile;
-(void)sendSMSInvite:(id)invite;
-(void)messageComposeViewController:(id)controller didFinishWithResult:(int)result;
-(void)showAlert:(id)alert;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)showWCGameWebViewWithUrl:(id)url title:(id)title;
-(void)searchGameItems;
-(void)selectWCGameItem:(id)item;
-(void)selectFeatureItem:(id)item;
-(void)openWeSportFeature;
-(void)openChatMigrationVC;
-(void)openBalanceFeature;
-(void)openOfflinePayFeature;
-(void)openFacingRecvMoneyFeature;
-(void)openWXHongBao;
-(void)openWCPayView;
-(void)openFavoriteView;
-(void)openEmoticonStoreView;
-(void)openSyncPhoneContactsView;
-(void)openQQOfflineMsgView;
-(void)openMessageContentViewForFileHelper;
-(void)openMessageContentViewForFeature:(int)feature;
-(void)openContactInfoForFeature:(int)feature;
-(void)openGameCenter:(id)center;
-(void)openCameraScan;
-(void)openAlbum;
-(void)openShake;
-(void)openLBS;
-(void)openFloatBottle;
-(void)openMobileRecharge;
-(BOOL)isPluginOpen:(int)open;
-(void)jumpFeatureUrl:(id)url;
-(void)searchMoreFollowedBrandContact;
-(void)searchMoreContact:(int)contact;
-(void)onFTSChatWithContact:(id)contact;
-(void)openContactInfo:(id)info fromSearchContact:(BOOL)searchContact;
-(void)openContactInfo:(id)info;
-(BOOL)isOpenPluginContactInfoView:(id)view;
-(void)openEnterpriseWebSubBrand:(id)brand;
-(void)openEnterpriseChatSessionListView:(id)view;
-(void)openEnterpriseBrandSessionListViewController:(id)controller;
-(void)openPluginContactInfoView:(id)view;
-(void)openMessageContentView:(id)view;
-(void)openBrandSessionView;
-(void)addContactFriendScene:(id)scene;
-(void)onlineSearchContact;
-(id)filterUserName:(id)name;
-(void)onFTSHomePageResultChanged;
-(void)onFTSHomePageFavResultChanged;
-(void)onFTSHomePageMessageResultChanged;
-(void)tryRefreshSearchResult;
-(void)onFTSMemorySearchResultChanged:(BOOL)changed;
-(void)onFTSContactSearchResultChanged:(BOOL)changed;
-(void)onClickSearchButton:(id)button;
-(void)handleTextDidChange:(id)handleText;
-(void)scrollToTop;
-(void)delaySearch:(id)search slowMode:(BOOL)mode;
-(void)delaySearchImp:(id)imp;
-(void)cancelFTSSearch;
-(void)doFTSSearch:(id)search;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)tableView:(id)view didEndDisplayingCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(unsigned long)getLogRowBeforeSectionType:(unsigned)type queryText:(id)text;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)setLoadingStatus;
-(void)resetSearchSectionType;
-(void)resetSearchTableViewSize;
-(void)searchBarCancelButtonClicked:(id)clicked;
-(void)removeWebSearchView;
-(void)clearAllResource;
-(void)updateWebSearchCellVisualbility;
-(void)keyboardDidHide:(id)keyboard;
-(void)keyboardDidShow:(id)keyboard;
-(void)clearSnsCellInfo;
-(id)getDetailView;
-(void)handleRotateEvent;
-(void)dealloc;
-(id)initWithContentsController:(id)contentsController withParentViewController:(id)parentViewController withSpecies:(int)species withUseDefaultDisplayController:(BOOL)useDefaultDisplayController hasIndexBar:(BOOL)bar;
-(id)initWithContentsController:(id)contentsController withParentViewController:(id)parentViewController withSpecies:(int)species withUseDefaultDisplayController:(BOOL)useDefaultDisplayController;
-(void)initFTSSearchBar;
-(id)sectionType2String:(unsigned long)string;
-(id)getGeneralBackgroundColor;
@end

