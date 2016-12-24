/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FIGContrastExperimentContext : FBExperimentContext {

	BOOL _useUi30;
	BOOL _useUi50;
	BOOL _useUi80;

}

@property (assign,nonatomic) BOOL useUi30;              //@synthesize useUi30=_useUi30 - In the implementation block
@property (assign,nonatomic) BOOL useUi50;              //@synthesize useUi50=_useUi50 - In the implementation block
@property (assign,nonatomic) BOOL useUi80;              //@synthesize useUi80=_useUi80 - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)useUi30;
-(BOOL)useUi50;
-(BOOL)useUi80;
-(void)setUseUi30:(BOOL)arg1 ;
-(void)setUseUi50:(BOOL)arg1 ;
-(void)setUseUi80:(BOOL)arg1 ;
@end
