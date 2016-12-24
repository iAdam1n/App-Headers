/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface MNModelSubscriptionUpdateTracker : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _keyToModelMap;
	NSMutableDictionary* _keyToErrorMap;
	NSMutableDictionary* _keyToProgressMap;

}
-(id)mostValuableUpdateForKey:(id)arg1 ;
-(id)mostRecentUpdateForKey:(id)arg1 ;
-(void)setUpdate:(id)arg1 forKey:(id)arg2 ;
-(id)modelForKey:(id)arg1 ;
-(void)_setModel:(id)arg1 forKey:(id)arg2 ;
-(void)_setError:(id)arg1 forKey:(id)arg2 ;
-(void)_setProgress:(long long)arg1 forKey:(id)arg2 ;
-(id)initWithQueue:(id)arg1 ;
@end
