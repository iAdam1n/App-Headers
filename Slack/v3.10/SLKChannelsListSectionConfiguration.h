/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SLKChannelsListSectionConfiguration : NSObject {

	BOOL _shouldShowHeaderWhenEmpty;
	BOOL _hidden;
	long long _sectionType;

}

@property (assign,nonatomic) long long sectionType;                       //@synthesize sectionType=_sectionType - In the implementation block
@property (assign,nonatomic) BOOL shouldShowHeaderWhenEmpty;              //@synthesize shouldShowHeaderWhenEmpty=_shouldShowHeaderWhenEmpty - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                 //@synthesize hidden=_hidden - In the implementation block
-(void)setShouldShowHeaderWhenEmpty:(BOOL)arg1 ;
-(BOOL)shouldShowHeaderWhenEmpty;
-(id)initWithSectionType:(long long)arg1 shouldShowHeaderWhenEmpty:(BOOL)arg2 hidden:(BOOL)arg3 ;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(long long)sectionType;
-(void)setSectionType:(long long)arg1 ;
@end
