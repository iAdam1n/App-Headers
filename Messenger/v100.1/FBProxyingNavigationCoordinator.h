/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNavigationCoordinator.h>

@class UIResponder, NSString;

@interface FBProxyingNavigationCoordinator : NSObject <FBNavigationCoordinator> {

	UIResponder* _responder;
	NSString* _description;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithViewController:(id)arg1 ;
+(id)newWithResponder:(id)arg1 ;
+(id)newWithView:(id)arg1 ;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
@end
