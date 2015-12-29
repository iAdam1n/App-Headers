//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString, SOJUAdsStoryAdMetadata, SOJUStoryThumbnails;

@interface SOJULiveStoryResponseBuilder : NSObject
{
    NSString *_username;
    NSArray *_stories;
    NSString *_displayName;
    NSNumber *_isLocal;
    NSNumber *_hasCustomDescription;
    NSString *_sharedId;
    NSNumber *_matureContent;
    SOJUAdsStoryAdMetadata *_adPlacementMetadata;
    SOJUStoryThumbnails *_thumbnails;
    NSNumber *_allowStoryExplorer;
    NSString *_error;
}

+ (id)withJULiveStoryResponse:(id)arg1;
- (void).cxx_destruct;
- (id)setError:(id)arg1;
- (id)setAllowStoryExplorer:(id)arg1;
- (id)setThumbnails:(id)arg1;
- (id)setAdPlacementMetadata:(id)arg1;
- (id)setMatureContent:(id)arg1;
- (id)setSharedId:(id)arg1;
- (id)setHasCustomDescription:(id)arg1;
- (id)setIsLocal:(id)arg1;
- (id)setDisplayName:(id)arg1;
- (id)setStories:(id)arg1;
- (id)setUsername:(id)arg1;
- (id)build;

@end
