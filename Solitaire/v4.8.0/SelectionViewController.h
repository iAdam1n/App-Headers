/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/MWPViewController.h>
#import <SolitaireFree/SelectionViewDelegate.h>
#import <SolitaireFree/ComponentDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <SolitaireFree/ImageSelectorDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UIScrollView, MWFlatButton, SelectionViewGameState, UIImageView, NSMutableArray, UIImagePickerController, ImageSelectorController, UIView, UINavigationController, NSString;

@interface SelectionViewController : MWPViewController <SelectionViewDelegate, ComponentDelegate, UIImagePickerControllerDelegate, ImageSelectorDelegate, UINavigationControllerDelegate> {

	UIScrollView* componentsScroll;
	MWFlatButton* backButton;
	BOOL leavingView;
	SelectionViewGameState* gs;
	UIImageView* navBar;
	UIImageView* bottomLine;
	NSMutableArray* componentViews;
	BOOL setViews;
	UIImagePickerController* imagePicker;
	ImageSelectorController* imageSelector;
	UIImageView* markedOverlay;
	UIView* markedComponent;
	UINavigationController* tempNavController;
	NSMutableArray* duplicateFiles;
	BOOL backButtonPressed;
	int _type;

}

@property (assign) int type;                                        //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutUI;
-(id)initWithMain:(id)arg1 ;
-(CGSize)suggestedSize:(long long)arg1 ;
-(void)loadGameState;
-(void)layoutUI:(long long)arg1 ;
-(void)cancelSelection;
-(void)setConfig;
-(void)logEnteredSurfaceSelector;
-(id)getComponentArray;
-(BOOL)hasCustom;
-(void)selectedView:(id)arg1 ;
-(void)setMarkedView;
-(void)setMarkedView:(BOOL)arg1 ;
-(void)backButtonPressed:(BOOL)arg1 ;
-(void)customButtonPressed;
-(void)removeCustomBackground;
-(void)removeCustomCardBack;
-(void)selectViewFinished:(int)arg1 ;
-(void)finishShowingImagePicker;
-(void)presentImagePickerWithCompletion:(/*^block*/id)arg1 ;
-(void)alertInvalidPhotoPermissions;
-(void)removeImagePicker:(BOOL)arg1 ;
-(id)addBorderToCardBack:(id)arg1 ;
-(void)removeImageSelector:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)selectedComponent:(id)arg1 ;
-(void)selectionCancelled:(BOOL)arg1 ;
-(void)imageSelectedAtPath:(id)arg1 ;
-(void)imagesSelectedAtPortraitPath:(id)arg1 landscapePath:(id)arg2 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)displayContents;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)imagePickerController:(id)arg1 didFinishPickingImage:(id)arg2 editingInfo:(id)arg3 ;
-(void)backButtonPressed;
@end
