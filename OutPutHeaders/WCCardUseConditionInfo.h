/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class NSArray, NSString;

@interface WCCardUseConditionInfo : MMObject {
	NSString* _title;
	NSArray* _outerTagList;
	NSArray* _innerTagList;
	NSArray* _detailField;
}
@property(retain, nonatomic) NSArray* detailField;
@property(retain, nonatomic) NSArray* innerTagList;
@property(retain, nonatomic) NSArray* outerTagList;
@property(retain, nonatomic) NSString* title;
-(void).cxx_destruct;
-(void)dealloc;
@end

