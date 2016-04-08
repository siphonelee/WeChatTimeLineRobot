/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCActionSheetDelegate.h"
#import "IHttpCacheExt.h"
#import "BaseScanLogicDelegate.h"
#import "MMFullScreenViewController.h"
#import "MultiImageScrollViewDelegate.h"

@class WCActionSheet, NSMutableArray, ScanQRCodeLogicController, NSString, MultiImageScrollView;

@interface PhotoViewController : MMFullScreenViewController <WCActionSheetDelegate, BaseScanLogicDelegate, MultiImageScrollViewDelegate, IHttpCacheExt> {
	MultiImageScrollView* pagingScrollView;
	NSMutableArray* m_arrayImageUrl;
	NSMutableArray* m_arrImageScrollView;
	BOOL m_bAnimating;
	BOOL m_isFromWebview;
	BOOL _oldNavigationBarAlpha;
	ScanQRCodeLogicController* _scanQRCodeLogic;
	int m_qrcodeActionSheetIndex;
	WCActionSheet* m_actionSheet;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL isFromWebview;
-(void).cxx_destruct;
-(void)onScanEnds;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)PreScanQRCode;
-(void)onRightButtonTouchDown:(id)down;
-(void)addToFavorites;
-(void)forwardMessage;
-(void)onOperate;
-(void)onSavedPhotosAlbum;
-(void)hideFullScreen;
-(void)onAnimationDidStop;
-(void)showFullScreen;
-(void)OnMMUIHookViewFrameChanged:(id)changed;
-(void)showFullScreenAnimated:(BOOL)animated;
-(void)OnLongPress:(id)press;
-(void)OnLongPressBegin:(id)begin;
-(void)onSingleTap:(id)tap;
-(void)delayHideViewBySetAlpha;
-(void)OnHttpGetFinish:(id)finish response:(id)response ErrNo:(int)no isWebp:(BOOL)webp;
-(unsigned)getIndexArrayImageUrlCacheKey:(id)key;
-(id)tryGetResource:(id)resource;
-(id)genKeyForUrl:(id)url;
-(void)initImageViewerWithUrls:(id)urls current:(id)current;
-(unsigned)getIndexArrayImageUrl:(id)url;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)updatePhotoatIndex:(unsigned long)index;
-(void)setPage:(unsigned long)page atIndex:(unsigned long)index;
-(id)viewAtPage:(unsigned long)page frame:(CGRect)frame;
-(id)imageAtPage:(unsigned long)page;
-(void)dealloc;
-(void)onMainWindowFrameChanged;
-(void)viewDidLoad;
-(id)init;
-(BOOL)interactivePopGestureRecognizerShouldBegin:(id)interactivePopGestureRecognizer;
-(void)initScrollView;
-(void)initNavigationBar;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillPop:(BOOL)view;
-(void)viewDidBePoped:(BOOL)view;
-(void)viewWillBeDismissed:(BOOL)view;
-(void)viewWillDismiss:(BOOL)view;
-(void)viewWillPresent:(BOOL)view;
-(void)viewWillPush:(BOOL)view;
-(void)viewWillBePoped:(BOOL)view;
-(void)hideStatusBar;
-(void)showStatusBar;
@end

