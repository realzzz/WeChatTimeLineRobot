/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface ComposeSendResponse : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* clientId;
@property(assign, nonatomic) unsigned totalLen;
@property(assign, nonatomic) unsigned startPos;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

