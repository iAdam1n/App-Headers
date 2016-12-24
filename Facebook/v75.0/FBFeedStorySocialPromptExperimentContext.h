/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface FBFeedStorySocialPromptExperimentContext : FBExperimentContext {

	NSString* _buttonTitleInsideAttachment;
	NSString* _buttonTitleUnderFeedStory;
	BOOL _promptUnderSocialPromptStory;
	BOOL _showAfterInteraction;

}

@property (nonatomic,copy) NSString * buttonTitleInsideAttachment;              //@synthesize buttonTitleInsideAttachment=_buttonTitleInsideAttachment - In the implementation block
@property (nonatomic,copy) NSString * buttonTitleUnderFeedStory;                //@synthesize buttonTitleUnderFeedStory=_buttonTitleUnderFeedStory - In the implementation block
@property (assign,nonatomic) BOOL promptUnderSocialPromptStory;                 //@synthesize promptUnderSocialPromptStory=_promptUnderSocialPromptStory - In the implementation block
@property (assign,nonatomic) BOOL showAfterInteraction;                         //@synthesize showAfterInteraction=_showAfterInteraction - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(NSString *)buttonTitleInsideAttachment;
-(NSString *)buttonTitleUnderFeedStory;
-(BOOL)showAfterInteraction;
-(void)setButtonTitleInsideAttachment:(NSString *)arg1 ;
-(void)setShowAfterInteraction:(BOOL)arg1 ;
-(void)setButtonTitleUnderFeedStory:(NSString *)arg1 ;
-(BOOL)promptUnderSocialPromptStory;
-(void)setPromptUnderSocialPromptStory:(BOOL)arg1 ;
@end
