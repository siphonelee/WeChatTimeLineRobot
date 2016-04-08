/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "WebAddContactDelegate.h"
#import "WCRedEnvelopesBaseViewController.h"
#import "IZCWScrollNumViewDelegate.h"
#import "WCRedEnvelopesCommentInputToolViewDelegate.h"

@class UIView, UIImageView, NSString, MMTableView, UIButton, WCRedEnvelopesCommentInputToolView, WCUITextField;
@protocol WCRedEnvelopesEnterpriseDetailViewControllerDelegate;

@interface WCRedEnvelopesEnterpriseDetailViewController : WCRedEnvelopesBaseViewController <WebAddContactDelegate, IZCWScrollNumViewDelegate, UITableViewDelegate, UITableViewDataSource, WCRedEnvelopesCommentInputToolViewDelegate> {
	id<WCRedEnvelopesEnterpriseDetailViewControllerDelegate> m_delegate;
	BOOL m_loadingMoreOrderList;
	MMTableView* m_tableView;
	BOOL m_bDidBack;
	WCUITextField* m_oWishingTextField;
	UIView* m_oHeaderView;
	WCRedEnvelopesCommentInputToolView* oWCRedEnvelopesCommentInputToolView;
	UIView* oMsgAnimationView;
	UIView* oMoneyAnimationView;
	UIView* oTableAnimationView;
	UIView* oTopHeaderView;
	UIView* oNavigationBarView;
	UIImageView* commentImageView;
	UIButton* commentButton;
	BOOL m_bEnterpriseRedEnvelopes;
	int enWCRedEnvelopesEnterpriseDetailViewControllerScene;
	unsigned long m_uiStatFromScene;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned long m_uiStatFromScene;
@property(assign, nonatomic) BOOL m_bEnterpriseRedEnvelopes;
@property(assign, nonatomic) int enWCRedEnvelopesEnterpriseDetailViewControllerScene;
-(void).cxx_destruct;
-(void)OnWebAddContactReturn;
-(void)OnWebAddContact:(int)contact Msg:(id)msg CallBack:(id)back;
-(void)setLeftCloseBarButton;
-(void)animationForLabel;
-(void)startOpenAnimation;
-(void)OnToolViewDissmiss;
-(void)SendTextMessageToolView:(id)view;
-(void)scrollViewDidScroll:(id)scrollView;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)makeCell:(id)cell cell:(id)cell2 row:(unsigned)row;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(id)tableView:(id)view titleForDeleteConfirmationButtonForRowAtIndexPath:(id)indexPath;
-(void)setDelegate:(id)delegate;
-(void)watchMyRedEnvelopesList;
-(void)handleTailOperation;
-(void)handleRedEnvelopesOperation:(id)operation;
-(void)reportChangeLinkClick:(unsigned)click Url:(id)url;
-(void)gotoUrl;
-(void)gotoBalanceDetail;
-(void)commentRedEnvelopes;
-(void)refreshViewWithData:(id)data;
-(id)GetHeaderView:(id)view;
-(id)GetViewHeader:(id)header;
-(id)GetNavigationBarViewHeader:(id)header;
-(id)getAnimationView:(id)view;
-(void)initTableView;
-(id)getNoMoreBottomView;
-(id)getBottomView;
-(void)statExpourseOperation;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)view;
-(CGRect)getFinalBoundsForDetailView;
-(id)genNumView;
-(void)initContainerView;
-(void)viewDidLayoutSubviews;
-(void)loadMoreOrderList;
-(void)viewDidBePoped:(BOOL)view;
-(void)OnLeftBarButtonDone;
-(BOOL)useTransparentNavibar;
-(void)initNavigationBar;
-(void)dealloc;
-(id)init;
@end

