//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "SCAdOwnerProtocol.h"
#import "SCMediaOwnerProtocol.h"

@class NSDate, NSDictionary, NSMutableSet, NSString, NSURL, SCDiscoverChannels, SCDiscoverEdition, SCSponsoredSlug, UIColor;

@interface SCDiscoverChannel : NSObject <NSCoding, SCAdOwnerProtocol, SCMediaOwnerProtocol>
{
    _Bool _sponsored;
    SCDiscoverChannels *_channels;
    NSString *_displayName;
    NSString *_name;
    NSString *_uniqueName;
    UIColor *_primaryPublisherColor;
    UIColor *_secondaryPublisherColor;
    unsigned long long _storiesViewPosition;
    long long _promotedViewPosition;
    SCSponsoredSlug *_sponsoredSlug;
    unsigned long long _filledIconMediaState;
    NSURL *_filledIconURL;
    unsigned long long _invertedIconMediaState;
    NSURL *_invertedIconURL;
    unsigned long long _loadingIconMediaState;
    NSURL *_loadingIconURL;
    unsigned long long _introMovieMediaState;
    NSString *_introMovieEndpoint;
    NSString *_introMovieAdUnitId;
    NSString *_introMovieAdRequestClientId;
    NSDictionary *_introMovieTargetingParams;
    SCDiscoverEdition *_archivedEdition;
    SCDiscoverEdition *_currentEdition;
    NSDate *_legacyLastViewedDate;
    NSMutableSet *_legacyRecentViewDates;
    NSString *_introMovieFileName;
    SCDiscoverEdition *_displayedOutdatedEdition;
}

+ (void)checkIntegrityOfChannel:(id)arg1 withJSONDictionary:(id)arg2;
+ (id)descriptionForViewContext:(unsigned long long)arg1;
@property(retain, nonatomic) SCDiscoverEdition *displayedOutdatedEdition; // @synthesize displayedOutdatedEdition=_displayedOutdatedEdition;
@property(copy, nonatomic) NSString *introMovieFileName; // @synthesize introMovieFileName=_introMovieFileName;
@property(retain, nonatomic) NSMutableSet *legacyRecentViewDates; // @synthesize legacyRecentViewDates=_legacyRecentViewDates;
@property(retain, nonatomic) NSDate *legacyLastViewedDate; // @synthesize legacyLastViewedDate=_legacyLastViewedDate;
@property(retain, nonatomic) SCDiscoverEdition *currentEdition; // @synthesize currentEdition=_currentEdition;
@property(retain, nonatomic) SCDiscoverEdition *archivedEdition; // @synthesize archivedEdition=_archivedEdition;
@property(copy, nonatomic) NSDictionary *introMovieTargetingParams; // @synthesize introMovieTargetingParams=_introMovieTargetingParams;
@property(copy, nonatomic) NSString *introMovieAdRequestClientId; // @synthesize introMovieAdRequestClientId=_introMovieAdRequestClientId;
@property(copy, nonatomic) NSString *introMovieAdUnitId; // @synthesize introMovieAdUnitId=_introMovieAdUnitId;
@property(copy, nonatomic) NSString *introMovieEndpoint; // @synthesize introMovieEndpoint=_introMovieEndpoint;
@property(nonatomic) unsigned long long introMovieMediaState; // @synthesize introMovieMediaState=_introMovieMediaState;
@property(retain, nonatomic) NSURL *loadingIconURL; // @synthesize loadingIconURL=_loadingIconURL;
@property(nonatomic) unsigned long long loadingIconMediaState; // @synthesize loadingIconMediaState=_loadingIconMediaState;
@property(retain, nonatomic) NSURL *invertedIconURL; // @synthesize invertedIconURL=_invertedIconURL;
@property(nonatomic) unsigned long long invertedIconMediaState; // @synthesize invertedIconMediaState=_invertedIconMediaState;
@property(retain, nonatomic) NSURL *filledIconURL; // @synthesize filledIconURL=_filledIconURL;
@property(nonatomic) unsigned long long filledIconMediaState; // @synthesize filledIconMediaState=_filledIconMediaState;
@property(readonly, nonatomic) SCSponsoredSlug *sponsoredSlug; // @synthesize sponsoredSlug=_sponsoredSlug;
@property(readonly, nonatomic, getter=isSponsored) _Bool sponsored; // @synthesize sponsored=_sponsored;
@property(nonatomic) long long promotedViewPosition; // @synthesize promotedViewPosition=_promotedViewPosition;
@property(nonatomic) unsigned long long storiesViewPosition; // @synthesize storiesViewPosition=_storiesViewPosition;
@property(retain, nonatomic) UIColor *secondaryPublisherColor; // @synthesize secondaryPublisherColor=_secondaryPublisherColor;
@property(retain, nonatomic) UIColor *primaryPublisherColor; // @synthesize primaryPublisherColor=_primaryPublisherColor;
@property(copy, nonatomic) NSString *uniqueName; // @synthesize uniqueName=_uniqueName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) __weak SCDiscoverChannels *channels; // @synthesize channels=_channels;
- (void).cxx_destruct;
- (id)lastViewedDate;
- (id)recentViewOpportunityDates;
- (id)recentViewDates;
- (id)mediaFileNames;
- (id)cacheMediaIds;
- (id)cacheAdIds;
- (id)requestContexts;
- (id)cacheKeyForIconType:(unsigned long long)arg1;
- (void)validateIntroMovieOnDisk;
- (id)introMovieLocalURL;
- (void)iconWithType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)currentIntroMovieAdRequestClientId;
- (_Bool)mediaIsLoaded;
- (_Bool)mediaIsLoading;
- (_Bool)isHomepageIconMediaLoaded;
- (void)handleFetchedIntroMovieWithSuccess:(_Bool)arg1;
- (void)fetchIntroMovieIfNecessaryUserInitiated:(_Bool)arg1 context:(unsigned long long)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)fetchIntroMovieIfNecessary;
- (void)fetchMediaIfNecessaryForIconType:(unsigned long long)arg1 userInitiated:(_Bool)arg2 context:(unsigned long long)arg3;
- (void)fetchIconMediaIfNecessaryUserInitiated:(_Bool)arg1 context:(unsigned long long)arg2;
- (void)fetchIconMediaIfNecessary;
- (void)setIconMediaState:(unsigned long long)arg1 iconType:(unsigned long long)arg2;
- (void)didStartViewing;
- (void)didFinishViewing;
- (void)prepareToStartViewing;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
