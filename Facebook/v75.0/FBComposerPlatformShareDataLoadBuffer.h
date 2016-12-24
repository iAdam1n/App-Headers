/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBComposerPlatformShareDataLoadListener.h>

@protocol FBComposerPlatformShareDataLoadListener;
@class NSString, NSMutableArray;

@interface FBComposerPlatformShareDataLoadBuffer : NSObject <FBComposerPlatformShareDataLoadListener> {

	BOOL _areEventsAllowedThroughToListener;
	NSString* _compositionID;
	id<FBComposerPlatformShareDataLoadListener> _listener;
	NSMutableArray* _bufferedPayloads;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)platformLoadedPayload:(id)arg1 forCompositionID:(id)arg2 ;
-(void)wipeEventState;
-(id)initWithCompositionID:(id)arg1 listener:(id)arg2 ;
-(void)allowEventsThroughToListener;
-(void)doNotAllowEventsThroughToListener;
@end
