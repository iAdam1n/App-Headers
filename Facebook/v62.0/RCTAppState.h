/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/RCTEventEmitter.h>

@class NSString;

@interface RCTAppState : RCTEventEmitter {

	NSString* _lastKnownState;

}
+(id)moduleName;
+(id)__rct_export__1180;
+(void)load;
-(id)constantsToExport;
-(id)methodQueue;
-(id)supportedEvents;
-(void)handleAppStateDidChange:(id)arg1 ;
-(void)getCurrentAppState:(/*^block*/id)arg1 error:(/*^block*/id)arg2 ;
-(void)startObserving;
-(void)stopObserving;
-(void)handleMemoryWarning;
@end
