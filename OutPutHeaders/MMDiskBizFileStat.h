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

@interface MMDiskBizFileStat : XXUnknownSuperclass <PBCoding> {
	unsigned m_fileNum;
	unsigned m_delFileNum;
	unsigned long long m_fileSize;
	unsigned long long m_delFileSize;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned long long m_delFileSize;
@property(assign, nonatomic) unsigned m_delFileNum;
@property(assign, nonatomic) unsigned long long m_fileSize;
@property(assign, nonatomic) unsigned m_fileNum;
+(void)sumDicFilStat:(id)stat toDic:(id)dic;
+(void)sumDelFileNum:(unsigned)num DelFileSize:(unsigned long long)size withType:(int)type dicStat:(id)stat;
+(void)sumFileNum:(unsigned)num fileSize:(unsigned long long)size withType:(int)type dicStat:(id)stat;
+(id)getFileStatFormDic:(id)dic withType:(int)type;
+(void)initialize;
-(void)sumFileStat:(id)stat;
-(id)init;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end
