/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack.SLKGenericTakeoverViewController.h>

@class SLKDependencies;

@interface Slack.SLKMigrationInProgressEnterpriseTakeoverViewController : Slack.SLKGenericTakeoverViewController {

	 dependencies;

}

@property (assign,__weak,nonatomic) SLKDependencies * dependencies; 
-(void)didTapButton;
-(void)pauseNetworking;
-(void)pollMigrationProgress;
-(void)migrationComplete;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(id)initWithDependencies:(id)arg1 ;
-(SLKDependencies *)dependencies;
-(double)pollingInterval;
-(void)setDependencies:(SLKDependencies *)arg1 ;
@end
