/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString;

@interface CEmoticonWrap : XXUnknownSuperclass {
	unsigned long m_uiType;
	NSString* m_nsMD5;
	BOOL m_bCanDelete;
	unsigned long m_uiGameType;
	NSString* m_nsAppID;
	NSMutableDictionary* m_extInfo;
	NSString* m_nsThumbImgPath;
	NSString* m_packageId;
	unsigned long m_lastUsedTime;
	NSString* m_nsDesignerId;
	NSString* m_nsThumbImgUrl;
	unsigned long m_extFlag;
}
@property(assign, nonatomic) unsigned long m_extFlag;
@property(retain, nonatomic) NSString* m_nsThumbImgUrl;
@property(retain, nonatomic) NSString* m_nsDesignerId;
@property(assign, nonatomic) unsigned long m_lastUsedTime;
@property(retain, nonatomic) NSString* m_packageId;
@property(retain, nonatomic) NSString* m_nsThumbImgPath;
@property(retain, nonatomic) NSMutableDictionary* m_extInfo;
@property(retain, nonatomic) NSString* m_nsAppID;
@property(assign, nonatomic) unsigned long m_uiGameType;
@property(assign, nonatomic) BOOL m_bCanDelete;
@property(retain, nonatomic) NSString* m_nsMD5;
@property(assign, nonatomic) unsigned long m_uiType;
-(void).cxx_destruct;
-(id)description;
-(id)init;
@end

