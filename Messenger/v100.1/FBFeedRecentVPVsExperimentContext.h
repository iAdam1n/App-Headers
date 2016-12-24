/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBFeedRecentVPVsExperimentContext : FBExperimentContext {

	BOOL _qid;
	BOOL _includeQidTimestamp;
	BOOL _tailLoad;
	BOOL _back;

}

@property (assign,nonatomic) BOOL qid;                              //@synthesize qid=_qid - In the implementation block
@property (assign,nonatomic) BOOL includeQidTimestamp;              //@synthesize includeQidTimestamp=_includeQidTimestamp - In the implementation block
@property (assign,nonatomic) BOOL tailLoad;                         //@synthesize tailLoad=_tailLoad - In the implementation block
@property (assign,nonatomic) BOOL back;                             //@synthesize back=_back - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)back;
-(BOOL)includeQidTimestamp;
-(BOOL)qid;
-(BOOL)tailLoad;
-(void)setQid:(BOOL)arg1 ;
-(void)setIncludeQidTimestamp:(BOOL)arg1 ;
-(void)setTailLoad:(BOOL)arg1 ;
-(void)setBack:(BOOL)arg1 ;
@end
