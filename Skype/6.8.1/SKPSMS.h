//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPALEMappedObject.h"

@class NSArray, NSString;

@interface SKPSMS : SKPALEMappedObject
{
    unsigned int _price;
    unsigned int _precision;
    unsigned long long _status;
    unsigned long long _failureReason;
    long long _charactersUntilNextChunk;
    NSString *_body;
    NSArray *_targets;
    NSString *_currency;
}

+ (id)errorWithFailureReason:(unsigned long long)arg1;
+ (id)keyPathsForValuesAffectingLocalizedCostDescription;
+ (id)transformValue:(id)arg1 forKeyPath:(id)arg2 wasTransformed:(_Bool *)arg3;
+ (id)propertyMapping;
+ (Class)associatedALEClass;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(nonatomic) unsigned int precision; // @synthesize precision=_precision;
@property(nonatomic) unsigned int price; // @synthesize price=_price;
@property(copy, nonatomic) NSArray *targets; // @synthesize targets=_targets;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(nonatomic) long long charactersUntilNextChunk; // @synthesize charactersUntilNextChunk=_charactersUntilNextChunk;
@property(readonly, nonatomic) unsigned long long failureReason; // @synthesize failureReason=_failureReason;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *localizedCostDescription;
- (void)setTargets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setBody:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)initializeALEObjectWithObjectId:(unsigned long long)arg1;
- (void)initializeObject;
- (_Bool)postInConversation:(id)arg1;

@end
