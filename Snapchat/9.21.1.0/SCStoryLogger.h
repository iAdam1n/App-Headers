//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface SCStoryLogger : NSObject
{
    NSMutableSet *_viewedStoriesUsernames;
    double _timeOfViewingStories;
}

+ (id)sharedInstance;
@property(nonatomic) double timeOfViewingStories; // @synthesize timeOfViewingStories=_timeOfViewingStories;
@property(retain, nonatomic) NSMutableSet *viewedStoriesUsernames; // @synthesize viewedStoriesUsernames=_viewedStoriesUsernames;
- (void).cxx_destruct;
- (void)logDownloadStoryEnd:(id)arg1 success:(_Bool)arg2 numBytes:(unsigned long long)arg3;
- (void)logDownloadStoryStart:(id)arg1;
- (void)logViewStoryEnd:(id)arg1;
- (void)logViewStoryStart:(id)arg1 initialView:(_Bool)arg2;
- (void)logStartViewingFriendStories:(id)arg1 type:(long long)arg2;
- (void)logPostStoryFailed:(id)arg1;
- (void)logPostStorySuccess:(id)arg1 postingType:(unsigned long long)arg2;
- (void)logPostStory:(id)arg1 postingType:(unsigned long long)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (id)init;

@end
