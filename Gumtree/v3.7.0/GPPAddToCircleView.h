/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/GPPView.h>
#import <Gumtree/GPPDropDownViewDataSource.h>
#import <Gumtree/GPPDropDownViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class GPPACL, UIView, UIButton, UIViewController, GPPDropDownView, GPPLabel, GPPACLEntry, NSArray;

@interface GPPAddToCircleView : GPPView <GPPDropDownViewDataSource, GPPDropDownViewDelegate, UIAlertViewDelegate, UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate> {

	unsigned long long _selectedCircleIndex;
	GPPACL* _individualACLsNotInCircles;
	UIView* _circlesDropDownSuperView;
	UIButton* _addToCirclePickerButton;
	BOOL _userChangedDropDownValue;
	BOOL _didApplyDefaultCheckboxValue;
	BOOL _observerRegistered;
	BOOL _isCreatingCircle;
	UIViewController* _viewController;
	UIButton* _addToCircleButton;
	GPPDropDownView* _circlesDropDownView;
	GPPLabel* _addToCircleLabel;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;                  //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) UIButton * addToCircleButton;                       //@synthesize addToCircleButton=_addToCircleButton - In the implementation block
@property (assign,nonatomic,__weak) GPPDropDownView * circlesDropDownView;              //@synthesize circlesDropDownView=_circlesDropDownView - In the implementation block
@property (assign,nonatomic,__weak) GPPLabel * addToCircleLabel;                        //@synthesize addToCircleLabel=_addToCircleLabel - In the implementation block
@property (nonatomic,readonly) GPPACLEntry * selectedCircle; 
@property (nonatomic,readonly) NSArray * selectedACLs; 
@property (assign,nonatomic) BOOL isCreatingCircle;                                     //@synthesize isCreatingCircle=_isCreatingCircle - In the implementation block
-(BOOL)shouldBeHiding;
-(UIButton *)addToCircleButton;
-(void)toggle:(id)arg1 ;
-(void)toggleAddToCircleCheckbox:(BOOL)arg1 ;
-(GPPDropDownView *)circlesDropDownView;
-(void)registerForNativeShareControllerChanges;
-(void)showAddToCirclePicker;
-(void)unregisterForNativeShareControllerChanges;
-(void)updateIndividualACLsNotInCircles;
-(id)circleWithName:(id)arg1 ;
-(void)selectCircle:(id)arg1 ;
-(void)updateAddToCircleTitle;
-(void)updateAddToCircleCheckboxEnabledState;
-(void)updateAccessibilityValue;
-(NSArray *)selectedACLs;
-(GPPLabel *)addToCircleLabel;
-(CGRect)frameForSubstring:(id)arg1 inLabel:(id)arg2 ;
-(void)showCreateCircleView;
-(void)insertCircleWithName:(id)arg1 event:(id)arg2 ;
-(void)revertDropDownSelection;
-(void)displayErrorWithTitle:(id)arg1 ;
-(void)setIsCreatingCircle:(BOOL)arg1 ;
-(CGPoint)relativePositionForCirclesDropDown;
-(unsigned long long)numberOfOptionsForDropDownView:(id)arg1 ;
-(id)gppDropDownView:(id)arg1 optionForRowAtIndex:(unsigned long long)arg2 ;
-(void)gppDropDownViewDidExpand:(id)arg1 ;
-(void)gppDropDownView:(id)arg1 didSelectRowAtIndex:(unsigned long long)arg2 ;
-(BOOL)shouldAddToCircle;
-(void)setAddToCircleButton:(UIButton *)arg1 ;
-(void)setCirclesDropDownView:(GPPDropDownView *)arg1 ;
-(void)setAddToCircleLabel:(GPPLabel *)arg1 ;
-(BOOL)isCreatingCircle;
-(void)refresh;
-(void)dealloc;
-(void)layoutSubviews;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)awakeFromNib;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(GPPACLEntry *)selectedCircle;
-(void)updateVisibility;
-(void)keyboardWillShow:(id)arg1 ;
@end

