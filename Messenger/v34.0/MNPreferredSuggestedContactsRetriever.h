/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNSuggestedContactsRetriever.h>
#import <Messenger/MNContactSuggestionsDelegate.h>

@protocol MNContactSuggestionsDelegate, MNSuggestedContactsRetriever;
@class NSArray, NSSet, NSString;

@interface MNPreferredSuggestedContactsRetriever : NSObject <MNSuggestedContactsRetriever, MNContactSuggestionsDelegate> {

	id<MNContactSuggestionsDelegate> _delegate;
	NSArray* _preferredContactIDs;
	NSSet* _preferredContactIDsLookup;
	id<MNSuggestedContactsRetriever> _suggestedContactsRetriever;

}

@property (nonatomic,copy) NSArray * preferredContactIDs;                                              //@synthesize preferredContactIDs=_preferredContactIDs - In the implementation block
@property (nonatomic,copy) NSSet * preferredContactIDsLookup;                                          //@synthesize preferredContactIDsLookup=_preferredContactIDsLookup - In the implementation block
@property (nonatomic,retain) id<MNSuggestedContactsRetriever> suggestedContactsRetriever;              //@synthesize suggestedContactsRetriever=_suggestedContactsRetriever - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<MNContactSuggestionsDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
-(void)startRetrievingSuggestedContacts;
-(void)didRetrieveSuggestedConversationContacts:(id)arg1 ;
-(id)initWithSuggestedContactsRetriever:(id)arg1 ;
-(void)preferContactsWithIDs:(id)arg1 ;
-(NSArray *)preferredContactIDs;
-(void)setPreferredContactIDs:(NSArray *)arg1 ;
-(NSSet *)preferredContactIDsLookup;
-(void)setPreferredContactIDsLookup:(NSSet *)arg1 ;
-(id<MNSuggestedContactsRetriever>)suggestedContactsRetriever;
-(void)setSuggestedContactsRetriever:(id<MNSuggestedContactsRetriever>)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MNContactSuggestionsDelegate>)arg1 ;
-(id<MNContactSuggestionsDelegate>)delegate;
@end

