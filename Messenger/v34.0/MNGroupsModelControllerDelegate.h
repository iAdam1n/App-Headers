/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol MNGroupsModelControllerDelegate <NSObject>
@required
-(void)groupModelController:(id)arg1 didRemoveThreadWithKey:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)groupModelController:(id)arg1 didMoveThreadWithKey:(id)arg2 toIndex:(unsigned long long)arg3;
-(void)groupModelControllerDidFinishFetch:(id)arg1;
-(void)groupModelControllerDidFailFetch:(id)arg1 error:(id)arg2;
-(void)groupModelControllerDidFinishLoadingViewModels:(id)arg1;
-(void)groupModelControllerDidFailLoadingViewModels:(id)arg1 error:(id)arg2;

@end

