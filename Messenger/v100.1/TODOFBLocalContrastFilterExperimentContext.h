/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface TODOFBLocalContrastFilterExperimentContext : FBExperimentContext {

	NSString* _filterParams;
	BOOL _enabled;
	BOOL _replaceAuto;

}

@property (nonatomic,copy) NSString * filterParams;              //@synthesize filterParams=_filterParams - In the implementation block
@property (assign,nonatomic) BOOL enabled;                       //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL replaceAuto;                   //@synthesize replaceAuto=_replaceAuto - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(NSString *)filterParams;
-(BOOL)replaceAuto;
-(void)setFilterParams:(NSString *)arg1 ;
-(void)setReplaceAuto:(BOOL)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
@end
