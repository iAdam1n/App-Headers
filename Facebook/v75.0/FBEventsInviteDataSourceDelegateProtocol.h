/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBEventsInviteDataSourceDelegateProtocol <NSObject>
@optional
-(void)dataSource:(id)arg1 didSelectInviteeCandidate:(id)arg2;
-(void)dataSource:(id)arg1 didReceiveRemainingInvites:(id)arg2;

@required
-(BOOL)dataSource:(id)arg1 isCandidateSelected:(id)arg2;
-(BOOL)dataSource:(id)arg1 isCandidateInvited:(id)arg2;
-(BOOL)isInvitesLimitReached;

@end
