/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "MMService.h"

@class NSString;

@interface WCDeviceAirKissMgr : MMService <MMService> {
	BOOL m_isStarted;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(BOOL)setWifi:(id)wifi Password:(id)password;
-(id)getTableKey:(id)key;
-(id)getAESKey:(id)key;
-(id)getWifiPassword:(id)password;
-(id)getCurrentWifiSSID;
-(void)stopAirKiss;
-(BOOL)startAirKiss:(id)kiss Password:(id)password Key:(id)key ProcInt:(int)int DataInt:(int)int5;
-(void)onServiceInit;
@end

