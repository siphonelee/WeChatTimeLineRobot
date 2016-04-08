/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIViewController.h"
#import "CNetworkStatusExt.h"
#import "AirKissViewControllerDelegate.h"
#import "IWCDeviceBrandMgrExt.h"

@class UIScrollView, UIView, NSString, AirKissConfData, WCDevice;

@interface WCDeviceSearchGuideViewController : MMUIViewController <AirKissViewControllerDelegate, IWCDeviceBrandMgrExt, CNetworkStatusExt> {
	WCDevice* m_device;
	AirKissConfData* m_confData;
	UIScrollView* m_scrolView;
	UIView* m_noWifiOrBLEView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onSimCardNetTypeChange;
-(void)ReachabilityChange:(unsigned long)change;
-(void)onWCDeviceBlueToothStateChanged:(int)changed;
-(BOOL)isWifiConnected;
-(BOOL)isBLEConnected;
-(void)updateConnectState;
-(void)onAirKissReturn:(BOOL)aReturn;
-(void)onDeviceSearch;
-(void)onAirKiss;
-(void)initNoWifiOrBLEView;
-(void)initGuideView;
-(void)dealloc;
-(void)viewDidLoad;
-(id)initWithFilterUserData:(id)filterUserData;
@end

