/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIViewController.h"
#import "IWCDeviceFriendWifiMgrExt.h"
#import "PublicWifiLoadingViewDelegate.h"

@class PublicWifiLoadingView, UIScrollView, NSString, UIImageView, UILabel;

@interface WCFriendWifiViewController : MMUIViewController <PublicWifiLoadingViewDelegate, IWCDeviceFriendWifiMgrExt> {
	NSString* m_ssid;
	UIScrollView* m_scrollView;
	PublicWifiLoadingView* m_loadingView;
	UIImageView* m_wifiLogoView;
	UILabel* m_mainLbl;
	UILabel* m_subLbl;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onWCDeviceFriendWifiMgrUnable;
-(void)onWCDeviceFriendWifiMgrConnectedRouterFaild;
-(void)onWCDeviceFriendWifiMgrConnectedRouterWithErrCode:(int)errCode;
-(void)onPublicWifiLoadingViewFinishLoading;
-(void)updateConnectUnableStatus;
-(void)updateConnectFailedStatus;
-(void)updateStatusWithErrCode:(int)errCode;
-(void)onDone;
-(void)updateLayout;
-(void)initView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithSSID:(id)ssid;
-(id)init;
@end

