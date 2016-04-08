/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "JSEventExt.h"
#import "WCActionSheetDelegate.h"
#import "MMWebViewDelegate.h"
#import "WeChat-Structs.h"
#import "SendAppMsgHandleDelegate.h"
#import "MMUIViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "tableViewDelegate.h"
#import "MMWebImageViewDelegate.h"
#import "ScanTVDelegate.h"

@class UILabel, SendAppMsgHandler, MMWebViewController, UIView, ShakeTvItem, NSString, MMTableView, UIButton, MMAnimationTipView, UIActivityIndicatorView, MMWebImageView, ScanTVHelper, NSMutableArray;

@interface ShakeTvViewController : MMUIViewController <tableViewDelegate, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, SendAppMsgHandleDelegate, MMWebViewDelegate, MMWebImageViewDelegate, ScanTVDelegate, JSEventExt> {
	BOOL _canShareToFriend;
	BOOL _canShareToWC;
	BOOL _canAddToFav;
	BOOL _canEditTag;
	BOOL _canDelete;
	id _userdata;
	BOOL _isVideoPlaying;
	ScanTVHelper* m_tvHelper;
	MMTableView* _tableView;
	int m_uiShakeTvViewControllerShowStyle;
	BOOL _isModal;
	ShakeTvItem* _tvItem;
	UIView* _infoView;
	UIButton* _playBtn;
	UIButton* _actionBtn;
	MMWebImageView* _videoThumbImgView;
	MMWebViewController* _videoWebView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIActivityIndicatorView* _activityIndicatorView;
	SendAppMsgHandler* _sendAppMsgHandler;
	MMAnimationTipView* _tipView;
	NSMutableArray* seperatorLines;
	UIView* footerLine;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) id userdata;
@property(assign, nonatomic) BOOL canDelete;
@property(assign, nonatomic) BOOL canEditTag;
@property(assign, nonatomic) BOOL canAddToFav;
@property(assign, nonatomic) BOOL canShareToWC;
@property(assign, nonatomic) BOOL canShareToFriend;
-(void).cxx_destruct;
-(void)onEditTVTag;
-(void)onDeleteTV;
-(void)onGetTVItemFail:(id)fail;
-(void)onGetTVItem:(id)item TVItem:(id)item2;
-(void)onLoadImageOK:(id)ok;
-(void)OnSendAppMsgOK;
-(void)jsSetPageState:(id)state;
-(id)getThumbImageData;
-(id)getMessageWrap:(id)wrap;
-(id)getUpLoadTask:(id)task;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)onAction:(id)action;
-(void)onReturn;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didUnhighlightRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)indexPath;
-(void)setSeperatorHidden:(id)hidden IndexPath:(id)path Hidden:(BOOL)hidden3;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)initNotificationObservers;
-(void)stopLoading;
-(void)startLoading;
-(void)viewDidLoad;
-(void)initView;
-(void)openPlayUrl;
-(void)openActionUrl;
-(void)initTableView;
-(void)initHeaderView:(int)view;
-(void)initFooterView;
-(id)getCommentId;
-(void)viewDidLayoutSubviews;
-(void)onPlayerExitFullscreen;
-(void)onPlayerEnterFullscreen;
-(void)dealloc;
-(id)initWithExtContent:(id)extContent Scence:(unsigned long)scence;
-(id)initWithShakeTvItem:(id)shakeTvItem andModal:(BOOL)modal Style:(int)style;
@end

