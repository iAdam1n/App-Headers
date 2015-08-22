/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:12 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBRequestPriorityResolving.h>

@class FBScenePath, NSSet;

@interface FBScenePathPriorityResolver : NSObject <FBRequestPriorityResolving> {

	FBScenePath* _scenePath;
	long long _policy;
	NSSet* _whitelist;
	ReadWriteLock _lock;

}
+(SCD_Struct_FB156)_resolvePriorityWithNoScenePathMatchForRequestScenePath:(id)arg1 andRequestPriority:(long long)arg2 withPolicy:(long long)arg3 ;
+(SCD_Struct_FB156)_resolvePriorityForRequestScenePath:(id)arg1 andRequestPriority:(long long)arg2 againstActiveScenePath:(id)arg3 withPolicy:(long long)arg4 ;
-(id)initWithPolicy:(long long)arg1 whitelist:(id)arg2 ;
-(SCD_Struct_FB156)resolvePriorityForRequest:(id)arg1 clientPriority:(long long)arg2 ;
-(BOOL)updatePolicy:(long long)arg1 ;
-(void)updateScenePath:(id)arg1 ;
-(id)init;
@end
