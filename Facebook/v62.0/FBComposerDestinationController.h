/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBComposerDestinationChooserDelegate.h>
#import <Facebook/FBComposerDestinationOptionsProviderDelegate.h>
#import <Facebook/FBComposerPickerController.h>
#import <Facebook/FBAvatarPickerControllerDelegate.h>
#import <Facebook/FBComposerCompositionStateChangedListener.h>

@protocol FBServiceTransactionMutating, FBComposerUpdateHandler;
@class FBComposerDestinationChooserTableViewController, FBComposerDestinationOption, FBComposerDestinationOptionsProvider, FBUserSession, NSArray, FBComposerCompositionState, NSString;

@interface FBComposerDestinationController : NSObject <FBComposerDestinationChooserDelegate, FBComposerDestinationOptionsProviderDelegate, FBComposerPickerController, FBAvatarPickerControllerDelegate, FBComposerCompositionStateChangedListener> {

	FBComposerDestinationChooserTableViewController* _destinationChooserTableViewController;
	FBComposerDestinationOption* _currentDestination;
	FBComposerDestinationOptionsProvider* _destinationOptionsProvider;
	/*^block*/id _secondaryChooserFactory;
	FBUserSession* _session;
	NSArray* _destinationOptions;
	FBComposerCompositionState* _compositionState;
	id<FBServiceTransactionMutating> _token;
	id<FBComposerUpdateHandler> _updateHandler;
	BOOL _userHasInteractedWithDestinationChooser;

}

@property (nonatomic,readonly) BOOL userHasInteractedWithDestinationChooser;              //@synthesize userHasInteractedWithDestinationChooser=_userHasInteractedWithDestinationChooser - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2 ;
-(void)avatarPicker:(id)arg1 didFinishWithSelection:(id)arg2 ;
-(id)presentableViewController;
-(unsigned long long)popoverStyle;
-(CGSize)popoverContentSizeForOrientation:(long long)arg1 ;
-(void)dismissPopoverController;
-(unsigned long long)popoverAllowedArrowDirection;
-(BOOL)userHasInteractedWithDestinationChooser;
-(void)destinationChooser:(id)arg1 hasChosenDestinationOption:(id)arg2 ;
-(void)destinationChooser:(id)arg1 willAppear:(BOOL)arg2 ;
-(void)_setDestinationOption:(id)arg1 ;
-(id)_filterDestinationOptions:(id)arg1 ;
-(void)_configureViewControllers;
-(id)_backButtonForSecondaryNavigation;
-(void)closePicker;
-(void)selectedDestinationOption:(id)arg1 ;
-(void)optionsHaveChanged:(id)arg1 ;
-(id)initWithSession:(id)arg1 secondaryDestinationChooserFactory:(/*^block*/id)arg2 updateHandler:(id)arg3 ;
@end
