/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SLKDependencies;

@interface SLKMentionsCountManager : NSObject {

	SLKDependencies* _dependencies;

}

@property (assign,nonatomic,__weak) SLKDependencies * dependencies;              //@synthesize dependencies=_dependencies - In the implementation block
-(void)channelsUpdated:(id)arg1 ;
-(void)showMentions:(long long)arg1 ;
-(void)hideMentions;
-(void)dealloc;
-(void)updateMentions;
-(id)initWithDependencies:(id)arg1 ;
-(SLKDependencies *)dependencies;
-(void)registerForNotifications;
-(void)setDependencies:(SLKDependencies *)arg1 ;
@end
