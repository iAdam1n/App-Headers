/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SLKRecipientsDisplayDelegate <NSObject,SLKRecipientsBarDelegate>
@optional
-(void)recipientsDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
-(void)recipientsDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2;
-(void)recipientsDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
-(void)recipientsDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2;
-(void)recipientsDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
-(void)recipientsDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2;
-(void)recipientsDisplayController:(id)arg1 didRemoveRecipient:(id)arg2;
-(id)recipientsDisplayController:(id)arg1 willAddRecipient:(id)arg2;
-(void)recipientsDisplayController:(id)arg1 didAddRecipient:(id)arg2;
-(BOOL)recipientsDisplayControllerShouldBeginSearch:(id)arg1;
-(void)recipientsDisplayControllerWillBeginSearch:(id)arg1;
-(void)recipientsDisplayControllerDidBeginSearch:(id)arg1;
-(void)recipientsDisplayControllerWillEndSearch:(id)arg1;
-(void)recipientsDisplayControllerDidEndSearch:(id)arg1;
-(BOOL)recipientsDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;

@end
