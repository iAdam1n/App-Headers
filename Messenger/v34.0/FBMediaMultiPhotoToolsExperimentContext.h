/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBMediaMultiPhotoToolsExperimentContext : FBExperimentContext {

	BOOL _collageEnabled;
	BOOL _loopsEnabled;
	BOOL _loopsStabilizationEnabled;

}

@property (nonatomic,readonly) BOOL collageEnabled;                         //@synthesize collageEnabled=_collageEnabled - In the implementation block
@property (nonatomic,readonly) BOOL loopsEnabled;                           //@synthesize loopsEnabled=_loopsEnabled - In the implementation block
@property (nonatomic,readonly) BOOL loopsStabilizationEnabled;              //@synthesize loopsStabilizationEnabled=_loopsStabilizationEnabled - In the implementation block
+(id)experimentName;
+(id)parameterConfigurations;
-(BOOL)collageEnabled;
-(BOOL)loopsEnabled;
-(BOOL)loopsStabilizationEnabled;
@end

