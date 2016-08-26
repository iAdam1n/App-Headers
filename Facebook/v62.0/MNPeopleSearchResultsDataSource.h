/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <Facebook/MNPeopleSearchTableViewDataProvider.h>

@protocol MNPeopleSearchResultsDataSourceDelegate, MNPeopleSearchResultsDataSourceRTCCallButtonDataSource, MNPeopleSearchResultsDataSourceActionButtonDataSource, FBContactsSearch;
@class MNThreadParticipantNameFormatter, FBMThreadParticipantFilter, NSArray, NSString;

@interface MNPeopleSearchResultsDataSource : NSObject <UITableViewDataSource, MNPeopleSearchTableViewDataProvider> {

	BOOL _showsSectionHeaders;
	BOOL _shouldShowUsernames;
	id<MNPeopleSearchResultsDataSourceDelegate> _delegate;
	id<MNPeopleSearchResultsDataSourceRTCCallButtonDataSource> _rtcCallButtonDataSource;
	id<MNPeopleSearchResultsDataSourceActionButtonDataSource> _actionButtonDataSource;
	id<FBContactsSearch> _contactsSearch;
	MNThreadParticipantNameFormatter* _nameFormatter;
	FBMThreadParticipantFilter* _threadParticipantFilter;
	/*^block*/id _peopleCellCreationBlock;
	NSArray* _capturedSearchResultsSections;

}

@property (nonatomic,retain) id<FBContactsSearch> contactsSearch;                                                                    //@synthesize contactsSearch=_contactsSearch - In the implementation block
@property (nonatomic,retain) MNThreadParticipantNameFormatter * nameFormatter;                                                       //@synthesize nameFormatter=_nameFormatter - In the implementation block
@property (nonatomic,retain) FBMThreadParticipantFilter * threadParticipantFilter;                                                   //@synthesize threadParticipantFilter=_threadParticipantFilter - In the implementation block
@property (nonatomic,copy) id peopleCellCreationBlock;                                                                               //@synthesize peopleCellCreationBlock=_peopleCellCreationBlock - In the implementation block
@property (nonatomic,copy) NSArray * capturedSearchResultsSections;                                                                  //@synthesize capturedSearchResultsSections=_capturedSearchResultsSections - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowUsernames;                                                                             //@synthesize shouldShowUsernames=_shouldShowUsernames - In the implementation block
@property (assign,nonatomic,__weak) id<MNPeopleSearchResultsDataSourceDelegate> delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNPeopleSearchResultsDataSourceRTCCallButtonDataSource> rtcCallButtonDataSource;              //@synthesize rtcCallButtonDataSource=_rtcCallButtonDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<MNPeopleSearchResultsDataSourceActionButtonDataSource> actionButtonDataSource;                //@synthesize actionButtonDataSource=_actionButtonDataSource - In the implementation block
@property (assign,nonatomic) BOOL showsSectionHeaders;                                                                               //@synthesize showsSectionHeaders=_showsSectionHeaders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_sectionToContactSectionMapping;
-(long long)searchSectionForTableSection:(long long)arg1 ;
-(NSArray *)capturedSearchResultsSections;
-(BOOL)_hasPendingRequestForPreviousSections:(long long)arg1 ;
-(id)resultForIndexPath:(id)arg1 ;
-(void)setCapturedSearchResultsSections:(NSArray *)arg1 ;
-(unsigned long long)_resultTypeForSection:(long long)arg1 ;
-(long long)_numberOfItemsInSectionAtIndex:(long long)arg1 ;
-(BOOL)_shouldShowSeparatorForCellAtIndexPath:(id)arg1 ;
-(void)_updateCellButtons:(id)arg1 forContact:(id)arg2 ;
-(BOOL)_isLastRowInContactSearchSection:(id)arg1 indexPath:(id)arg2 ;
-(BOOL)_hasRowsInContactSearchBelowIndexPath:(id)arg1 indexPath:(id)arg2 ;
-(long long)absoluteRowIndexForIndexPath:(id)arg1 ;
-(unsigned long long)peopleCount;
-(id)conversationInitiatorIdentifier:(long long)arg1 ;
-(id)initWithContactSearch:(id)arg1 shouldShowUsernames:(BOOL)arg2 nameFormatter:(id)arg3 threadParticipantFilter:(id)arg4 peopleCellCreationBlock:(/*^block*/id)arg5 ;
-(void)captureSearchResults;
-(void)updateAccessoryTypeForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)updateActionButtonEnabledStateForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setCountsInAccessibilityController:(id)arg1 ;
-(id)getFBIdsForAllSearchResults;
-(id<MNPeopleSearchResultsDataSourceRTCCallButtonDataSource>)rtcCallButtonDataSource;
-(void)setRtcCallButtonDataSource:(id<MNPeopleSearchResultsDataSourceRTCCallButtonDataSource>)arg1 ;
-(id<MNPeopleSearchResultsDataSourceActionButtonDataSource>)actionButtonDataSource;
-(void)setActionButtonDataSource:(id<MNPeopleSearchResultsDataSourceActionButtonDataSource>)arg1 ;
-(id<FBContactsSearch>)contactsSearch;
-(void)setContactsSearch:(id<FBContactsSearch>)arg1 ;
-(void)setNameFormatter:(MNThreadParticipantNameFormatter *)arg1 ;
-(FBMThreadParticipantFilter *)threadParticipantFilter;
-(void)setThreadParticipantFilter:(FBMThreadParticipantFilter *)arg1 ;
-(id)peopleCellCreationBlock;
-(void)setPeopleCellCreationBlock:(id)arg1 ;
-(BOOL)shouldShowUsernames;
-(void)setDelegate:(id<MNPeopleSearchResultsDataSourceDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(id<MNPeopleSearchResultsDataSourceDelegate>)delegate;
-(MNThreadParticipantNameFormatter *)nameFormatter;
-(id)titleForHeaderInSection:(long long)arg1 ;
-(void)setShowsSectionHeaders:(BOOL)arg1 ;
-(BOOL)showsSectionHeaders;
@end
