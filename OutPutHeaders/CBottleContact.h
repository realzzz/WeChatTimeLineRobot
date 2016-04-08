/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CBaseContact.h"

@class NSString;

@interface CBottleContact : CBaseContact {
	NSString* m_nsCountry;
	NSString* m_nsProvince;
	NSString* m_nsCity;
	NSString* m_nsSignature;
}
@property(retain, nonatomic, setter=setNsSignature:) NSString* m_nsSignature;
@property(retain, nonatomic) NSString* m_nsCity;
@property(retain, nonatomic) NSString* m_nsProvince;
@property(retain, nonatomic) NSString* m_nsCountry;
-(void).cxx_destruct;
-(BOOL)isNeedGetHDImg;
-(BOOL)copyFrom:(id)from;
-(id)toContact;
-(BOOL)isSelf;
-(void)dealloc;
-(id)init;
@end
