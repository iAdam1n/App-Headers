//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SKPIntentManager : NSObject
{
    long long _mainIntentType;
    NSMutableDictionary *_registeredIntentsByUUID;
}

@property(readonly, nonatomic) NSMutableDictionary *registeredIntentsByUUID; // @synthesize registeredIntentsByUUID=_registeredIntentsByUUID;
@property(nonatomic) long long mainIntentType; // @synthesize mainIntentType=_mainIntentType;
- (void).cxx_destruct;
- (id)description;
- (void)unregisterIntent:(id)arg1;
- (id)newRegisteredIntentWithName:(id)arg1 type:(long long)arg2;
- (long long)determineMainIntentType;
- (void)updateMainIntent;
- (void)removeIntent:(id)arg1;
- (void)addIntent:(id)arg1;
- (id)init;

@end
