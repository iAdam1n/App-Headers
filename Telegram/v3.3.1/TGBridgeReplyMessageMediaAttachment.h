//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGBridgeMediaAttachment.h"

@class TGBridgeMessage;

@interface TGBridgeReplyMessageMediaAttachment : TGBridgeMediaAttachment
{
    int _mid;
    TGBridgeMessage *_message;
}

+ (long long)mediaType;
@property(retain, nonatomic) TGBridgeMessage *message; // @synthesize message=_message;
@property(nonatomic) int mid; // @synthesize mid=_mid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
