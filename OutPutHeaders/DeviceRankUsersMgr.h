/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "MMService.h"

@class NSMutableArray, NSString;

@interface DeviceRankUsersMgr : MMService <MMService> {
	NSMutableArray* m_deviceRankUserList;
	BOOL m_bLoaded;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)updateOrAddCoverUrl:(id)url WithUsername:(id)username;
-(id)getCoverUrlByUserName:(id)name;
-(void)SaveDeviceRankUsers;
-(id)getRankUserProfileFilePath;
-(void)tryLoadDeviceRankUsers;
-(id)init;
@end

