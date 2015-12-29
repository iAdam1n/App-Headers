//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface TGTwoStepConfig : NSObject
{
    _Bool _hasRecovery;
    NSData *_nextSalt;
    NSData *_currentSalt;
    NSString *_currentHint;
    NSString *_unconfirmedEmailPattern;
}

@property(readonly, nonatomic) NSString *unconfirmedEmailPattern; // @synthesize unconfirmedEmailPattern=_unconfirmedEmailPattern;
@property(readonly, nonatomic) NSString *currentHint; // @synthesize currentHint=_currentHint;
@property(readonly, nonatomic) _Bool hasRecovery; // @synthesize hasRecovery=_hasRecovery;
@property(readonly, nonatomic) NSData *currentSalt; // @synthesize currentSalt=_currentSalt;
@property(readonly, nonatomic) NSData *nextSalt; // @synthesize nextSalt=_nextSalt;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithNextSalt:(id)arg1 currentSalt:(id)arg2 hasRecovery:(_Bool)arg3 currentHint:(id)arg4 unconfirmedEmailPattern:(id)arg5;

@end
