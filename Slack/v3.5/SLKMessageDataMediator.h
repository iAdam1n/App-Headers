/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SLKDependencies;

@interface SLKMessageDataMediator : NSObject {

	SLKDependencies* _dependencies;

}

@property (assign,nonatomic,__weak) SLKDependencies * dependencies;              //@synthesize dependencies=_dependencies - In the implementation block
-(id)initWithDependencies:(id)arg1 ;
-(void)joinMostRecentChannel;
-(void)joinGenericChannel:(id)arg1 ;
-(void)shouldJoinGenericChannelType:(unsigned long long)arg1 ;
-(void)shouldInviteUsers:(id)arg1 toChannel:(id)arg2 ;
-(SLKDependencies *)dependencies;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDependencies:(SLKDependencies *)arg1 ;
@end
