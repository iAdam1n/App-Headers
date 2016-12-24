/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface IosComposerPromptsUniverseExperimentContext : FBExperimentContext {

	BOOL _inline_composer_prompts_prompt_enable_hide_in_sprout;
	NSString* _inline_composer_prompts_prompt_close_title_message;
	double _inline_composer_prompts_prompt_wait_time_interval_after_dismissal;
	long long _inline_composer_prompts_prompt_photo_reminder_maximum_display_time;
	NSString* _inline_composer_prompts_prompt_hide_title_message;
	BOOL _inline_composer_prompts_prompt_close_button_hides_prompt;
	BOOL _inline_composer_prompts_prompt_disable_cta_button;

}

@property (assign,nonatomic) BOOL inline_composer_prompts_prompt_enable_hide_in_sprout;                                 //@synthesize inline_composer_prompts_prompt_enable_hide_in_sprout=_inline_composer_prompts_prompt_enable_hide_in_sprout - In the implementation block
@property (nonatomic,copy) NSString * inline_composer_prompts_prompt_close_title_message;                               //@synthesize inline_composer_prompts_prompt_close_title_message=_inline_composer_prompts_prompt_close_title_message - In the implementation block
@property (assign,nonatomic) double inline_composer_prompts_prompt_wait_time_interval_after_dismissal;                  //@synthesize inline_composer_prompts_prompt_wait_time_interval_after_dismissal=_inline_composer_prompts_prompt_wait_time_interval_after_dismissal - In the implementation block
@property (assign,nonatomic) long long inline_composer_prompts_prompt_photo_reminder_maximum_display_time;              //@synthesize inline_composer_prompts_prompt_photo_reminder_maximum_display_time=_inline_composer_prompts_prompt_photo_reminder_maximum_display_time - In the implementation block
@property (nonatomic,copy) NSString * inline_composer_prompts_prompt_hide_title_message;                                //@synthesize inline_composer_prompts_prompt_hide_title_message=_inline_composer_prompts_prompt_hide_title_message - In the implementation block
@property (assign,nonatomic) BOOL inline_composer_prompts_prompt_close_button_hides_prompt;                             //@synthesize inline_composer_prompts_prompt_close_button_hides_prompt=_inline_composer_prompts_prompt_close_button_hides_prompt - In the implementation block
@property (assign,nonatomic) BOOL inline_composer_prompts_prompt_disable_cta_button;                                    //@synthesize inline_composer_prompts_prompt_disable_cta_button=_inline_composer_prompts_prompt_disable_cta_button - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)inline_composer_prompts_prompt_close_button_hides_prompt;
-(NSString *)inline_composer_prompts_prompt_close_title_message;
-(BOOL)inline_composer_prompts_prompt_disable_cta_button;
-(BOOL)inline_composer_prompts_prompt_enable_hide_in_sprout;
-(NSString *)inline_composer_prompts_prompt_hide_title_message;
-(long long)inline_composer_prompts_prompt_photo_reminder_maximum_display_time;
-(double)inline_composer_prompts_prompt_wait_time_interval_after_dismissal;
-(void)setInline_composer_prompts_prompt_enable_hide_in_sprout:(BOOL)arg1 ;
-(void)setInline_composer_prompts_prompt_close_title_message:(NSString *)arg1 ;
-(void)setInline_composer_prompts_prompt_wait_time_interval_after_dismissal:(double)arg1 ;
-(void)setInline_composer_prompts_prompt_photo_reminder_maximum_display_time:(long long)arg1 ;
-(void)setInline_composer_prompts_prompt_hide_title_message:(NSString *)arg1 ;
-(void)setInline_composer_prompts_prompt_close_button_hides_prompt:(BOOL)arg1 ;
-(void)setInline_composer_prompts_prompt_disable_cta_button:(BOOL)arg1 ;
@end
