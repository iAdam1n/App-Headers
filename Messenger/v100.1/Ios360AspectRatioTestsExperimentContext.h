/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface Ios360AspectRatioTestsExperimentContext : FBExperimentContext {

	double _channels_aspect_ratio;
	double _feed_aspect_ratio;
	BOOL _override_for_sponsored_contents;

}

@property (assign,nonatomic) double channels_aspect_ratio;                      //@synthesize channels_aspect_ratio=_channels_aspect_ratio - In the implementation block
@property (assign,nonatomic) double feed_aspect_ratio;                          //@synthesize feed_aspect_ratio=_feed_aspect_ratio - In the implementation block
@property (assign,nonatomic) BOOL override_for_sponsored_contents;              //@synthesize override_for_sponsored_contents=_override_for_sponsored_contents - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(double)channels_aspect_ratio;
-(double)feed_aspect_ratio;
-(BOOL)override_for_sponsored_contents;
-(void)setChannels_aspect_ratio:(double)arg1 ;
-(void)setFeed_aspect_ratio:(double)arg1 ;
-(void)setOverride_for_sponsored_contents:(BOOL)arg1 ;
@end
