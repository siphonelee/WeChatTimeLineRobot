/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PBMessageObserverDelegate.h"
#import "MMObject.h"
#import "WCCommitViewResultDelegate.h"

@class UIViewController, NSString, MMLoadingView, FavDataItemWrap;
@protocol FavForwardToSNSLogicDelegate;

@interface FavForwardToSNSLogicController : MMObject <PBMessageObserverDelegate, WCCommitViewResultDelegate> {
	FavDataItemWrap* m_favDataWrap;
	UIViewController* m_curViewController;
	MMLoadingView* m_loadingView;
	id<FavForwardToSNSLogicDelegate> m_delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<FavForwardToSNSLogicDelegate> m_delegate;
@property(retain, nonatomic) UIViewController* m_curViewController;
@property(retain, nonatomic) FavDataItemWrap* m_favDataWrap;
-(void).cxx_destruct;
-(void)onDoneForwardForForwardView:(id)forwardView;
-(void)onCancelForwardForForwardView:(id)forwardView;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)HandleShareFav:(id)fav Event:(unsigned long)event;
-(void)ShareWithUrl:(id)url;
-(void)ShareFail;
-(void)getVideoShareUrlForSNS;
-(void)ShowShareFail;
-(void)showLoading;
-(void)ShareWCUploadTask:(id)task;
-(void)forwardFavDataToSns:(id)sns;
-(id)initWithViewController:(id)viewController;
@end

