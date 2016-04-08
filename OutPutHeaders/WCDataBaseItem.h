/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PBCoding.h"

@class NSString;

@interface WCDataBaseItem : XXUnknownSuperclass <PBCoding> {
	int m_type;
	Class m_cls;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > m_name;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > m_default;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > m_constraint;
	SEL m_getter;
	SEL m_setter;
	id m_blockGet;
	id m_blockSet;
	NSString* m_clsName;
	NSString* m_nsName;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) NSString* m_nsName;
@property(assign, nonatomic) NSString* m_clsName;
@property(readonly, assign, nonatomic) basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > m_constraint;
@property(readonly, assign, nonatomic) basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > m_default;
@property(readonly, assign, nonatomic) basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > m_name;
@property(retain, nonatomic) id m_blockSet;
@property(retain, nonatomic) id m_blockGet;
@property(readonly, assign, nonatomic) SEL m_setter;
@property(readonly, assign, nonatomic) SEL m_getter;
@property(readonly, assign, nonatomic) Class m_cls;
@property(assign, nonatomic) int m_type;
+(void)initialize;
-(id).cxx_construct;
-(void).cxx_destruct;
-(int)getColumnTypeFromClass:(Class)aClass;
-(void)setConstraint:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)constraint;
-(id)initWithClass:(Class)aClass DBType:(int)type nsName:(const char*)name defaultValue:(const char*)value getter:(SEL)getter setter:(SEL)setter blockGet:(id)get blockSet:(id)set;
-(id)initWithClass:(Class)aClass DBType:(int)type nsName:(const char*)name getter:(SEL)getter setter:(SEL)setter blockGet:(id)get blockSet:(id)set;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end

