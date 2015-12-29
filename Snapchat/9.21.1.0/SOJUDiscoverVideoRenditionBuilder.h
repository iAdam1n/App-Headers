//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SOJUDiscoverVideoRenditionBuilder : NSObject
{
    NSNumber *_bitrate;
    NSNumber *_height;
    NSNumber *_width;
    NSNumber *_size;
    NSNumber *_duration;
    NSString *_url;
    NSString *_codec;
    NSString *_container;
}

+ (id)withJUDiscoverVideoRendition:(id)arg1;
- (void).cxx_destruct;
- (id)setContainer:(id)arg1;
- (id)setCodec:(id)arg1;
- (id)setUrl:(id)arg1;
- (id)setDuration:(id)arg1;
- (id)setSize:(id)arg1;
- (id)setWidth:(id)arg1;
- (id)setHeight:(id)arg1;
- (id)setBitrate:(id)arg1;
- (id)build;

@end
