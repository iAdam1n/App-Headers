/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBStructuredSurveyUIConfig.h>

@interface FBRapidFeedbackConfig : FBStructuredSurveyUIConfig {

	BOOL _expandedThankYouController;
	BOOL _showSurveyHeader;
	BOOL _shouldDismissSurveyWithSubmitButton;
	BOOL _shouldIgnoreSubmitButton;
	BOOL _commentAfterThankyou;

}

@property (assign,nonatomic) BOOL expandedThankYouController;                       //@synthesize expandedThankYouController=_expandedThankYouController - In the implementation block
@property (assign,nonatomic) BOOL showSurveyHeader;                                 //@synthesize showSurveyHeader=_showSurveyHeader - In the implementation block
@property (assign,nonatomic) BOOL shouldDismissSurveyWithSubmitButton;              //@synthesize shouldDismissSurveyWithSubmitButton=_shouldDismissSurveyWithSubmitButton - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreSubmitButton;                         //@synthesize shouldIgnoreSubmitButton=_shouldIgnoreSubmitButton - In the implementation block
@property (assign,nonatomic) BOOL commentAfterThankyou;                             //@synthesize commentAfterThankyou=_commentAfterThankyou - In the implementation block
+(id)defaultConfig;
-(BOOL)shouldDismissSurveyWithSubmitButton;
-(BOOL)shouldIgnoreSubmitButton;
-(BOOL)showSurveyHeader;
-(BOOL)expandedThankYouController;
-(BOOL)commentAfterThankyou;
-(void)setExpandedThankYouController:(BOOL)arg1 ;
-(void)setShowSurveyHeader:(BOOL)arg1 ;
-(void)setShouldDismissSurveyWithSubmitButton:(BOOL)arg1 ;
-(void)setCommentAfterThankyou:(BOOL)arg1 ;
-(void)setShouldIgnoreSubmitButton:(BOOL)arg1 ;
@end
