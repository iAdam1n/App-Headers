/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, SLKDependencies;

@interface SLKMentionPredicateCache : NSObject {

	NSMutableDictionary* _mentionPredicates;
	SLKDependencies* _dependencies;

}

@property (nonatomic,retain) NSMutableDictionary * mentionPredicates;              //@synthesize mentionPredicates=_mentionPredicates - In the implementation block
@property (assign,nonatomic,__weak) SLKDependencies * dependencies;                //@synthesize dependencies=_dependencies - In the implementation block
-(void)setMentionPredicates:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)mentionPredicates;
-(id)mentionPredicateForUser:(id)arg1 keyToMatch:(id)arg2 canHaveAtChannelMentions:(BOOL)arg3 ;
-(void)resetCache;
-(id)initWithDependencies:(id)arg1 ;
-(SLKDependencies *)dependencies;
-(void)setDependencies:(SLKDependencies *)arg1 ;
@end
