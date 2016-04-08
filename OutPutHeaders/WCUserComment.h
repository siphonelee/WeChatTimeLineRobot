/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface WCUserComment : XXUnknownSuperclass <NSCoding> {
	NSString* commentID;
	NSString* comment64ID;
	NSString* username;
	NSString* nickname;
	NSString* content;
	int source;
	int type;
	unsigned createTime;
	int isLocalAdded;
	NSString* refCommentID;
	NSString* refComment64ID;
	NSString* refUserName;
	NSString* contentPattern;
	int isRichText;
	BOOL bDeleted;
	NSString* m_cpKeyForComment;
	BOOL m_isCommentUnsafe;
	BOOL isHBComment;
}
@property(assign, nonatomic) BOOL isHBComment;
@property(assign, nonatomic) BOOL isCommentUnsafe;
@property(retain, nonatomic) NSString* cpKeyForComment;
@property(assign, nonatomic) BOOL bDeleted;
@property(assign, nonatomic) int isRichText;
@property(retain, nonatomic) NSString* contentPattern;
@property(retain, nonatomic) NSString* refUserName;
@property(retain, nonatomic) NSString* refComment64ID;
@property(retain, nonatomic) NSString* refCommentID;
@property(assign, nonatomic) int isLocalAdded;
@property(assign, nonatomic) unsigned createTime;
@property(assign, nonatomic) int type;
@property(assign, nonatomic) int source;
@property(retain, nonatomic) NSString* content;
@property(retain, nonatomic) NSString* nickname;
@property(retain, nonatomic) NSString* username;
@property(retain, nonatomic) NSString* comment64ID;
@property(retain, nonatomic) NSString* commentID;
+(id)fromServerCommentObj:(id)serverCommentObj;
+(id)fromServerObj:(id)serverObj;
+(id)fromCommentUploadItem:(id)commentUploadItem;
-(void).cxx_destruct;
-(int)compareTime:(id)time;
-(BOOL)isEqual:(id)equal;
-(id)description;
-(id)descriptionForKeyPaths;
-(id)keyPaths;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)init;
@end

