/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:49 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSDate;

@interface PTHTweetbotRelationship : NSObject {

	BOOL _blocked;
	BOOL _followedByCurrentUser;
	BOOL _followsCurrentUser;
	BOOL _canDirectMessage;
	BOOL _showsRetweets;
	NSDate* _updateDate;

}

@property (nonatomic,readonly) BOOL isCurrent; 
@property (assign,getter=isBlocked,nonatomic) BOOL blocked;                                          //@synthesize blocked=_blocked - In the implementation block
@property (assign,getter=isFollowedByCurrentUser,nonatomic) BOOL followedByCurrentUser;              //@synthesize followedByCurrentUser=_followedByCurrentUser - In the implementation block
@property (assign,nonatomic) BOOL followsCurrentUser;                                                //@synthesize followsCurrentUser=_followsCurrentUser - In the implementation block
@property (assign,nonatomic) BOOL canDirectMessage;                                                  //@synthesize canDirectMessage=_canDirectMessage - In the implementation block
@property (assign,nonatomic) BOOL showsRetweets;                                                     //@synthesize showsRetweets=_showsRetweets - In the implementation block
@property (nonatomic,retain) NSDate * updateDate;                                                    //@synthesize updateDate=_updateDate - In the implementation block
-(BOOL)canDirectMessage;
-(BOOL)isFollowedByCurrentUser;
-(BOOL)showsRetweets;
-(BOOL)followsCurrentUser;
-(void)setFollowedByCurrentUser:(BOOL)arg1 ;
-(void)setFollowsCurrentUser:(BOOL)arg1 ;
-(void)setCanDirectMessage:(BOOL)arg1 ;
-(void)setShowsRetweets:(BOOL)arg1 ;
-(BOOL)isBlocked;
-(void)setBlocked:(BOOL)arg1 ;
-(BOOL)isCurrent;
-(NSDate *)updateDate;
-(void)setUpdateDate:(NSDate *)arg1 ;
@end
