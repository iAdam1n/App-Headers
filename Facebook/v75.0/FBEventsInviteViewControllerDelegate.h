/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBEventsInviteViewControllerDelegate <NSObject>
@optional
-(BOOL)inviteController:(id)arg1 shouldSelectPerson:(id)arg2 forEventID:(id)arg3;

@required
-(void)inviteController:(id)arg1 didFinishWithSelection:(id)arg2 forEventID:(id)arg3 withNote:(id)arg4;
-(void)didCancelWithInviteController:(id)arg1 forEventID:(id)arg2;

@end
