//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface SKPToken : NSObject
{
    NSString *_token;
    NSDate *_expirationDate;
}

+ (id)tokenWithString:(id)arg1;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;

@end
