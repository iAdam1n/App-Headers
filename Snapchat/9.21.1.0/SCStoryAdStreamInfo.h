//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class SCStoryAdStreamInsertionInfo, SCStoryAdStreamRequestInfo;

@interface SCStoryAdStreamInfo : NSObject <NSCoding>
{
    SCStoryAdStreamRequestInfo *_requestInfo;
    SCStoryAdStreamInsertionInfo *_insertionInfo;
}

+ (id)fastCodingKeys;
@property(retain, nonatomic) SCStoryAdStreamInsertionInfo *insertionInfo; // @synthesize insertionInfo=_insertionInfo;
@property(retain, nonatomic) SCStoryAdStreamRequestInfo *requestInfo; // @synthesize requestInfo=_requestInfo;
- (void).cxx_destruct;
- (void)setNilValueForKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (_Bool)preferFastCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
