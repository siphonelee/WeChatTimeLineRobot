/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCActionSheetDelegate.h"
#import "SessionSelectControllerDelegate.h"
#import "WCCardDataControllerDelegate.h"
#import "WeChat-Structs.h"
#import "UIAlertViewDelegate.h"
#import "MMUIViewController.h"
#import "UISearchBarDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDelegate.h"
#import "IWCCardPkgExt.h"

@class WCCardPackageTableView, WCCardTitleView, UIView, NSString, UIButton, UIActivityIndicatorView, MMUISearchBar, UIScrollView, WCCardDataController, UISegmentedControl;
@protocol WCCardPackageViewControllerDelegate;

@interface WCCardPackageViewController : MMUIViewController <IWCCardPkgExt, WCCardDataControllerDelegate, PBMessageObserverDelegate, UIAlertViewDelegate, WCActionSheetDelegate, SessionSelectControllerDelegate, UISearchBarDelegate, UISearchDisplayDelegate, UITableViewDelegate, IWCCardPkgExt> {
	UIView* _navHeaderView;
	WCCardTitleView* _titleView;
	float _headViewHeight;
	UIButton* _messageTipView;
	UIButton* _messageTipViewForShare;
	WCCardDataController* _myCardDataController;
	WCCardPackageTableView* _myCardTableView;
	UIView* _myCardFooterView;
	UIScrollView* _myCardLoadingView;
	UIActivityIndicatorView* _mgCardActivityView;
	UIButton* _myCardHeadView;
	unsigned long _myCardMinUpdateTime;
	MMUISearchBar* _searchBar;
	UISegmentedControl* _segmentedControl;
	BOOL fromAddEntrance;
	BOOL hasAlreadyGetCardLayout;
	BOOL fromShareCardList;
	BOOL _fromMoreViewController;
	id<WCCardPackageViewControllerDelegate> delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<WCCardPackageViewControllerDelegate> delegate;
@property(assign, nonatomic) BOOL fromMoreViewController;
@property(assign, nonatomic) BOOL fromShareCardList;
@property(assign, nonatomic) BOOL hasAlreadyGetCardLayout;
@property(assign, nonatomic) BOOL fromAddEntrance;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)showMessageListByNewMsg;
-(id)getCardMsgTipWording;
-(id)genNewMessageTipView:(id)view;
-(void)initHeaderViewWithLastMsg:(id)lastMsg;
-(void)onRetrieveLocation:(int)location;
-(void)onWCCardMessageUnreadCountChanged:(id)changed;
-(void)OnSelectSessionCancel:(id)cancel;
-(void)OnSelectSession:(id)session SessionSelectController:(id)controller;
-(BOOL)searchBarShouldBeginEditing:(id)searchBar;
-(void)checkDBAutoRecover;
-(BOOL)hasUnreadMessage;
-(void)setHasEnterCardListBefore;
-(BOOL)hasEnterCardListBefore;
-(void)onGiftToFriendWithIndexPath:(id)indexPath;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)showMessageListByMore;
-(void)gotoMsgCenterViewControllerForNewMsg:(BOOL)newMsg;
-(void)onCancel;
-(void)onRightButtonOP;
-(void)layoutTableView;
-(void)viewDidLayoutSubviews;
-(void)viewDidBePushed:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)view;
-(void)onShowAllMessage;
-(void)initNavigationBar;
-(BOOL)useTransparentNavibar;
-(void)viewWillBePoped:(BOOL)view;
-(void)dealloc;
-(id)init;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)updateTableFooterHasMore:(BOOL)more;
-(void)stopActivityLoading;
-(void)scrollToShareCard;
-(void)stopLoadMoreAnimation;
-(void)onLoadMoreMyCardData;
-(id)getMyCardTableView;
-(void)onCardPackageViewSelectCardItem:(id)item;
-(float)getViewHeight;
-(BOOL)isFromAddEntrance;
-(BOOL)hasUnreadMessage;
-(BOOL)hasEnterCardListBefore;
-(void)showLoadingView;
-(void)showTableView;
-(id)getViewController;
-(void)onWCCardTips;
-(void)onGetCardLayoutStop;
-(void)onGetCardLayout;
-(void)onWCCardUpdate:(id)update;
-(void)onGetNextPageWCCardList:(id)list ErrCode:(int)code HasMore:(BOOL)more HasBatchGeting:(BOOL)geting;
-(void)onGetFirstPageWCCardList:(id)list ErrCode:(int)code HasMore:(BOOL)more HasBatchGeting:(BOOL)geting;
-(void)onSyncEnd:(BOOL)end;
-(void)onDeleteCardIDList:(id)list ErrCode:(int)code;
-(void)loadMoreMyCard;
-(void)initMyCardLoadingView;
-(void)initMyCardTableView;
-(void)initMyCardData;
@end

