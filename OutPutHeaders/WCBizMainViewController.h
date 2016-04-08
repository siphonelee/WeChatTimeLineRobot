/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IWCMallControlLogicExt.h"
#import "ILinkEventExt.h"
#import "WCPayPwdViewControllerDelegate.h"
#import "WCPayLogicMgrExt.h"
#import "WCMallFunctionActivityViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCPayNoticeBannerDelegate.h"
#import "WeChat-Structs.h"
#import "WCMallAcrivityLoopPageScrollViewDataSourceDelegate.h"
#import "IWCPayControlLogicExt.h"
#import "WCBizBaseViewController.h"
#import "UITableViewDelegate.h"

@class UrlLabel, NSDictionary, WCUIPageControl, UIImageView, WCMallControlData, UIButton, NSString, NSMutableArray, WCMallAcrivityLoopPageScrollView, WCPayControlData, UIView;

@interface WCBizMainViewController : WCBizBaseViewController <UITableViewDelegate, WCPayNoticeBannerDelegate, WCActionSheetDelegate, WCPayLogicMgrExt, WCPayPwdViewControllerDelegate, IWCPayControlLogicExt, IWCMallControlLogicExt, ILinkEventExt, WCMallAcrivityLoopPageScrollViewDataSourceDelegate, WCMallFunctionActivityViewDelegate> {
	unsigned long m_uiNewOrderCount;
	NSMutableArray* m_arrPayCardDetailView;
	WCMallControlData* m_oMallData;
	WCPayControlData* m_oPayData;
	UrlLabel* m_oBroadCastLabel;
	WCMallAcrivityLoopPageScrollView* m_oLoopPageScrollView;
	WCUIPageControl* _bigImagePageControl;
	UIView* m_oTipsView;
	UIView* m_oPrePageCurView;
	UIView* m_oNextPageCurView;
	BOOL m_bGetPayCardList;
	unsigned long m_uiCurrentShowedTipsActivityID;
	UIView* _topHeaderView;
	UIImageView* _redDotViewForTranslate;
	UIButton* _balanceBtn;
	UIButton* _cardListBtn;
	NSMutableArray* _activityGroups;
	NSDictionary* m_dicBanners;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned long m_uiNewOrderCount;
-(void).cxx_destruct;
-(void)banner:(id)banner clickWithUrl:(id)url;
-(id)getBannerView;
-(void)unHighlineActivityView;
-(void)onOfflinePayClick;
-(void)onOpenTouchIDAuth;
-(void)showTouchIDConfirmIfNeed;
-(void)viewDidBePushed:(BOOL)view;
-(void)removeRedDotForTransferNowAndForever;
-(BOOL)needToShowRedDotForTransfer;
-(id)getActivityCellView:(id)view;
-(float)contentHeightWithActivityCount:(unsigned)activityCount;
-(CGRect)tableViewFrame;
-(CGSize)tableViewContentSize;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)OnEntranceStatusChanged;
-(void)OnGetFunctionList:(id)list FromLocalCache:(BOOL)localCache;
-(void)OnFinishedWCPayLogic:(id)logic CompleteStatus:(int)status;
-(void)OnGetLocalCachePayCardList:(id)list;
-(void)OnPayCardListChanged:(id)changed;
-(void)OnWCPayPwdViewControllerBack;
-(void)OnStatusChangedOrderListCountChanged:(unsigned long)changed;
-(void)didReceiveMemoryWarning;
-(void)OnTransferMoney:(id)money;
-(void)OnOrderHistory;
-(void)OnWCMallFunctionActivityViewButtonDown:(id)down;
-(void)OnClickPrePage:(id)page;
-(void)OnClickNextPage:(id)page;
-(void)onClickJumpToActivityPage:(id)activityPage;
-(void)onClickAddCardButton:(id)button;
-(void)onClickCardListButton:(id)button;
-(void)onClickCard:(id)card;
-(id)makeNewOrderRecord:(id)record;
-(void)onPageControllerChangePage:(id)page;
-(void)onLinkClicked:(id)clicked backupUrl:(id)url withRect:(CGRect)rect;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)openPWDViewController;
-(void)onOperate:(id)operate;
-(void)onAddPayCardInUnregView;
-(void)onAddPayCard;
-(void)showAddCardView;
-(void)refreshViewWithMallControlData:(id)mallControlData;
-(void)refreshViewWithPayControlData:(id)payControlData;
-(id)testMakeLabel:(id)label;
-(void)onCardListBtnCancel;
-(void)onCardListBtnDown;
-(void)onCardListClick;
-(void)onBalanceBtnCancel;
-(void)onBalanceBtnDown;
-(void)onBalanceClick;
-(float)headerViewPaddingTop;
-(float)headerViewHeight;
-(void)makeCardHeaderView:(id)view;
-(float)testRowHeight;
-(void)refreshView;
-(void)OnStepInOfflinePay;
-(void)didChangeToPage:(unsigned long)page;
-(int)totalNumOfPage;
-(id)viewForPage:(id)page pageNum:(unsigned long)num;
-(void)reloadNavigationItem;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)initView;
-(void)dealloc;
-(id)init;
@end

