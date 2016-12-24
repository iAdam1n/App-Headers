/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray, NSDictionary;


@protocol FBNuxPresenter <NSObject>
@property (nonatomic,copy,readonly) NSString * nuxID; 
@property (nonatomic,copy,readonly) NSArray * triggerIDs; 
@property (nonatomic,readonly) int nuxType; 
@property (assign,nonatomic) id<FBNuxDelegate> nuxCoordinator; 
@property (nonatomic,copy,readonly) NSString * nuxAnalyticsModule; 
@property (nonatomic,copy,readonly) NSDictionary * extraLogData; 
@property (nonatomic,copy) id onClosedBlock; 
@optional
-(void)prepareWithTriggerContext:(id)arg1;
-(Class)serverContextClass;
-(void)prepareWithServerContext:(id)arg1;
-(void)didPrepareWithServerContext;
-(unsigned long long)presenterOptions;
-(/*^block*/id)shouldPresentNuxBlock;
-(NSString *)nuxAnalyticsModule;
-(NSDictionary *)extraLogData;
-(id)onClosedBlock;
-(void)setOnClosedBlock:(/*^block*/id)arg1;
-(id)versionID;

@required
-(id)viewControllerForPresentation;
-(id<FBNuxDelegate>)nuxCoordinator;
-(int)nuxStateForTriggerID:(id)arg1 triggerContext:(id)arg2;
-(NSString *)nuxID;
-(NSArray *)triggerIDs;
-(int)nuxType;
-(void)setNuxCoordinator:(id)arg1;

@end
