/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBNavigationConfig : NSObject {

	BOOL _shouldShowSearchButton;
	BOOL _shouldShowFollowNuxIfApplicable;
	BOOL _shouldShowMentionsLiveTabIfApplicable;
	BOOL _shouldShowVideoHomeNux;

}

@property (assign,nonatomic) BOOL shouldShowSearchButton;                             //@synthesize shouldShowSearchButton=_shouldShowSearchButton - In the implementation block
@property (assign,nonatomic) BOOL shouldShowFollowNuxIfApplicable;                    //@synthesize shouldShowFollowNuxIfApplicable=_shouldShowFollowNuxIfApplicable - In the implementation block
@property (assign,nonatomic) BOOL shouldShowMentionsLiveTabIfApplicable;              //@synthesize shouldShowMentionsLiveTabIfApplicable=_shouldShowMentionsLiveTabIfApplicable - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowVideoHomeNux;                           //@synthesize shouldShowVideoHomeNux=_shouldShowVideoHomeNux - In the implementation block
-(BOOL)shouldShowMentionsLiveTabIfApplicable;
-(BOOL)shouldShowVideoHomeNux;
-(BOOL)shouldShowSearchButton;
-(BOOL)shouldShowFollowNuxIfApplicable;
-(id)initWithShouldShowSearchButton:(BOOL)arg1 shouldShowFollowNuxIfApplicable:(BOOL)arg2 shouldShowMentionsLiveTabIfApplicable:(BOOL)arg3 shouldShowVideoHomeNux:(BOOL)arg4 ;
-(void)setShouldShowSearchButton:(BOOL)arg1 ;
-(void)setShouldShowFollowNuxIfApplicable:(BOOL)arg1 ;
-(void)setShouldShowMentionsLiveTabIfApplicable:(BOOL)arg1 ;
@end
