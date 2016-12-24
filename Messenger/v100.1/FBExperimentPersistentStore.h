/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:27 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBExperimentManagerPolicy;
@interface FBExperimentPersistentStore : NSObject {

	id<FBExperimentManagerPolicy> _policy;

}
-(void)loadExperimentsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)loadOverridesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)persistExperimentOverrideData:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)persistExperimentCatalog:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithPolicy:(id)arg1 ;
@end
