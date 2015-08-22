/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTwitterPageableUserList.h>

@class NSArray, TFNTwitterAccount, TFNTwitterUser, NSString;

@interface TFNTwitterUserList : NSObject <TFNTwitterPageableUserList> {

	struct {
		unsigned isLoading : 1;
		unsigned isAtEnd : 1;
		unsigned loadMoreLessThanMinCount : 5;
	}  _flags;
	BOOL _shouldSortUsersByFullName;
	NSArray* _users;
	TFNTwitterAccount* _account;
	TFNTwitterUser* _user;
	NSString* _cursor;

}

@property (nonatomic,retain) NSArray * users;                              //@synthesize users=_users - In the implementation block
@property (nonatomic,retain) TFNTwitterAccount * account;                  //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) TFNTwitterUser * user;                        //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSString * cursor;                          //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,readonly) NSString * emptyStreamMessage; 
@property (nonatomic,readonly) NSString * emptyStreamSubtext; 
@property (assign,nonatomic) BOOL shouldSortUsersByFullName;               //@synthesize shouldSortUsersByFullName=_shouldSortUsersByFullName - In the implementation block
@property (nonatomic,readonly) BOOL hasInFlightRequests; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)markAsEmpty;
-(void)seedUsers:(id)arg1 ;
-(void)_loadMore;
-(void)insertUser:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSString *)emptyStreamMessage;
-(void)markAtEnd;
-(NSString *)emptyStreamSubtext;
-(void)willReceiveUsers:(id)arg1 ;
-(void)receiveUsers:(BOOL)arg1 obj:(id)arg2 error:(id)arg3 ;
-(unsigned long long)countPerPageRequest;
-(void)didAddUsers:(id)arg1 ;
-(void)_receiveUsersArray:(BOOL)arg1 usersOrRecommendations:(id)arg2 error:(id)arg3 ;
-(BOOL)shouldSortUsersByFullName;
-(id)_userForUserOrRecommendation:(id)arg1 ;
-(void)_addUsersOrRecommendations:(id)arg1 ;
-(id)_dummyUserOfType:(long long)arg1 ;
-(void)_markAtEnd;
-(void)receiveUserRecommendations:(BOOL)arg1 obj:(id)arg2 error:(id)arg3 ;
-(void)receiveFriends:(BOOL)arg1 obj:(id)arg2 error:(id)arg3 ;
-(void)resetListStateForLoadMore;
-(BOOL)hasInFlightRequests;
-(void)setShouldSortUsersByFullName:(BOOL)arg1 ;
-(void)loadMore;
-(BOOL)isAtEnd;
-(NSString *)cursor;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterUser *)user;
-(void)setUser:(TFNTwitterUser *)arg1 ;
-(NSArray *)users;
-(void)removeUser:(id)arg1 ;
-(void)setUsers:(NSArray *)arg1 ;
@end
