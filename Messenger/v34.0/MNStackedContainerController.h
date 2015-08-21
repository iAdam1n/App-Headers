/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:41 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBKeyboardObserverDelegate.h>

@class FBKeyboardObserver, MNStackedContainerView, NSString;

@interface MNStackedContainerController : NSObject <FBKeyboardObserverDelegate> {

	FBKeyboardObserver* _keyboardObserver;
	MNStackedContainerView* _stackedContainerView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopObservingKeyboardNotifications;
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)startObservingKeyboardNotifications;
-(id)initWithStackedContainerView:(id)arg1 ;
-(void)dealloc;
@end

