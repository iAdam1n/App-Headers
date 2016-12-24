/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosVideoCommentsUniverseExperimentContext : FBExperimentContext {

	BOOL _show_comment_indicator_in_channel_feed;
	BOOL _show_typing_indicator_in_channel_feed;

}

@property (assign,nonatomic) BOOL show_comment_indicator_in_channel_feed;              //@synthesize show_comment_indicator_in_channel_feed=_show_comment_indicator_in_channel_feed - In the implementation block
@property (assign,nonatomic) BOOL show_typing_indicator_in_channel_feed;               //@synthesize show_typing_indicator_in_channel_feed=_show_typing_indicator_in_channel_feed - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)show_comment_indicator_in_channel_feed;
-(BOOL)show_typing_indicator_in_channel_feed;
-(void)setShow_comment_indicator_in_channel_feed:(BOOL)arg1 ;
-(void)setShow_typing_indicator_in_channel_feed:(BOOL)arg1 ;
@end
