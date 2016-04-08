/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PBCoding.h"

@class NSDate, NSString, NSMutableDictionary;

@interface GoogleSetting : XXUnknownSuperclass <PBCoding> {
	NSString* m_clientID;
	NSString* m_clientSecret;
	NSString* m_refreshToken;
	NSString* m_scope;
	NSString* m_redirectURI;
	NSMutableDictionary* m_parameters;
	NSString* m_tokenURL;
	NSDate* m_expirationDate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSDate* m_expirationDate;
@property(retain, nonatomic) NSString* m_tokenURL;
@property(retain, nonatomic) NSMutableDictionary* m_parameters;
@property(retain, nonatomic) NSString* m_redirectURI;
@property(retain, nonatomic) NSString* m_scope;
@property(retain, nonatomic) NSString* m_refreshToken;
@property(retain, nonatomic) NSString* m_clientSecret;
@property(retain, nonatomic) NSString* m_clientID;
+(id)getGoogleSettingLocalCachePath;
+(id)getGoogleSettingLocalCacheRootDir;
+(id)loadSetting;
+(void)initialize;
-(void).cxx_destruct;
-(void)saveSetting;
-(void)dealloc;
-(void)resetSetting;
-(id)init;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end

