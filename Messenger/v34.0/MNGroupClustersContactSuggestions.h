/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNFetchGroupClustersListener.h>
#import <Messenger/MNContactSuggestionsDelegate.h>
#import <Messenger/MNSuggestedContactsRetriever.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNSuggestedContactsRetriever, MNContactSuggestionsDelegate;
@class FBSyncStore, MNGroupClustersManager, NSMutableArray, NSString;

@interface MNGroupClustersContactSuggestions : NSObject <MNFetchGroupClustersListener, MNContactSuggestionsDelegate, MNSuggestedContactsRetriever, FBClassProvidable> {

	FBSyncStore* _syncStore;
	MNGroupClustersManager* _groupClustersManager;
	id<MNSuggestedContactsRetriever> _contactSuggestions;
	NSMutableArray* _contactsInSections;
	NSMutableArray* _sectionTitles;
	NSMutableArray* _sectionScores;
	id<MNContactSuggestionsDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<MNContactSuggestionsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)clusterAnalyticsCodeForSectionTitle:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)startRetrievingSuggestedContacts;
-(void)didRetrieveSuggestedConversationContacts:(id)arg1 ;
-(void)didFetchGroupClusters:(id)arg1 ;
-(void)_didRetrieveGroupClusters;
-(id)_clustersByType;
-(id)_contactsForCluster:(id)arg1 personByPersonId:(id)arg2 ;
-(id)_sectionTitleForCluster:(id)arg1 type:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<MNContactSuggestionsDelegate>)arg1 ;
-(id<MNContactSuggestionsDelegate>)delegate;
@end

