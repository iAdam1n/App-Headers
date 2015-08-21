/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSearchBaseAppSpecificConfigProtocol.h>

@class NSArray, NSString;

@interface FBSearchBaseAppSpecificConfig : NSObject <FBSearchBaseAppSpecificConfigProtocol> {

	BOOL _shouldCenterAlignVerifiedBadgeInNullState;
	BOOL _shouldUseFollowIconInsteadOfLikeIcon;
	BOOL _shouldAllowUnfollowing;
	BOOL _shouldAllowUserFollow;
	BOOL _shouldAllowUserSendFriendRequest;
	BOOL _seeMoreResultsDisabled;
	BOOL _shouldAllowSearchMessagingInlineAction;
	BOOL _graphSearchEnablePublicPostsOnly;
	NSArray* _graphSearchKeywordResultsFilterNamesArray;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL shouldCenterAlignVerifiedBadgeInNullState;                 //@synthesize shouldCenterAlignVerifiedBadgeInNullState=_shouldCenterAlignVerifiedBadgeInNullState - In the implementation block
@property (assign,nonatomic) BOOL shouldUseFollowIconInsteadOfLikeIcon;                      //@synthesize shouldUseFollowIconInsteadOfLikeIcon=_shouldUseFollowIconInsteadOfLikeIcon - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowUnfollowing;                                    //@synthesize shouldAllowUnfollowing=_shouldAllowUnfollowing - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowUserFollow;                                     //@synthesize shouldAllowUserFollow=_shouldAllowUserFollow - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowUserSendFriendRequest;                          //@synthesize shouldAllowUserSendFriendRequest=_shouldAllowUserSendFriendRequest - In the implementation block
@property (assign,nonatomic) BOOL seeMoreResultsDisabled;                                    //@synthesize seeMoreResultsDisabled=_seeMoreResultsDisabled - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowSearchMessagingInlineAction;                    //@synthesize shouldAllowSearchMessagingInlineAction=_shouldAllowSearchMessagingInlineAction - In the implementation block
@property (assign,nonatomic) BOOL graphSearchEnablePublicPostsOnly;                          //@synthesize graphSearchEnablePublicPostsOnly=_graphSearchEnablePublicPostsOnly - In the implementation block
@property (nonatomic,copy) NSArray * graphSearchKeywordResultsFilterNamesArray;              //@synthesize graphSearchKeywordResultsFilterNamesArray=_graphSearchKeywordResultsFilterNamesArray - In the implementation block
+(id)applicationSpecificSearchConfig;
-(void)setShouldCenterAlignVerifiedBadgeInNullState:(BOOL)arg1 ;
-(void)setShouldUseFollowIconInsteadOfLikeIcon:(BOOL)arg1 ;
-(void)setShouldAllowUnfollowing:(BOOL)arg1 ;
-(void)setShouldAllowUserFollow:(BOOL)arg1 ;
-(void)setShouldAllowUserSendFriendRequest:(BOOL)arg1 ;
-(void)setSeeMoreResultsDisabled:(BOOL)arg1 ;
-(void)setShouldAllowSearchMessagingInlineAction:(BOOL)arg1 ;
-(void)setGraphSearchEnablePublicPostsOnly:(BOOL)arg1 ;
-(void)setGraphSearchKeywordResultsFilterNamesArray:(NSArray *)arg1 ;
-(BOOL)shouldCenterAlignVerifiedBadgeInNullState;
-(BOOL)shouldUseFollowIconInsteadOfLikeIcon;
-(BOOL)shouldAllowUnfollowing;
-(BOOL)shouldAllowUserFollow;
-(BOOL)shouldAllowUserSendFriendRequest;
-(BOOL)seeMoreResultsDisabled;
-(BOOL)shouldAllowSearchMessagingInlineAction;
-(BOOL)graphSearchEnablePublicPostsOnly;
-(NSArray *)graphSearchKeywordResultsFilterNamesArray;
-(id)init;
@end

