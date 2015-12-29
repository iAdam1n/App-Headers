//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewController.h"

#import "SCDiscoverChannelsStoriesOrganizerDelegate.h"
#import "SCHorizontalScrollSection.h"
#import "SCTimeProfilable.h"
#import "Subview.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class FBKVOController, NSMutableSet, NSString, SCDiscoverChannelsOrganizer;

@interface SCDiscoverChannelsCollectionViewController : UICollectionViewController <SCTimeProfilable, SCDiscoverChannelsStoriesOrganizerDelegate, SCHorizontalScrollSection, Subview, UICollectionViewDelegateFlowLayout>
{
    NSString *_selectedChannelName;
    _Bool _shouldDisplayFooterLabel;
    id <SCDiscoverChannelsCollectionViewControllerDelegate> _delegate;
    SCDiscoverChannelsOrganizer *_channelsOrganizer;
    FBKVOController *_kvoController;
    unsigned long long _context;
    NSMutableSet *_mutableVisibleChannels;
}

+ (id)profiledSelectorNames;
+ (double)discoverThumbnailCellSize;
@property(retain, nonatomic) NSMutableSet *mutableVisibleChannels; // @synthesize mutableVisibleChannels=_mutableVisibleChannels;
@property(nonatomic) unsigned long long context; // @synthesize context=_context;
@property(retain, nonatomic) FBKVOController *kvoController; // @synthesize kvoController=_kvoController;
@property(retain, nonatomic) SCDiscoverChannelsOrganizer *channelsOrganizer; // @synthesize channelsOrganizer=_channelsOrganizer;
@property(readonly, nonatomic) _Bool shouldDisplayFooterLabel; // @synthesize shouldDisplayFooterLabel=_shouldDisplayFooterLabel;
@property(nonatomic) __weak id <SCDiscoverChannelsCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)discoverChannelsStoriesOrganizer:(id)arg1 didMoveChannel:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)discoverSectionHeight;
- (void)showAlertForIntroMovieError:(id)arg1 channel:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGRect)frameForCell:(id)arg1;
- (id)visibleCellForChannel:(id)arg1;
- (void)configureCell:(id)arg1 forChannel:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (unsigned long long)indexOfVisibleCellForChannel:(id)arg1;
- (unsigned long long)indexOfChannel:(id)arg1;
- (void)deselectSelectedChannel;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)selectChannelAtIndex:(unsigned long long)arg1;
- (void)preselectChannelAtIndex:(unsigned long long)arg1;
- (id)channelsSeen;
- (void)subviewDidAppear;
- (void)viewDidLoad;
- (void)addIndividualChannelObservers:(id)arg1;
- (void)addChannelObservers:(id)arg1;
- (void)didAppStartupComplete;
- (void)dealloc;
- (id)initWithCollectionViewLayout:(id)arg1 discoverChannels:(id)arg2 channelViewContext:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
