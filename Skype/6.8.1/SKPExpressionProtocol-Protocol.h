//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol SKPExpressionProtocol <NSObject>
@property(readonly, nonatomic) NSArray *shortcuts;
@property(readonly, nonatomic) NSArray *keywords;
@property(readonly, nonatomic) id identifier;
@property(readonly, nonatomic) unsigned long long expressionType;
- (unsigned long long)scoreForSearchString:(NSString *)arg1;
@end
