/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface WCPayCredInfo : XXUnknownSuperclass <NSCoding> {
	NSString* m_nsWCPayCredType;
	NSString* m_nsWCPayCredName;
}
@property(retain, nonatomic) NSString* m_nsWCPayCredName;
@property(retain, nonatomic) NSString* m_nsWCPayCredType;
-(void).cxx_destruct;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
@end

