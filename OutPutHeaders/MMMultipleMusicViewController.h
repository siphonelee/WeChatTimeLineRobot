/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCActionSheetDelegate.h"
#import "ShakeCheckerDelegate.h"
#import "WeChat-Structs.h"
#import "MMTipsViewControllerDelegate.h"
#import "SendAppMsgHandleDelegate.h"
#import "MMUIViewController.h"
#import "ShareUploadTaskConfirmLogicHelperDelegate.h"
#import "UIScrollViewDelegate.h"
#import "MMMusicPageViewDelegate.h"
#import "IMusicPlayerExt.h"
#import "MMScrollActionSheetDelegate.h"

@class SendAppMsgHandler, UIImageView, MMMusicPageView, NSString, MMTipsViewController, UIButton, MMMusicPlayerModeTipView, MMAnimationTipView, MMMusicInfo, NSMutableArray, CShakeChecker, MMScrollActionSheet, MMScrollView;

@interface MMMultipleMusicViewController : MMUIViewController <WCActionSheetDelegate, ShareUploadTaskConfirmLogicHelperDelegate, SendAppMsgHandleDelegate, UIScrollViewDelegate, MMScrollActionSheetDelegate, MMMusicPageViewDelegate, ShakeCheckerDelegate, IMusicPlayerExt, MMTipsViewControllerDelegate> {
	MMScrollView* _musicPageScrollView;
	MMMusicPageView* _leftPageView;
	MMMusicPageView* _centerPageView;
	MMMusicPageView* _rightPageView;
	NSMutableArray* _musicInfoArray;
	MMMusicInfo* _curMusicInfo;
	int _numberOfPages;
	unsigned _currentPageIndex;
	SendAppMsgHandler* _sendAppMsgHandler;
	BOOL _isSingleLyricPage;
	float _offset;
	UIImageView* _bottomView;
	UIButton* _playMusicButton;
	MMAnimationTipView* _tipView;
	MMMusicPlayerModeTipView* _transModeTipView;
	int _pushedFromType;
	BOOL _isFromShaking;
	MMScrollActionSheet* _scrollActionSheet;
	CShakeChecker* _shakeChecker;
	BOOL _isOnShakeCheck;
	unsigned long long _beginShakeTime;
	unsigned long long _endShakeTime;
	unsigned long long _startEntranceTime;
	MMTipsViewController* _easterEggTipView;
	MMMusicPlayerModeTipView* _justOneSongTipView;
	BOOL _bLayoutScrollView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL isFromShaking;
-(void).cxx_destruct;
-(void)onClickTipsBtn:(unsigned)btn;
-(void)playSoundByAQAudioPlayer:(id)player type:(id)type;
-(void)playShakeSound;
-(id)getEasterEggcontentTip;
-(void)showEasterEgg;
-(void)transPlayMode;
-(void)startShakeCheck;
-(void)OnShake;
-(void)onStatusBarHiddenChanged;
-(void)layoutMusicPageView;
-(void)layoutScrollView;
-(void)layoutMusicPlayBtn;
-(void)layoutTipView;
-(void)viewDidTransitionToNewSize;
-(void)viewDidLayoutSubviews;
-(void)onFollowArrayUpToShowSecondPage;
-(void)updateNavBarTintColorByColor:(id)color;
-(void)updateNavBarByColor:(id)color;
-(void)onUpdateBottomBtnColor:(id)color;
-(void)OnSendAppMsgOK;
-(void)updateCurMusicInfo;
-(void)updatePlayBtn;
-(void)setPlayMusicButtonImage:(BOOL)image;
-(id)getMessageWrap:(id)wrap;
-(void)scrollActionSheet:(id)sheet didSelecteItem:(id)item;
-(id)getUpLoadTask:(id)task;
-(id)getCoverImageData;
-(void)OnUpdateDuarationOnForeGround;
-(void)onPlayPreviousMusic;
-(void)onPlayNextMusic;
-(void)onMusicPlayStatusChanged;
-(void)onLyricsChanged:(id)changed Lyrics:(id)lyrics;
-(void)OnGetSongAlbumUrl:(id)url AlbumUrl:(id)url2;
-(void)cancelSetShakePage;
-(void)updateMusicScrollView:(BOOL)view;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint*)offset;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)onSwipeScrollView;
-(void)addGestureRecognizers;
-(void)onShowCommonMore:(id)more;
-(void)onPlayMusicBtnClicked;
-(void)onMinimizeMusicPlayer;
-(void)initMusicPlayBtn;
-(void)setMusicPageDelegate;
-(void)tileMusicPages;
-(void)initScrollView;
-(void)initNavigationItem;
-(void)initSelfView;
-(void)updateButtomBtnColor:(id)color;
-(void)initView;
-(void)userDidTakeScreenshot:(id)user;
-(void)dealloc;
-(BOOL)useTransparentNavibar;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)beginPlayCurMusic;
-(void)viewWillBePresented:(BOOL)view;
-(void)viewWillBePushed:(BOOL)view;
-(void)updateLogEntranceType;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)setPushedFromType:(int)type;
-(void)commonInit;
-(unsigned)indexOfCurrentPage;
-(void)initPageInfo;
-(id)initFromBanner;
-(id)initWithMusicInfo:(id)musicInfo withMusicListSource:(int)musicListSource withOffset:(float)offset;
@end

