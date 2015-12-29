//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet;

@interface SCDiscoverSharedResourceManager : NSObject
{
    NSMutableSet *_freeWebViews;
    NSMutableSet *_usedWebViews;
    NSMutableDictionary *_customResources;
}

@property(retain, nonatomic) NSMutableDictionary *customResources; // @synthesize customResources=_customResources;
@property(retain, nonatomic) NSMutableSet *usedWebViews; // @synthesize usedWebViews=_usedWebViews;
@property(retain, nonatomic) NSMutableSet *freeWebViews; // @synthesize freeWebViews=_freeWebViews;
- (void).cxx_destruct;
- (id)resourceForKey:(id)arg1;
- (void)setResource:(id)arg1 forKey:(id)arg2;
- (void)addFreeWebView;
- (void)recycleWebView:(id)arg1;
- (id)availableWebView;
- (id)sharedPlayer;
- (id)init;

@end
