/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SLKDataSourceDelegate <NSObject>
@optional
-(void)dataSourceWillChangeContent:(id)arg1;
-(void)dataSourceDidChangeContent:(id)arg1;
-(void)dataSource:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
-(void)dataSourceDidReloadAllData:(id)arg1;

@required
-(void)dataSourceCompletedInitialFetch:(id)arg1;

@end

