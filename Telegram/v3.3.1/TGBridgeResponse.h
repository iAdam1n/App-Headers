//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface TGBridgeResponse : NSObject <NSCoding>
{
    int _type;
    long long _subscriptionIdentifier;
    id _next;
    NSString *_error;
}

+ (id)completeForSubscription:(id)arg1;
+ (id)fail:(id)arg1 forSubscription:(id)arg2;
+ (id)single:(id)arg1 forSubscription:(id)arg2;
@property(readonly, nonatomic) NSString *error; // @synthesize error=_error;
@property(readonly, nonatomic) id next; // @synthesize next=_next;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) long long subscriptionIdentifier; // @synthesize subscriptionIdentifier=_subscriptionIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
