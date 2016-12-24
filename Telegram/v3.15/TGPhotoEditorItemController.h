/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGViewController.h>
#import <Telegram/TGViewControllerNavigationBarAppearance.h>

@protocol PGPhotoEditorItem, TGPhotoEditorToolView;
@class UIView, UILabel, TGPhotoEditorToolButtonsView, PGPhotoEditor, TGPhotoEditorPreviewView, NSString;

@interface TGPhotoEditorItemController : TGViewController <TGViewControllerNavigationBarAppearance> {

	id<PGPhotoEditorItem> _editorItem;
	UIView* _wrapperView;
	UIView* _portraitToolsWrapperView;
	UIView* _landscapeToolsWrapperView;
	UILabel* _portraitTitleLabel;
	UILabel* _landscapeTitleLabel;
	UIView*<TGPhotoEditorToolView> _toolAreaView;
	UIView*<TGPhotoEditorToolView> _portraitToolControlView;
	UIView*<TGPhotoEditorToolView> _landscapeToolControlView;
	TGPhotoEditorToolButtonsView* _portraitButtonsView;
	TGPhotoEditorToolButtonsView* _landscapeButtonsView;
	UIView* _initialPreviewSuperview;
	BOOL _dismissing;
	BOOL _animating;
	BOOL _enhanceInitialAppearance;
	BOOL _initialAppearance;
	BOOL _skipProcessingOnCompletion;
	/*^block*/id _editorItemUpdated;
	/*^block*/id _beginTransitionIn;
	/*^block*/id _beginTransitionOut;
	/*^block*/id _finishedCombinedTransition;
	double _toolbarLandscapeSize;
	PGPhotoEditor* _photoEditor;
	TGPhotoEditorPreviewView* _previewView;

}

@property (assign,nonatomic,__weak) PGPhotoEditor * photoEditor;                         //@synthesize photoEditor=_photoEditor - In the implementation block
@property (assign,nonatomic,__weak) TGPhotoEditorPreviewView * previewView;              //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,copy) id editorItemUpdated;                                         //@synthesize editorItemUpdated=_editorItemUpdated - In the implementation block
@property (nonatomic,copy) id beginTransitionIn;                                         //@synthesize beginTransitionIn=_beginTransitionIn - In the implementation block
@property (nonatomic,copy) id beginTransitionOut;                                        //@synthesize beginTransitionOut=_beginTransitionOut - In the implementation block
@property (nonatomic,copy) id finishedCombinedTransition;                                //@synthesize finishedCombinedTransition=_finishedCombinedTransition - In the implementation block
@property (assign,nonatomic) double toolbarLandscapeSize;                                //@synthesize toolbarLandscapeSize=_toolbarLandscapeSize - In the implementation block
@property (assign,nonatomic) BOOL initialAppearance;                                     //@synthesize initialAppearance=_initialAppearance - In the implementation block
@property (assign,nonatomic) BOOL skipProcessingOnCompletion;                            //@synthesize skipProcessingOnCompletion=_skipProcessingOnCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)requiredNavigationBarStyle;
-(BOOL)navigationBarShouldBeHidden;
-(void)setPhotoEditor:(PGPhotoEditor *)arg1 ;
-(CGSize)referenceViewSize;
-(double)toolbarLandscapeSize;
-(PGPhotoEditor *)photoEditor;
-(BOOL)initialAppearance;
-(id)beginTransitionOut;
-(void)setBeginTransitionIn:(id)arg1 ;
-(void)setBeginTransitionOut:(id)arg1 ;
-(id)initWithEditorItem:(id)arg1 photoEditor:(id)arg2 previewView:(id)arg3 ;
-(void)setToolbarLandscapeSize:(double)arg1 ;
-(void)setEditorItemUpdated:(id)arg1 ;
-(void)prepareForCombinedAppearance;
-(void)finishedCombinedAppearance;
-(void)attachPreviewView:(id)arg1 ;
-(id)beginTransitionIn;
-(void)setInitialAppearance:(BOOL)arg1 ;
-(void)setSkipProcessingOnCompletion:(BOOL)arg1 ;
-(void)setFinishedCombinedTransition:(id)arg1 ;
-(void)transitionOutWithCompletion:(/*^block*/id)arg1 ;
-(id)editorItemUpdated;
-(void)setToolTitle:(id)arg1 ;
-(BOOL)skipProcessingOnCompletion;
-(id)finishedCombinedTransition;
-(void)_applyDefaultEnhanceIfNeeded;
-(void)dealloc;
-(BOOL)prefersStatusBarHidden;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(TGPhotoEditorPreviewView *)previewView;
-(void)setPreviewView:(TGPhotoEditorPreviewView *)arg1 ;
-(void)updateLayout:(long long)arg1 ;
-(void)transitionIn;
@end
