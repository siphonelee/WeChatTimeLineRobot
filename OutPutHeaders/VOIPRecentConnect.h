/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface VOIPRecentConnect : XXUnknownSuperclass <PBCoding> {
	NSMutableArray* m_videoRecentConnectUserName;
	NSMutableArray* m_voiceRecentConnectUserName;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableArray* m_voiceRecentConnectUserName;
@property(retain, nonatomic) NSMutableArray* m_videoRecentConnectUserName;
+(id)loadFromFile;
+(id)getSavePath;
+(id)getSaveRootDir;
+(void)initialize;
-(void).cxx_destruct;
-(void)saveToCache;
-(void)dealloc;
-(void)addRecentVoiceConnect:(id)connect;
-(void)addRecentVideoConnect:(id)connect;
-(id)getRecentVoiceContact;
-(id)getRecentVideoConnect;
-(id)init;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end

