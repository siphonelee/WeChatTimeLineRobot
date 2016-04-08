/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"
#import "PBCoding.h"

@class NSString;

@interface ChatRoomDetail : XXUnknownSuperclass <PBCoding, NSCoding> {
	unsigned long m_uiChatRoomInfoVersion;
	unsigned long m_uiChatRoomInfoSvrVersion;
	NSString* m_nsChatRoomDesc;
	NSString* m_nsChatRoomDescModer;
	unsigned long long m_uiChatRoomDescTime;
	BOOL m_bChatRoomDescReaded;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL m_bChatRoomDescReaded;
@property(assign, nonatomic) unsigned long long m_uiChatRoomDescTime;
@property(retain, nonatomic) NSString* m_nsChatRoomDescModer;
@property(retain, nonatomic) NSString* m_nsChatRoomDesc;
@property(assign, nonatomic) unsigned long m_uiChatRoomInfoSvrVersion;
@property(assign, nonatomic) unsigned long m_uiChatRoomInfoVersion;
+(void)initialize;
-(void).cxx_destruct;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)init;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end

