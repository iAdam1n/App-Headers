//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADClickTrackerDelegate.h"

@class NSMutableSet, NSString;

@interface GADClickTrackerCollection : NSObject <GADClickTrackerDelegate>
{
    NSMutableSet *_trackers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableSet *trackers; // @synthesize trackers=_trackers;
- (void).cxx_destruct;
- (void)tracker:(id)arg1 didFailWithError:(id)arg2;
- (void)tracker:(id)arg1 didRedirect:(id)arg2;
- (void)cleanupTrackers;
- (void)trackURL:(id)arg1;
- (void)trackURL:(id)arg1 cacheEnabled:(_Bool)arg2;
- (void)trackURLs:(id)arg1 cacheEnabled:(_Bool)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
