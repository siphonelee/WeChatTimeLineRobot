/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface MemoryMappedKV : XXUnknownSuperclass {
	NSRecursiveLock* m_lock;
	NSMutableDictionary* m_dic;
	NSString* m_path;
	NSString* m_crcPath;
	NSString* m_mmapID;
	int m_fd;
	char* m_ptr;
	unsigned long m_size;
	unsigned long m_actualSize;
	CodedOutputData* m_output;
	BOOL m_isInBackground;
	BOOL m_needLoadFromFile;
	unsigned m_crcDigest;
	int m_crcFd;
	char* m_crcPtr;
}
+(BOOL)isFileValid:(id)valid;
+(id)crcPathWithMappedKVPath:(id)mappedKVPath;
+(id)mappedKVPathWithID:(id)anId;
+(id)memoryMappedKVWithID:(id)anId withApplicationState:(int)applicationState;
+(id)sharedDefaultMemoryMappedKVWithApplicationState:(int)applicationState;
+(id)defaultMemoryMappedKVWithApplicationState:(int)applicationState;
+(void)setCurrentUin:(unsigned long)uin;
+(void)initialize;
+(id)memoryMappedKVWithID:(id)anId;
+(id)sharedDefaultMemoryMappedKV;
+(id)defaultMemoryMappedKV;
+(void)reportMMapFail;
+(void)reportTruncateFail;
+(void)reportCRCCheckFail;
+(void)reportLengthFail;
-(void).cxx_destruct;
-(void)sync;
-(void)removeValuesForKeys:(id)keys;
-(void)removeValueForKey:(id)key;
-(void)enumerateKeys:(id)keys;
-(unsigned long)totalSize;
-(unsigned long)count;
-(BOOL)containsKey:(id)key;
-(unsigned long long)getUInt64ForKey:(id)key defaultValue:(unsigned long long)value;
-(unsigned long long)getUInt64ForKey:(id)key;
-(long long)getInt64ForKey:(id)key defaultValue:(long long)value;
-(long long)getInt64ForKey:(id)key;
-(unsigned)getUInt32ForKey:(id)key defaultValue:(unsigned)value;
-(unsigned)getUInt32ForKey:(id)key;
-(int)getInt32ForKey:(id)key defaultValue:(int)value;
-(int)getInt32ForKey:(id)key;
-(BOOL)getBoolForKey:(id)key defaultValue:(BOOL)value;
-(BOOL)getBoolForKey:(id)key;
-(id)getObjectOfClass:(Class)aClass forKey:(id)key;
-(BOOL)setUInt64:(unsigned long long)a64 forKey:(id)key;
-(BOOL)setInt64:(long long)a64 forKey:(id)key;
-(BOOL)setUInt32:(unsigned)a32 forKey:(id)key;
-(BOOL)setInt32:(int)a32 forKey:(id)key;
-(BOOL)setBool:(BOOL)aBool forKey:(id)key;
-(BOOL)setObject:(id)object forKey:(id)key;
-(void)prepareCRCFile;
-(void)updateCRCDigest:(const char*)digest withSize:(unsigned long)size;
-(void)recaculateCRCDigest;
-(BOOL)checkFileCRCValid;
-(BOOL)isFileValid;
-(BOOL)fullWriteback;
-(id)getDataForKey:(id)key;
-(BOOL)setData:(id)data forKey:(id)key;
-(BOOL)writeAcutalSize:(unsigned long)size;
-(BOOL)ensureMemorySize:(unsigned long)size;
-(BOOL)protectFromBackgroundWritting:(unsigned long)backgroundWritting writeBlock:(id)block;
-(void)clearMemoryState;
-(void)clearAll;
-(void)checkLoadData;
-(void)tryResetFileProtection:(id)protection;
-(void)loadFromFile;
-(void)didBecomeActive;
-(void)didEnterBackground;
-(void)onMemoryWarning;
-(void)dealloc;
-(id)initWithMMapID:(id)mmapID withApplicationState:(int)applicationState;
@end

