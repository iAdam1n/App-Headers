/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAutoUpdaterAutomaticRestartBehavior.h>
#import <Facebook/FBAutoUpdaterAutomaticRestartBehaviorListening.h>

@class NSArray, FBAutoUpdaterAutomaticRestartBehaviorListeningAnnouncer, NSString;

@interface FBAutoUpdaterCompositeRestartBehavior : NSObject <FBAutoUpdaterAutomaticRestartBehavior, FBAutoUpdaterAutomaticRestartBehaviorListening> {

	NSArray* _componentBehaviors;
	/*^block*/id _verifier;
	FBAutoUpdaterAutomaticRestartBehaviorListeningAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)anyBehavior:(id)arg1 ;
+(id)allBehaviors:(id)arg1 ;
-(void)behaviorNowPermitsAutomaticRestart:(id)arg1 ;
-(BOOL)autoUpdaterShouldAutomaticallyRestart;
-(void)addRestartBehaviorListener:(id)arg1 ;
-(void)removeRestartBehaviorListener:(id)arg1 ;
-(id)initWithComponentBehaviors:(id)arg1 verifier:(/*^block*/id)arg2 ;
@end
