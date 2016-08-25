/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:21:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6DE74A4E-11EF-47B8-8E27-4C42F9CB282C/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReactiveViewModel/RVMViewModel.h>

@class PLVUserPreferences, NSMutableArray, RACSignal;

@interface PLVQueryListViewModel : RVMViewModel {

	PLVUserPreferences* _userPreferences;
	NSMutableArray* _networks;
	RACSignal* _updatedContentSignal;

}

@property (nonatomic,readonly) PLVUserPreferences * userPreferences;                //@synthesize userPreferences=_userPreferences - In the implementation block
@property (nonatomic,retain) NSMutableArray * networks;                             //@synthesize networks=_networks - In the implementation block
@property (nonatomic,readonly) RACSignal * updatedContentSignal;                    //@synthesize updatedContentSignal=_updatedContentSignal - In the implementation block
@property (nonatomic,readonly) unsigned long long totalUnreadMentions; 
-(RACSignal *)updatedContentSignal;
-(long long)numberOfNetworks;
-(long long)numberOfQueriesInNetwork:(long long)arg1 ;
-(id)titleForNetwork:(long long)arg1 ;
-(void)deleteQueryAtIndexPath:(id)arg1 ;
-(id)titleForQueryAtIndexPath:(id)arg1 ;
-(BOOL)queryAtIndexPathIsChannel:(id)arg1 ;
-(unsigned long long)queryUnreadCountAtIndexPath:(id)arg1 ;
-(unsigned long long)queryMentionCountAtIndexPath:(id)arg1 ;
-(id)signalForQueryUnreadCountAtIndexPath:(id)arg1 ;
-(id)signalForQueryAvailabilityAtIndexPath:(id)arg1 ;
-(void)moveQueryAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(id)addNetworkViewModel;
-(id)queryDetailViewModelForIndexPath:(id)arg1 ;
-(void)addNetwork:(id)arg1 ;
-(void)expandNetworkAtIndex:(long long)arg1 ;
-(BOOL)isNetworkAtIndexCollapsed:(long long)arg1 ;
-(void)collapseNetworkAtIndex:(long long)arg1 ;
-(id)editViewModelForNetwork:(long long)arg1 ;
-(void)joinedChannel:(id)arg1 ;
-(void)privateMessage:(id)arg1 ;
-(void)nickChanged:(id)arg1 ;
-(void)noSuchNick:(id)arg1 ;
-(void)batchDidEnd:(id)arg1 ;
-(void)updateRegisteredState:(id)arg1 ;
-(unsigned long long)totalUnreadMentions;
-(void)deleteNetwork:(long long)arg1 ;
-(void)moveNetwork:(long long)arg1 toIndex:(long long)arg2 ;
-(void)dealloc;
-(id)init;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)save;
-(PLVUserPreferences *)userPreferences;
-(void)removeNetwork:(id)arg1 ;
-(NSMutableArray *)networks;
-(void)setNetworks:(NSMutableArray *)arg1 ;
@end

