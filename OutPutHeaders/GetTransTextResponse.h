/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString, BaseResponse;

@interface GetTransTextResponse : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* toLang;
@property(retain, nonatomic) NSMutableArray* msgList;
@property(assign, nonatomic) unsigned msgCount;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end
