/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Gumtree/ApptentiveCollectionViewDataSource.h>
#import <Gumtree/ATSurveyViewModelDelegate.h>

@class UIColor, ApptentiveSurveyViewModel, ApptentiveSurveyGreetingView, UIView, ApptentiveSurveySubmitButton, UIBarButtonItem, NSIndexPath, NSString;

@interface ApptentiveSurveyViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, UITextViewDelegate, UITextFieldDelegate, ApptentiveCollectionViewDataSource, ATSurveyViewModelDelegate> {

	double _lineHeightOfQuestionFont;
	ApptentiveSurveyViewModel* _viewModel;
	ApptentiveSurveyGreetingView* _headerView;
	UIView* _headerBackgroundView;
	UIView* _footerView;
	UIView* _footerBackgroundView;
	ApptentiveSurveySubmitButton* _submitButton;
	UIBarButtonItem* _missingRequiredItem;
	NSIndexPath* _editingIndexPath;
	double _iOS9ToolbarInset;

}

@property (nonatomic,retain) ApptentiveSurveyGreetingView * headerView;                //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * headerBackgroundView;                            //@synthesize headerBackgroundView=_headerBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                      //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) UIView * footerBackgroundView;                            //@synthesize footerBackgroundView=_footerBackgroundView - In the implementation block
@property (nonatomic,retain) ApptentiveSurveySubmitButton * submitButton;              //@synthesize submitButton=_submitButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * missingRequiredItem;                    //@synthesize missingRequiredItem=_missingRequiredItem - In the implementation block
@property (nonatomic,retain) NSIndexPath * editingIndexPath;                           //@synthesize editingIndexPath=_editingIndexPath - In the implementation block
@property (nonatomic,readonly) double lineHeightOfQuestionFont;                        //@synthesize lineHeightOfQuestionFont=_lineHeightOfQuestionFont - In the implementation block
@property (assign,nonatomic) double iOS9ToolbarInset;                                  //@synthesize iOS9ToolbarInset=_iOS9ToolbarInset - In the implementation block
@property (nonatomic,retain) ApptentiveSurveyViewModel * viewModel;                    //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIColor * validColor; 
@property (nonatomic,readonly) UIColor * invalidColor; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
-(void)showAbout:(id)arg1 ;
-(BOOL)sectionAtIndexIsValid:(long long)arg1 ;
-(UIColor *)validColor;
-(UIColor *)invalidColor;
-(void)adjustForKeyboard:(id)arg1 ;
-(void)sizeDidUpdate:(id)arg1 ;
-(UIView *)headerBackgroundView;
-(UIView *)footerBackgroundView;
-(ApptentiveSurveySubmitButton *)submitButton;
-(UIBarButtonItem *)missingRequiredItem;
-(NSIndexPath *)editingIndexPath;
-(double)lineHeightOfQuestionFont;
-(void)maybeAnimateOtherSizeChangeAtIndexPath:(id)arg1 ;
-(void)setEditingIndexPath:(NSIndexPath *)arg1 ;
-(double)iOS9ToolbarInset;
-(void)setIOS9ToolbarInset:(double)arg1 ;
-(void)submit:(id)arg1 ;
-(void)setHeaderBackgroundView:(UIView *)arg1 ;
-(void)setFooterBackgroundView:(UIView *)arg1 ;
-(void)setSubmitButton:(ApptentiveSurveySubmitButton *)arg1 ;
-(void)setMissingRequiredItem:(UIBarButtonItem *)arg1 ;
-(void)viewModel:(id)arg1 didDeselectAnswerAtIndexPath:(id)arg2 ;
-(void)viewModelValidationChanged:(id)arg1 isValid:(BOOL)arg2 ;
-(UIColor *)backgroundColor;
-(void)dealloc;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidLoad;
-(void)setToolbarHidden:(BOOL)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textViewShouldEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(ApptentiveSurveyGreetingView *)headerView;
-(void)setHeaderView:(ApptentiveSurveyGreetingView *)arg1 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(void)textFieldChanged:(id)arg1 ;
-(ApptentiveSurveyViewModel *)viewModel;
-(void)setViewModel:(ApptentiveSurveyViewModel *)arg1 ;
-(void)close:(id)arg1 ;
@end
