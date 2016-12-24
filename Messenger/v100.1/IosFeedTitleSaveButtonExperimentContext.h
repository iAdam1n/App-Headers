/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface IosFeedTitleSaveButtonExperimentContext : FBExperimentContext {

	NSString* _save_title_button_nux_text;
	BOOL _save_title_button;

}

@property (nonatomic,copy) NSString * save_title_button_nux_text;              //@synthesize save_title_button_nux_text=_save_title_button_nux_text - In the implementation block
@property (assign,nonatomic) BOOL save_title_button;                           //@synthesize save_title_button=_save_title_button - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)save_title_button;
-(NSString *)save_title_button_nux_text;
-(void)setSave_title_button_nux_text:(NSString *)arg1 ;
-(void)setSave_title_button:(BOOL)arg1 ;
@end
