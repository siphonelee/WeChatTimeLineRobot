/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSRecursiveLock;

@interface VoipForceStartObject : XXUnknownSuperclass {
	BOOL _m_hasStart;
	id _m_block;
	NSRecursiveLock* _m_lock;
}
@property(assign, nonatomic) BOOL m_hasStart;
@property(retain, nonatomic) NSRecursiveLock* m_lock;
@property(copy, nonatomic) id m_block;
-(void).cxx_destruct;
-(void)internalStart;
-(void)whenDidActive;
-(void)start;
-(void)dealloc;
-(void)updateBlock:(id)block;
-(id)init;
@end

