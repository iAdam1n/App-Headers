/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBRtcOpusBitrateExperimentContext : FBExperimentContext {

	int __v;
	int _mono;
	int _stereo;

}

@property (nonatomic,readonly) int _v;                  //@synthesize _v=__v - In the implementation block
@property (nonatomic,readonly) int mono;                //@synthesize mono=_mono - In the implementation block
@property (nonatomic,readonly) int stereo;              //@synthesize stereo=_stereo - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(int)mono;
-(int)stereo;
-(int)_v;
@end
