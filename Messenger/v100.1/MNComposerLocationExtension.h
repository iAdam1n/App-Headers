/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAbstractComposerTrayExtension.h>
#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNLocationPickerPresenterDelegate.h>

@class MNComposerLocationExtensionInjector, MNComposerExtensionTrayPresentationStrategy, MNLocationPickerViewController, NSString;

@interface MNComposerLocationExtension : MNAbstractComposerTrayExtension <FBClassInjectable, MNLocationPickerPresenterDelegate> {

	MNComposerLocationExtensionInjector* _injector;
	MNComposerExtensionTrayPresentationStrategy* _presentationStrategy;
	MNLocationPickerViewController* _locationPickerViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(id)_composerIcon;
-(id)extensionModule;
-(void)didSelect:(BOOL)arg1 ;
-(BOOL)shouldPresent:(BOOL)arg1 ;
-(id)presentationStrategy;
-(BOOL)isEligible;
-(void)locationPickerPresenter:(id)arg1 didSendWithLocationAttachmentData:(id)arg2 ;
-(void)locationPickerPresenter:(id)arg1 didDismissAlertView:(id)arg2 ;
-(void)locationPickerPresenterDidDismiss:(id)arg1 ;
-(void)_presentLocationPicker;
-(id)extensionIdentifier;
-(long long)category;
-(id)tabBarItem;
@end

