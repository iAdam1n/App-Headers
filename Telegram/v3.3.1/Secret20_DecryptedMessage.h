//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface Secret20_DecryptedMessage : NSObject
{
    NSNumber *_randomId;
}

+ (id)decryptedMessageServiceWithRandomId:(id)arg1 action:(id)arg2;
+ (id)decryptedMessageWithRandomId:(id)arg1 ttl:(id)arg2 message:(id)arg3 media:(id)arg4;
@property(retain, nonatomic) NSNumber *randomId; // @synthesize randomId=_randomId;
- (void).cxx_destruct;

@end

