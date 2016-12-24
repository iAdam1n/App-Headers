/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBTagSearchViewDelegate <NSObject>
@optional
-(void)tagSearchViewWillAppear:(id)arg1 preserveScrollEnabled:(BOOL)arg2;
-(void)tagSearchViewDidAppear:(id)arg1;
-(void)tagSearchViewWillDisappear:(id)arg1 animated:(BOOL)arg2;
-(void)tagSearchViewDidDisappear:(id)arg1;
-(void)didFinishTagEditing:(id)arg1 withAvatar:(id)arg2 loggingSource:(id)arg3;

@required
-(void)tagSearchView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;
-(void)tagSearchView:(id)arg1 searchTextDidChange:(id)arg2;

@end
