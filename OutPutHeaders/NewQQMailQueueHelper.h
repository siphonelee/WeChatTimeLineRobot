/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface NewQQMailQueueHelper : XXUnknownSuperclass {
	NSMutableArray* m_newQQMailQueue;
	BOOL m_bChecked;
}
-(void).cxx_destruct;
-(void)saveNewQQMailQueueCache;
-(BOOL)loadNewQQMailQueueCache;
-(void)checkQueue;
-(void)popQueue:(unsigned long)queue;
-(void)enQueue:(id)queue;
-(void)setChecked:(BOOL)checked;
-(id)init;
@end

