//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTPongMessage : NSObject
{
    long long _messageId;
    long long _pingId;
}

@property(readonly, nonatomic) long long pingId; // @synthesize pingId=_pingId;
@property(readonly, nonatomic) long long messageId; // @synthesize messageId=_messageId;
- (id)initWithMessageId:(long long)arg1 pingId:(long long)arg2;

@end
