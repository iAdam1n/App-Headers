/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNGroupsModelControllerDelegate <NSObject>
@required
-(void)groupModelController:(id)arg1 didRemoveThreadWithKey:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)groupModelController:(id)arg1 didMoveThreadWithKey:(id)arg2 toIndex:(unsigned long long)arg3;
-(void)groupModelControllerDidFinishFetch:(id)arg1;
-(void)groupModelControllerDidFailFetch:(id)arg1 error:(id)arg2;
-(void)groupModelControllerDidFinishLoadingViewModels:(id)arg1;
-(void)groupModelControllerDidFailLoadingViewModels:(id)arg1 error:(id)arg2;
-(void)groupModelControllerDidFinishFetchingAllGroups:(id)arg1;

@end
