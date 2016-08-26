//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TGMessageHole : NSObject
{
    int _minId;
    int _minTimestamp;
    int _maxId;
    int _maxTimestamp;
}

@property(readonly, nonatomic) int maxTimestamp; // @synthesize maxTimestamp=_maxTimestamp;
@property(readonly, nonatomic) int maxId; // @synthesize maxId=_maxId;
@property(readonly, nonatomic) int minTimestamp; // @synthesize minTimestamp=_minTimestamp;
@property(readonly, nonatomic) int minId; // @synthesize minId=_minId;
- (id)exclude:(id)arg1;
- (_Bool)covers:(id)arg1;
- (_Bool)intersects:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMinId:(int)arg1 minTimestamp:(int)arg2 maxId:(int)arg3 maxTimestamp:(int)arg4;

@end
