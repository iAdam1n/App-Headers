/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface Slack.SLKLegacyMentionsDataSource : NSObject {

	 delegate;
	 mentionSections;
	 dependencies;

}

@property (assign,__weak,nonatomic) id<_TtP5Slack35SLKLegacyMentionsDataSourceDelegate_> delegate; 
-(void)refreshWithCachedMentions;
-(void)refreshWithServerMentions;
-(long long)numberOfSectionsInTableView;
-(id)init;
-(void)setDelegate:(id<_TtP5Slack35SLKLegacyMentionsDataSourceDelegate_>)arg1 ;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(id<_TtP5Slack35SLKLegacyMentionsDataSourceDelegate_>)delegate;
-(id)titleForSection:(long long)arg1 ;
-(id)initWithDependencies:(id)arg1 ;
-(id)objectAtIndexPath:(id)arg1 ;
-(void)cancelPendingRequests;
@end
