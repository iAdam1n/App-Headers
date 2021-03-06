/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFacecastWithLoggerDataSource;
@interface FBFacecastWithLogger : NSObject {

	id<FBFacecastWithLoggerDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<FBFacecastWithLoggerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)_logEvent:(id)arg1 extraBlock:(/*^block*/id)arg2 ;
-(id)_commonExtraDictionary;
-(void)logLiveWithEligibilityForCallWithViewerID:(id)arg1 andHostID:(id)arg2 isEligible:(BOOL)arg3 reasonIfNotEligible:(id)arg4 ;
-(void)setDataSource:(id<FBFacecastWithLoggerDataSource>)arg1 ;
-(id<FBFacecastWithLoggerDataSource>)dataSource;
@end

