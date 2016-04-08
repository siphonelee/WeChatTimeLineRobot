/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class PublicWifiDB, NSMutableDictionary;

@interface PublicWifiCache : MMObject {
	NSMutableDictionary* _notRegisterDict;
	PublicWifiDB* _db;
}
@property(retain, nonatomic) PublicWifiDB* db;
@property(retain, nonatomic) NSMutableDictionary* notRegisterDict;
+(id)getInstance;
-(void).cxx_destruct;
-(id)getAPCheckConfig;
-(void)saveAPCheckConfig:(id)config;
-(BOOL)isApCheckNotRegisterIn12hSinceLastTryWithMac:(id)mac;
-(void)saveApcheckNotRegisterTime:(double)time mac:(id)mac;
-(id)retrivalApAuthForSsid:(id)ssid;
-(BOOL)removeApBase:(id)base;
-(id)retrivalApBaseForMac:(id)mac;
-(BOOL)saveApBase:(id)base;
-(void)cleanCache;
-(void)closeDB;
-(void)initDB;
-(BOOL)shouldUserConfirm;
-(void)userConfirm;
-(id)convertAPBase:(id)base;
-(id)init;
-(void)dealloc;
@end

