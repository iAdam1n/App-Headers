//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Story;

@protocol SCStoryViewingEventListener <NSObject>
- (void)viewedStory:(Story *)arg1 exitReason:(long long)arg2;
- (void)displayedStory:(Story *)arg1 timeLeft:(double)arg2;
@end

