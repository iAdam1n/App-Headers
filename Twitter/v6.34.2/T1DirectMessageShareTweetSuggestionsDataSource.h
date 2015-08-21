/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class TFNTwitterStatus, NSArray, TFNTwitterAccount;

@interface T1DirectMessageShareTweetSuggestionsDataSource : NSObject {

	TFNTwitterStatus* _status;
	NSArray* _suggestedRecentUsersAndConversations;
	NSArray* _suggestedUsers;
	TFNTwitterAccount* _account;

}

@property (nonatomic,readonly) TFNTwitterStatus * status;                                        //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) NSArray * suggestedRecentUsersAndConversations;              //@synthesize suggestedRecentUsersAndConversations=_suggestedRecentUsersAndConversations - In the implementation block
@property (nonatomic,copy,readonly) NSArray * suggestedUsers;                                    //@synthesize suggestedUsers=_suggestedUsers - In the implementation block
@property (nonatomic,readonly) TFNTwitterAccount * account;                                      //@synthesize account=_account - In the implementation block
+(unsigned long long)maximumCountOfRecentSuggestions;
-(id)initWithStatus:(id)arg1 account:(id)arg2 ;
-(NSArray *)suggestedRecentUsersAndConversations;
-(NSArray *)suggestedUsers;
-(void)_updateSuggestedRecentUsersAndConversations;
-(void)_updateSuggestedUsers;
-(id)_excludedRecentConversationsByIDWithLoggedMessages:(id)arg1 ;
-(id)_typeaheadSuggestions;
-(TFNTwitterStatus *)status;
-(TFNTwitterAccount *)account;
@end

