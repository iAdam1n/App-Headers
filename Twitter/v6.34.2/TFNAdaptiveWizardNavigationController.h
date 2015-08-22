/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNNavigationController.h>

@class NSString, TFNAdaptiveWizardFlow, NSMutableArray;

@interface TFNAdaptiveWizardNavigationController : TFNNavigationController {

	NSString* _wizardContextName;
	TFNAdaptiveWizardFlow* _wizardFlow;
	NSMutableArray* _firstViewControllers;

}

@property (nonatomic,readonly) NSString * wizardContextName;                     //@synthesize wizardContextName=_wizardContextName - In the implementation block
@property (nonatomic,readonly) TFNAdaptiveWizardFlow * wizardFlow;               //@synthesize wizardFlow=_wizardFlow - In the implementation block
@property (nonatomic,readonly) BOOL isAtEnd; 
@property (nonatomic,retain) NSMutableArray * firstViewControllers;              //@synthesize firstViewControllers=_firstViewControllers - In the implementation block
+(id)toolbarButtonsWithTarget:(id)arg1 continueButtonLabel:(id)arg2 continueButtonAction:(SEL)arg3 secondaryButtonLabel:(id)arg4 secondaryButtonAction:(SEL)arg5 ;
+(id)toolbarButtonsWithTarget:(id)arg1 continueButtonLabel:(id)arg2 continueButtonAction:(SEL)arg3 ;
+(unsigned long long)_interfaceOrientationMaskForInterfaceOrientation:(long long)arg1 ;
-(void)evaluateNextStep;
-(TFNAdaptiveWizardFlow *)wizardFlow;
-(NSString *)wizardContextName;
-(void)progressStarted:(double)arg1 ;
-(void)hideProgressBar;
-(void)progressCompleted;
-(void)progressUpdated:(double)arg1 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 wizardFlow:(id)arg3 wizardContextName:(id)arg4 ;
-(BOOL)supportsInteractivePops;
-(NSMutableArray *)firstViewControllers;
-(void)setFirstViewControllers:(NSMutableArray *)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(CGSize)preferredContentSize;
-(BOOL)disablesAutomaticKeyboardDismissal;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
-(BOOL)isAtEnd;
@end
