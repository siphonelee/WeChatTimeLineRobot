/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCActionSheetDelegate.h"
#import "WeChat-Structs.h"
#import "IHttpCacheExt.h"
#import "BaseScanLogicDelegate.h"
#import "MultiImageScrollViewDelegate.h"
#import "MMFullScreenViewController.h"

@class NSString, MultiImageScrollView, NSArray, ScanQRCodeLogicController, MMUIWindow, NSMutableArray, UIPageControl;
@protocol GameCenterPhotoViewControllerDelegate;

@interface GameCenterPhotoViewController : MMFullScreenViewController <WCActionSheetDelegate, BaseScanLogicDelegate, MultiImageScrollViewDelegate, IHttpCacheExt> {
	MultiImageScrollView* pagingScrollView;
	NSMutableArray* m_arrayImageDatas;
	NSMutableArray* m_arrImageScrollView;
	BOOL m_bAnimating;
	BOOL m_isFromWebview;
	MMUIWindow* m_bgWindow;
	NSArray* m_originalFrameInScreen;
	BOOL _oldNavigationBarAlpha;
	ScanQRCodeLogicController* _scanQRCodeLogic;
	UIPageControl* m_pageCtrl;
	id<GameCenterPhotoViewControllerDelegate> delegate;
	float m_animationTime;
	unsigned long m_httpType;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned long m_httpType;
@property(assign, nonatomic) float m_animationTime;
@property(assign, nonatomic) __weak id<GameCenterPhotoViewControllerDelegate> delegate;
-(void).cxx_destruct;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)PreScanQRCode;
-(void)onRightButtonTouchDown:(id)down;
-(void)addToFavorites;
-(void)forwardMessage;
-(void)onOperate;
-(void)onSavedPhotosAlbum;
-(void)onAnimationDidStop;
-(void)OnMMUIHookViewFrameChanged:(id)changed;
-(void)OnLongPress:(id)press;
-(void)onSingleTap:(id)tap;
-(void)OnHttpGetFinish:(id)finish response:(id)response ErrNo:(int)no isWebp:(BOOL)webp;
-(unsigned)getIndexArrayImageUrlCacheKey:(id)key;
-(id)tryGetResource:(id)resource;
-(id)genKeyForUrl:(id)url;
-(void)initImageViewerWithItems:(id)items current:(id)current;
-(unsigned)getIndexArrayImageUrl:(id)url;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)updatePhotoatIndex:(unsigned long)index;
-(void)setPage:(unsigned long)page atIndex:(unsigned long)index;
-(id)viewAtPage:(unsigned long)page frame:(CGRect)frame;
-(id)imageAtPage:(unsigned long)page;
-(void)onChangePage;
-(void)onMainWindowFrameChanged;
-(void)dealloc;
-(void)viewDidLoad;
-(void)hideSelf;
-(void)showSelf;
-(void)showAnimationWithUrl:(id)url;
-(void)showAnimationWithIndex:(unsigned long)index;
-(void)initWindow;
-(id)init;
-(BOOL)interactivePopGestureRecognizerShouldBegin:(id)interactivePopGestureRecognizer;
-(void)initScrollView;
@end

