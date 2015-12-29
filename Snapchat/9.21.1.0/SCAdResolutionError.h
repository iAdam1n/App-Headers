//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface SCAdResolutionError : NSObject <NSCoding>
{
    long long _errorType;
    long long _errorCode;
}

@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) long long errorType; // @synthesize errorType=_errorType;
- (unsigned long long)adSkipReason;
- (unsigned long long)serverErrorSkipReason;
- (unsigned long long)clientErrorSkipReason;
- (_Bool)isServerNoFill;
- (_Bool)isContentNoFill;
- (_Bool)isTimeout;
- (_Bool)isServerError;
- (_Bool)isClientError;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithErrorType:(long long)arg1 errorCode:(long long)arg2;

@end
