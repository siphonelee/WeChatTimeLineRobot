/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface CEmojiWrap : XXUnknownSuperclass {
	NSString* m_nsEmoji;
	NSString* m_nsDesc;
	unsigned long m_uiCataLogLocalID;
	BOOL m_bCanDelete;
}
@property(assign, nonatomic) BOOL m_bCanDelete;
@property(assign, nonatomic) unsigned long m_uiCataLogLocalID;
@property(retain, nonatomic) NSString* m_nsDesc;
@property(retain, nonatomic) NSString* m_nsEmoji;
-(void).cxx_destruct;
-(void)ChangeForDisplay;
-(id)init;
@end

