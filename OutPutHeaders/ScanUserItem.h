/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface ScanUserItem : XXUnknownSuperclass <NSCoding> {
	NSString* _username;
	NSString* _nickname;
}
@property(retain, nonatomic) NSString* nickname;
@property(retain, nonatomic) NSString* username;
-(void).cxx_destruct;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)init;
@end
